#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray


def clamp(value, min_value, max_value):
    return max(min(value, max_value), min_value)


class ArmDirectController(Node):
    def __init__(self):
        super().__init__('arm_joy_direct')

        # 发布到 position controller（不插值）
        self._pub = self.create_publisher(Float64MultiArray, '/dummy_controller/commands', 10)

        # 订阅手柄
        self._joy_sub = self.create_subscription(
            Joy,
            '/joy',
            self.joy_callback,
            10
        )

        self.joint_names = ["j1", "j2", "j3", "j4", "j5", "j6"]
        self.current_positions = [0.0] * len(self.joint_names)
        self._last_sent_positions = [0.0] * len(self.joint_names)

        self.step = 0.02
        self.threshold = 0.05

        self.get_logger().info('ArmDirectController initialized.')

    def joy_callback(self, msg: Joy):
        axes = msg.axes

        self.current_positions[0] -= axes[0] * self.step  # 左摇杆左右
        self.current_positions[1] += axes[1] * self.step  # 左摇杆上下
        self.current_positions[2] += axes[3] * self.step  # 右摇杆左右
        self.current_positions[3] += axes[2] * self.step  # 右摇杆上下

        significant_change = any(
            abs(self.current_positions[i] - self._last_sent_positions[i]) > self.threshold
            for i in range(len(self.current_positions))
        )

        if significant_change:
            self._last_sent_positions = self.current_positions.copy()
            formatted = [f"{p:.2f}" for p in self.current_positions]
            self.get_logger().info(f"Sending positions: {formatted}")

            msg = Float64MultiArray()
            msg.data = self.current_positions
            self._pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = ArmDirectController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info('Shutting down ArmDirectController...')
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
