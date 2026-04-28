from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([

        Node(
            package='my_first_pkg',
            executable='sensor_node',
            name='sensor_node'
        ),

        Node(
            package='my_first_pkg',
            executable='monitor_node',
            name='monitor_node',
            parameters=[
                {'temp_threshold': 60},
                {'battery_threshold': 30.0}
            ]
        )
    ])
