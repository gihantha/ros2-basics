// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from my_first_pkg_interfaces:msg/MyData.idl
// generated code does not contain a copyright notice
#ifndef MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_first_pkg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_first_pkg_interfaces/msg/detail/my_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
bool cdr_serialize_my_first_pkg_interfaces__msg__MyData(
  const my_first_pkg_interfaces__msg__MyData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
bool cdr_deserialize_my_first_pkg_interfaces__msg__MyData(
  eprosima::fastcdr::Cdr &,
  my_first_pkg_interfaces__msg__MyData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
size_t get_serialized_size_my_first_pkg_interfaces__msg__MyData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
size_t max_serialized_size_my_first_pkg_interfaces__msg__MyData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
bool cdr_serialize_key_my_first_pkg_interfaces__msg__MyData(
  const my_first_pkg_interfaces__msg__MyData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
size_t get_serialized_size_key_my_first_pkg_interfaces__msg__MyData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
size_t max_serialized_size_key_my_first_pkg_interfaces__msg__MyData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_pkg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_pkg_interfaces, msg, MyData)();

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
