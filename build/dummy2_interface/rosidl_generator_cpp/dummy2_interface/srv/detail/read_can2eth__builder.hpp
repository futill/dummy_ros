// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dummy2_interface:srv/ReadCan2eth.idl
// generated code does not contain a copyright notice

#ifndef DUMMY2_INTERFACE__SRV__DETAIL__READ_CAN2ETH__BUILDER_HPP_
#define DUMMY2_INTERFACE__SRV__DETAIL__READ_CAN2ETH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dummy2_interface/srv/detail/read_can2eth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dummy2_interface
{

namespace srv
{

namespace builder
{

class Init_ReadCan2eth_Request_index
{
public:
  Init_ReadCan2eth_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dummy2_interface::srv::ReadCan2eth_Request index(::dummy2_interface::srv::ReadCan2eth_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dummy2_interface::srv::ReadCan2eth_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dummy2_interface::srv::ReadCan2eth_Request>()
{
  return dummy2_interface::srv::builder::Init_ReadCan2eth_Request_index();
}

}  // namespace dummy2_interface


namespace dummy2_interface
{

namespace srv
{

namespace builder
{

class Init_ReadCan2eth_Response_vel_commands
{
public:
  explicit Init_ReadCan2eth_Response_vel_commands(::dummy2_interface::srv::ReadCan2eth_Response & msg)
  : msg_(msg)
  {}
  ::dummy2_interface::srv::ReadCan2eth_Response vel_commands(::dummy2_interface::srv::ReadCan2eth_Response::_vel_commands_type arg)
  {
    msg_.vel_commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dummy2_interface::srv::ReadCan2eth_Response msg_;
};

class Init_ReadCan2eth_Response_pos_commands
{
public:
  explicit Init_ReadCan2eth_Response_pos_commands(::dummy2_interface::srv::ReadCan2eth_Response & msg)
  : msg_(msg)
  {}
  Init_ReadCan2eth_Response_vel_commands pos_commands(::dummy2_interface::srv::ReadCan2eth_Response::_pos_commands_type arg)
  {
    msg_.pos_commands = std::move(arg);
    return Init_ReadCan2eth_Response_vel_commands(msg_);
  }

private:
  ::dummy2_interface::srv::ReadCan2eth_Response msg_;
};

class Init_ReadCan2eth_Response_success
{
public:
  Init_ReadCan2eth_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadCan2eth_Response_pos_commands success(::dummy2_interface::srv::ReadCan2eth_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReadCan2eth_Response_pos_commands(msg_);
  }

private:
  ::dummy2_interface::srv::ReadCan2eth_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dummy2_interface::srv::ReadCan2eth_Response>()
{
  return dummy2_interface::srv::builder::Init_ReadCan2eth_Response_success();
}

}  // namespace dummy2_interface

#endif  // DUMMY2_INTERFACE__SRV__DETAIL__READ_CAN2ETH__BUILDER_HPP_
