// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dummy2_interface:srv/ReadCan2eth.idl
// generated code does not contain a copyright notice

#ifndef DUMMY2_INTERFACE__SRV__DETAIL__READ_CAN2ETH__STRUCT_HPP_
#define DUMMY2_INTERFACE__SRV__DETAIL__READ_CAN2ETH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dummy2_interface__srv__ReadCan2eth_Request __attribute__((deprecated))
#else
# define DEPRECATED__dummy2_interface__srv__ReadCan2eth_Request __declspec(deprecated)
#endif

namespace dummy2_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadCan2eth_Request_
{
  using Type = ReadCan2eth_Request_<ContainerAllocator>;

  explicit ReadCan2eth_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = "";
    }
  }

  explicit ReadCan2eth_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : index(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = "";
    }
  }

  // field types and members
  using _index_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _index_type index;

  // setters for named parameter idiom
  Type & set__index(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dummy2_interface__srv__ReadCan2eth_Request
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dummy2_interface__srv__ReadCan2eth_Request
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadCan2eth_Request_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadCan2eth_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadCan2eth_Request_

// alias to use template instance with default allocator
using ReadCan2eth_Request =
  dummy2_interface::srv::ReadCan2eth_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dummy2_interface


#ifndef _WIN32
# define DEPRECATED__dummy2_interface__srv__ReadCan2eth_Response __attribute__((deprecated))
#else
# define DEPRECATED__dummy2_interface__srv__ReadCan2eth_Response __declspec(deprecated)
#endif

namespace dummy2_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadCan2eth_Response_
{
  using Type = ReadCan2eth_Response_<ContainerAllocator>;

  explicit ReadCan2eth_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ReadCan2eth_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _pos_commands_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pos_commands_type pos_commands;
  using _vel_commands_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vel_commands_type vel_commands;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__pos_commands(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pos_commands = _arg;
    return *this;
  }
  Type & set__vel_commands(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vel_commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dummy2_interface__srv__ReadCan2eth_Response
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dummy2_interface__srv__ReadCan2eth_Response
    std::shared_ptr<dummy2_interface::srv::ReadCan2eth_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadCan2eth_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->pos_commands != other.pos_commands) {
      return false;
    }
    if (this->vel_commands != other.vel_commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadCan2eth_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadCan2eth_Response_

// alias to use template instance with default allocator
using ReadCan2eth_Response =
  dummy2_interface::srv::ReadCan2eth_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dummy2_interface

namespace dummy2_interface
{

namespace srv
{

struct ReadCan2eth
{
  using Request = dummy2_interface::srv::ReadCan2eth_Request;
  using Response = dummy2_interface::srv::ReadCan2eth_Response;
};

}  // namespace srv

}  // namespace dummy2_interface

#endif  // DUMMY2_INTERFACE__SRV__DETAIL__READ_CAN2ETH__STRUCT_HPP_
