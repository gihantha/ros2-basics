import rclpy
from rclpy.node import Node
from my_first_pkg_interfaces.msg import MyData

class MyPublisher(Node):
    def __init__(self):
        super().__init__('my_publisher')
        self.publisher_ = self.create_publisher(MyData, 'person_topic', 10)
        self.timer = self.create_timer(1.0, self.publish_data)
        self.count = 0

    def publish_data(self):
        msg = MyData()
        msg.name = "Luscifer"
        msg.age = self.count
        msg.height = 1.75

        self.publisher_.publish(msg)
        self.get_logger().info(f'Sending: {msg.name}, {msg.age}, {msg.height}')
        self.count += 1

def main(args=None):
    rclpy.init(args=args)
    node = MyPublisher()
    rclpy.spin(node)
    rclpy.shutdown()
