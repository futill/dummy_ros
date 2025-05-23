# dummy2_can2eth_server.launch.py
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    ip_address_arg = DeclareLaunchArgument(
        name='ip_address',
        default_value='192.168.8.88',
        description='IP address for the UDP client'
    )
    job_node = Node(
        package='joy',
        executable='joy_node',
        name='joy_node',
    )
    arm_trajectory_controller = Node(
        package='dummy2_can2eth',
        executable='arm_joy',
        name='arm_joy',
    )

    dummy2_can2eth_server_node = Node(
        package='dummy2_can2eth',
        executable='dummy2_can2eth_server',
        name='dummy2_can2eth_server',
        parameters=[{'ip_address': LaunchConfiguration('ip_address')}]
    )

    return LaunchDescription([
        ip_address_arg,
        job_node,
        dummy2_can2eth_server_node,
        arm_trajectory_controller
    ])
