cmake_minimum_required(VERSION 3.8)
project(my_first_pkg_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 👇 THIS LINE IS IMPORTANT
find_package(rosidl_default_runtime REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MyData.msg"
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
