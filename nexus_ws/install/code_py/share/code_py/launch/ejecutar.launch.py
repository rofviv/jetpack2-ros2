from launch import LaunchDescription
from launch_ros.actions import Node




def generate_launch_description():

    
    return LaunchDescription([
        Node(
            package='code_py',
            executable='jetpack_api',
            name='jetpack_api',
            output='screen',
            emulate_tty=True,
        ),
        Node(
            package='code_py',
            executable='actuator_control',
            name='actuator_control',
            output='screen',
            emulate_tty=True,
        ),
        Node(
            package='code_py',
            executable='motor_control',
            name='motor_control',
            output='screen',
            emulate_tty=True,
        ),
    ])