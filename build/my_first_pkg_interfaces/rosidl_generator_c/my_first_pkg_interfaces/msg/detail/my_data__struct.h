// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_first_pkg_interfaces:msg/MyData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_first_pkg_interfaces/msg/my_data.h"


#ifndef MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__STRUCT_H_
#define MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MyData in the package my_first_pkg_interfaces.
typedef struct my_first_pkg_interfaces__msg__MyData
{
  rosidl_runtime_c__String name;
  int32_t age;
  float height;
} my_first_pkg_interfaces__msg__MyData;

// Struct for a sequence of my_first_pkg_interfaces__msg__MyData.
typedef struct my_first_pkg_interfaces__msg__MyData__Sequence
{
  my_first_pkg_interfaces__msg__MyData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_pkg_interfaces__msg__MyData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__STRUCT_H_
