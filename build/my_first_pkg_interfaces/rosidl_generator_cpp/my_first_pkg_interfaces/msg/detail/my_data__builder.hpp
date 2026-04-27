// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_pkg_interfaces:msg/MyData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_first_pkg_interfaces/msg/my_data.hpp"


#ifndef MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__BUILDER_HPP_
#define MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_first_pkg_interfaces/msg/detail/my_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_first_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_MyData_height
{
public:
  explicit Init_MyData_height(::my_first_pkg_interfaces::msg::MyData & msg)
  : msg_(msg)
  {}
  ::my_first_pkg_interfaces::msg::MyData height(::my_first_pkg_interfaces::msg::MyData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_pkg_interfaces::msg::MyData msg_;
};

class Init_MyData_age
{
public:
  explicit Init_MyData_age(::my_first_pkg_interfaces::msg::MyData & msg)
  : msg_(msg)
  {}
  Init_MyData_height age(::my_first_pkg_interfaces::msg::MyData::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_MyData_height(msg_);
  }

private:
  ::my_first_pkg_interfaces::msg::MyData msg_;
};

class Init_MyData_name
{
public:
  Init_MyData_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyData_age name(::my_first_pkg_interfaces::msg::MyData::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MyData_age(msg_);
  }

private:
  ::my_first_pkg_interfaces::msg::MyData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_pkg_interfaces::msg::MyData>()
{
  return my_first_pkg_interfaces::msg::builder::Init_MyData_name();
}

}  // namespace my_first_pkg_interfaces

#endif  // MY_FIRST_PKG_INTERFACES__MSG__DETAIL__MY_DATA__BUILDER_HPP_
