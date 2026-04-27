import rclpy
from rclpy.node import Node

class ParamNode(Node):

    def __init__(self):
        super().__init__('param_node')

        # Declare parameters
        self.declare_parameter('robot_name', 'LusciferBot')
        self.declare_parameter('speed', 1.0)

        # Timer to print values
        self.timer = self.create_timer(2.0, self.print_params)

    def print_params(self):
        name = self.get_parameter('robot_name').get_parameter_value().string_value
        speed = self.get_parameter('speed').get_parameter_value().double_value

        self.get_logger().info(f'Robot: {name}, Speed: {speed}')


def main(args=None):
    rclpy.init(args=args)
    node = ParamNode()
    rclpy.spin(node)
    rclpy.shutdown()
