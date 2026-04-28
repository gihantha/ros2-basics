import rclpy
from rclpy.node import Node
from my_first_pkg_interfaces.msg import MyData

class MonitorNode(Node):

    def __init__(self):
        super().__init__('monitor_node')

        # Parameters (configurable)
        self.declare_parameter('temp_threshold', 70)
        self.declare_parameter('battery_threshold', 20.0)

        self.subscription = self.create_subscription(
            MyData,
            'robot_data',
            self.callback,
            10
        )

    def callback(self, msg):
        temp_limit = self.get_parameter('temp_threshold').value
        battery_limit = self.get_parameter('battery_threshold').value

        if msg.age > temp_limit:
            self.get_logger().warn(f"🔥 HIGH TEMP: {msg.age}")

        if msg.height < battery_limit:
            self.get_logger().warn(f"🔋 LOW BATTERY: {msg.height:.2f}")

        self.get_logger().info(
            f"Normal → Temp: {msg.age}, Battery: {msg.height:.2f}"
        )

def main(args=None):
    rclpy.init(args=args)
    node = MonitorNode()
    rclpy.spin(node)
    rclpy.shutdown()
