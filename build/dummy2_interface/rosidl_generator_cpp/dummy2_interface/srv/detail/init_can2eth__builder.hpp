// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dummy2_interface:srv/InitCan2eth.idl
// generated code does not contain a copyright notice

#ifndef DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__BUILDER_HPP_
#define DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dummy2_interface/srv/detail/init_can2eth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dummy2_interface
{

namespace srv
{

namespace builder
{

class Init_InitCan2eth_Request_action
{
public:
  Init_InitCan2eth_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dummy2_interface::srv::InitCan2eth_Request action(::dummy2_interface::srv::InitCan2eth_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dummy2_interface::srv::InitCan2eth_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dummy2_interface::srv::InitCan2eth_Request>()
{
  return dummy2_interface::srv::builder::Init_InitCan2eth_Request_action();
}

}  // namespace dummy2_interface


namespace dummy2_interface
{

namespace srv
{

namespace builder
{

class Init_InitCan2eth_Response_success
{
public:
  Init_InitCan2eth_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dummy2_interface::srv::InitCan2eth_Response success(::dummy2_interface::srv::InitCan2eth_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dummy2_interface::srv::InitCan2eth_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dummy2_interface::srv::InitCan2eth_Response>()
{
  return dummy2_interface::srv::builder::Init_InitCan2eth_Response_success();
}

}  // namespace dummy2_interface

#endif  // DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__BUILDER_HPP_
