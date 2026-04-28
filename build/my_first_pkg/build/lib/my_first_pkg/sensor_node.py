import rclpy
from rclpy.node import Node
from my_first_pkg_interfaces.msg import MyData
import random

class SensorNode(Node):

    def __init__(self):
        super().__init__('sensor_node')

        self.publisher_ = self.create_publisher(MyData, 'robot_data', 10)
        self.timer = self.create_timer(1.0, self.publish_data)

    def publish_data(self):
        msg = MyData()

        msg.name = "Robot1"
        msg.age = random.randint(20, 100)      # temperature
        msg.height = random.uniform(0, 100)    # battery %

        self.publisher_.publish(msg)

        self.get_logger().info(
            f"Temp: {msg.age} | Battery: {msg.height:.2f}"
        )

def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
    rclpy.spin(node)
    rclpy.shutdown()
