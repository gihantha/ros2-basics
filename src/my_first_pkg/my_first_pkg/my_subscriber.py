import rclpy
from rclpy.node import Node
from my_first_pkg_interfaces.msg import MyData

class MySubscriber(Node):
    def __init__(self):
        super().__init__('my_subscriber')

        self.subscription = self.create_subscription(
            MyData,
            'person_topic',
            self.listener_callback,
            10
        )

    def listener_callback(self, msg):
        self.get_logger().info(
            f'Received: {msg.name}, {msg.age}, {msg.height}'
        )

def main(args=None):
    rclpy.init(args=args)
    node = MySubscriber()
    rclpy.spin(node)
    rclpy.shutdown()
