#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import serial
import time
import struct
import re
from dummy2_interface.srv import InitCan2eth
from dummy2_interface.srv import WriteCan2eth
from dummy2_interface.srv import ReadCan2eth
from std_msgs.msg import Int8

class Dummy2Can2EthServer(Node):
    def __init__(self):
        super().__init__('dummy2_can2eth_server')
        self.get_logger().info('Initializing Dummy2Can2EthServer')

        self.actuator_pos = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]  
        self.actuator_vel = [0.1, 0.0, 0.0, 0.0, 0.0, 0.0]  
        self.last_positions = [None] * 6
        self.last_positions_task = [0.0] * 6

        self.target_positions = [0.0] * 6 
        self.flag = [0.0] * 6 
        self.position_tolerance = 5
        self.initialized = False   
        self.last_update_time = self.get_clock().now()
        self.stable_wait_duration = rclpy.duration.Duration(seconds=0.1)  # 100ms

        self.pos = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]  
        #self.vel = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0] 

        self.subscription = self.create_subscription(Int8,
                                        "/grip",
                                        self.grip,
                                        1)
        self.declare_parameter('serial_port', '/dev/ttyUSB0')
        self.declare_parameter('baudrate', 115200)
        self._serial_port = self.get_parameter('serial_port').get_parameter_value().string_value
        self._baudrate = self.get_parameter('baudrate').get_parameter_value().integer_value
        self._timeout = 1.0

        
        self._serial = None
        try:
            self._serial = serial.Serial(
                port=self._serial_port,
                baudrate=self._baudrate,
                timeout=self._timeout,
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE
            )
            self.get_logger().info(f'Serial port {self._serial_port} opened successfully')
            time.sleep(1)  
        except serial.SerialException as e:
            self.get_logger().error(f'Failed to open serial port: {e}')
           

       
        self.init_srv = self.create_service(InitCan2eth, 'init_can2eth', self.init_can2eth_callback)
        self.write_srv = self.create_service(WriteCan2eth, 'write_can2eth', self.write_can2eth_callback)
        self.read_srv = self.create_service(ReadCan2eth, 'read_can2eth', self.read_can2eth_callback)


        self._is_active = False  
    
    def grip(self, msg):
        state = msg.data
        if state == 1:
            frame = bytearray([0x01, 0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6B])
            self._serial.write(frame)
        elif state == 0:
            frame = bytearray([0x01, 0xBD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6B])
            self._serial.write(frame)



    def init_can2eth_callback(self, request, response):
        try:
            if request.action == 'start':
                if not self._serial or not self._serial.is_open:
                    self._serial = serial.Serial(
                        port=self._serial_port,
                        baudrate=self._baudrate,
                        timeout=self._timeout,
                        bytesize=serial.EIGHTBITS,
                        parity=serial.PARITY_NONE,
                        stopbits=serial.STOPBITS_ONE
                    )
                    time.sleep(1)
                self.get_logger().info('Serial communication started')
                response.success = True
            elif request.action == 'stop':
                self._is_active = False
                if self._serial and self._serial.is_open:
                    self._serial.close()
                self.get_logger().info('Serial communication stopped')
                response.success = True
            elif request.action == 'active':
                self._is_active = True
                self.get_logger().info('Control loop activated')
                response.success = True
            elif request.action == 'deactivate': 
                self._is_active = False
                self.get_logger().info('Control loop deactivated')
                response.success = True
            else:
                self.get_logger().warn(f'Unknown action: {request.action}')
                response.success = False
        except Exception as e:
            self.get_logger().error(f'Init failed: {e}')
            response.success = False
        return response

    def write_can2eth_callback(self, request, response):
        if not self._serial or not self._serial.is_open:
            self.get_logger().error('Serial port not open')
            response.success = False
            return response

        self.send_to_dummy2(request)
        time.sleep(0.02)
        response.success = True
        return response

    def read_can2eth_callback(self, request, response):
        self._read_position()
        response.pos_commands = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        response.vel_commands = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        for i in range(6):
                response.pos_commands[i] = self.actuator_pos[i]
            #response.vel_commands[i] = self.actuator_vel[i]
        response.success = True
        return response


    def _read_position(self):
        try:
            self._serial.reset_input_buffer()
            time.sleep(0.02) 
            if self._serial.in_waiting > 0:
                response = self._serial.read(self._serial.in_waiting)
                response_str = response.decode('utf-8', errors='ignore')
                lines = response_str.strip().splitlines()
                updated = False 
                for line in lines:
                    match = re.match(r'ID:\s*(\d+)\s*Angle:\s*([-+]?\d*\.?\d*)', line)
                    if match:
                        joint_id = int(match.group(1)) - 1
                        angle_deg = float(match.group(2))
                        
                        if 0 <= joint_id < 6:
                            self.pos[joint_id] = angle_deg
                            self.actuator_pos[joint_id] = self.pos[joint_id]
                            #self.get_logger().info(f'Updated joint {joint_id + 1}: pos={angle_deg:.4f} deg')
                            updated = True
                return updated
            else:
                self.get_logger().warn('No data in serial buffer')
                return False  
        except Exception as e:
            self.get_logger().error(f'Failed to read position: {e}')
            return False 
        
    def send_to_dummy2(self, request):
        for i in reversed(range(6)):  # 可改为 range(6) 看你需要顺序
            motor_pos = request.pos_commands[i]
            self.target_positions[i] = motor_pos
            self.flag[i] = 0

            packet = bytearray(8)
            packet[0] = i + 1
            packet[1] = 0xFD
            packet[2] = 0x00 if motor_pos >= 0 else 0x01
            if i == 5:
                abs_p_scaled = int(abs(motor_pos) * 3200.0 / 360.0)
            else:
                abs_p_scaled = int(abs(motor_pos) * 50.0 * 3200.0 / 360.0)
            packet[3:7] = struct.pack('>I', abs_p_scaled)
            packet[7] = 0x6B

            self.get_logger().info(f'发送关节 {i + 1}: pos={motor_pos:.4f}, 数据={packet.hex()}')
            self.last_positions[i] = motor_pos
            self._serial.write(packet)
            self._serial.flush()
            time.sleep(0.02)

    def on_shutdown(self):
        self.get_logger().info('Shutting down Dummy2Can2EthServer')
        if self._serial and self._serial.is_open:
            self._serial.close()
            self.get_logger().info('Serial port closed')

def main(args=None):
    rclpy.init(args=args)
    node = Dummy2Can2EthServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.on_shutdown()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()