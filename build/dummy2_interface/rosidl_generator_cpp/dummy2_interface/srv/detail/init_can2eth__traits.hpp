// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dummy2_interface:srv/InitCan2eth.idl
// generated code does not contain a copyright notice

#ifndef DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__TRAITS_HPP_
#define DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dummy2_interface/srv/detail/init_can2eth__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dummy2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitCan2eth_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitCan2eth_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitCan2eth_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dummy2_interface

namespace rosidl_generator_traits
{

[[deprecated("use dummy2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dummy2_interface::srv::InitCan2eth_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dummy2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dummy2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dummy2_interface::srv::InitCan2eth_Request & msg)
{
  return dummy2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dummy2_interface::srv::InitCan2eth_Request>()
{
  return "dummy2_interface::srv::InitCan2eth_Request";
}

template<>
inline const char * name<dummy2_interface::srv::InitCan2eth_Request>()
{
  return "dummy2_interface/srv/InitCan2eth_Request";
}

template<>
struct has_fixed_size<dummy2_interface::srv::InitCan2eth_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dummy2_interface::srv::InitCan2eth_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dummy2_interface::srv::InitCan2eth_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dummy2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitCan2eth_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitCan2eth_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitCan2eth_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dummy2_interface

namespace rosidl_generator_traits
{

[[deprecated("use dummy2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dummy2_interface::srv::InitCan2eth_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dummy2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dummy2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dummy2_interface::srv::InitCan2eth_Response & msg)
{
  return dummy2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dummy2_interface::srv::InitCan2eth_Response>()
{
  return "dummy2_interface::srv::InitCan2eth_Response";
}

template<>
inline const char * name<dummy2_interface::srv::InitCan2eth_Response>()
{
  return "dummy2_interface/srv/InitCan2eth_Response";
}

template<>
struct has_fixed_size<dummy2_interface::srv::InitCan2eth_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dummy2_interface::srv::InitCan2eth_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dummy2_interface::srv::InitCan2eth_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dummy2_interface::srv::InitCan2eth>()
{
  return "dummy2_interface::srv::InitCan2eth";
}

template<>
inline const char * name<dummy2_interface::srv::InitCan2eth>()
{
  return "dummy2_interface/srv/InitCan2eth";
}

template<>
struct has_fixed_size<dummy2_interface::srv::InitCan2eth>
  : std::integral_constant<
    bool,
    has_fixed_size<dummy2_interface::srv::InitCan2eth_Request>::value &&
    has_fixed_size<dummy2_interface::srv::InitCan2eth_Response>::value
  >
{
};

template<>
struct has_bounded_size<dummy2_interface::srv::InitCan2eth>
  : std::integral_constant<
    bool,
    has_bounded_size<dummy2_interface::srv::InitCan2eth_Request>::value &&
    has_bounded_size<dummy2_interface::srv::InitCan2eth_Response>::value
  >
{
};

template<>
struct is_service<dummy2_interface::srv::InitCan2eth>
  : std::true_type
{
};

template<>
struct is_service_request<dummy2_interface::srv::InitCan2eth_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dummy2_interface::srv::InitCan2eth_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__TRAITS_HPP_
