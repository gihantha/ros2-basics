// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_first_pkg_interfaces:msg/MyData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_first_pkg_interfaces/msg/detail/my_data__functions.h"
#include "my_first_pkg_interfaces/msg/detail/my_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_first_pkg_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MyData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_first_pkg_interfaces::msg::MyData(_init);
}

void MyData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_first_pkg_interfaces::msg::MyData *>(message_memory);
  typed_message->~MyData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MyData_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_pkg_interfaces::msg::MyData, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "age",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_pkg_interfaces::msg::MyData, age),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_pkg_interfaces::msg::MyData, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MyData_message_members = {
  "my_first_pkg_interfaces::msg",  // message namespace
  "MyData",  // message name
  3,  // number of fields
  sizeof(my_first_pkg_interfaces::msg::MyData),
  false,  // has_any_key_member_
  MyData_message_member_array,  // message members
  MyData_init_function,  // function to initialize message memory (memory has to be allocated)
  MyData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MyData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyData_message_members,
  get_message_typesupport_handle_function,
  &my_first_pkg_interfaces__msg__MyData__get_type_hash,
  &my_first_pkg_interfaces__msg__MyData__get_type_description,
  &my_first_pkg_interfaces__msg__MyData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_first_pkg_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_first_pkg_interfaces::msg::MyData>()
{
  return &::my_first_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::MyData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_first_pkg_interfaces, msg, MyData)() {
  return &::my_first_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::MyData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
