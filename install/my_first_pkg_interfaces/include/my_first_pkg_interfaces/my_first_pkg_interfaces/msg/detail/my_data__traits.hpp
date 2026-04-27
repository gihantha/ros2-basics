// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_first_pkg_interfaces:msg/MyData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_first_pkg_interfaces/msg/my_data.hpp"


#ifndef MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__TRAITS_HPP_
#define MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_first_pkg_interfaces/msg/detail/my_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_first_pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyData & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_first_pkg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_first_pkg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_first_pkg_interfaces::msg::MyData & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_first_pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_first_pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_first_pkg_interfaces::msg::MyData & msg)
{
  return my_first_pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_first_pkg_interfaces::msg::MyData>()
{
  return "my_first_pkg_interfaces::msg::MyData";
}

template<>
inline const char * name<my_first_pkg_interfaces::msg::MyData>()
{
  return "my_first_pkg_interfaces/msg/MyData";
}

template<>
struct has_fixed_size<my_first_pkg_interfaces::msg::MyData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_first_pkg_interfaces::msg::MyData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_first_pkg_interfaces::msg::MyData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__TRAITS_HPP_
