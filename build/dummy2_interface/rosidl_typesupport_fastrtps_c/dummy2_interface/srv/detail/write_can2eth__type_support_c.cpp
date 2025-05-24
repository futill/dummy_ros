// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dummy2_interface:srv/WriteCan2eth.idl
// generated code does not contain a copyright notice
#include "dummy2_interface/srv/detail/write_can2eth__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dummy2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dummy2_interface/srv/detail/write_can2eth__struct.h"
#include "dummy2_interface/srv/detail/write_can2eth__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // pos_commands, vel_commands
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // pos_commands, vel_commands

// forward declare type support functions


using _WriteCan2eth_Request__ros_msg_type = dummy2_interface__srv__WriteCan2eth_Request;

static bool _WriteCan2eth_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WriteCan2eth_Request__ros_msg_type * ros_message = static_cast<const _WriteCan2eth_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_commands
  {
    size_t size = ros_message->pos_commands.size;
    auto array_ptr = ros_message->pos_commands.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_commands
  {
    size_t size = ros_message->vel_commands.size;
    auto array_ptr = ros_message->vel_commands.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _WriteCan2eth_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WriteCan2eth_Request__ros_msg_type * ros_message = static_cast<_WriteCan2eth_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_commands
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pos_commands.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pos_commands);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pos_commands, size)) {
      fprintf(stderr, "failed to create array for field 'pos_commands'");
      return false;
    }
    auto array_ptr = ros_message->pos_commands.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_commands
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel_commands.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vel_commands);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vel_commands, size)) {
      fprintf(stderr, "failed to create array for field 'vel_commands'");
      return false;
    }
    auto array_ptr = ros_message->vel_commands.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dummy2_interface
size_t get_serialized_size_dummy2_interface__srv__WriteCan2eth_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WriteCan2eth_Request__ros_msg_type * ros_message = static_cast<const _WriteCan2eth_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pos_commands
  {
    size_t array_size = ros_message->pos_commands.size;
    auto array_ptr = ros_message->pos_commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_commands
  {
    size_t array_size = ros_message->vel_commands.size;
    auto array_ptr = ros_message->vel_commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WriteCan2eth_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dummy2_interface__srv__WriteCan2eth_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dummy2_interface
size_t max_serialized_size_dummy2_interface__srv__WriteCan2eth_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pos_commands
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_commands
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dummy2_interface__srv__WriteCan2eth_Request;
    is_plain =
      (
      offsetof(DataType, vel_commands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WriteCan2eth_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dummy2_interface__srv__WriteCan2eth_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WriteCan2eth_Request = {
  "dummy2_interface::srv",
  "WriteCan2eth_Request",
  _WriteCan2eth_Request__cdr_serialize,
  _WriteCan2eth_Request__cdr_deserialize,
  _WriteCan2eth_Request__get_serialized_size,
  _WriteCan2eth_Request__max_serialized_size
};

static rosidl_message_type_support_t _WriteCan2eth_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WriteCan2eth_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dummy2_interface, srv, WriteCan2eth_Request)() {
  return &_WriteCan2eth_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dummy2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dummy2_interface/srv/detail/write_can2eth__struct.h"
// already included above
// #include "dummy2_interface/srv/detail/write_can2eth__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WriteCan2eth_Response__ros_msg_type = dummy2_interface__srv__WriteCan2eth_Response;

static bool _WriteCan2eth_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WriteCan2eth_Response__ros_msg_type * ros_message = static_cast<const _WriteCan2eth_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _WriteCan2eth_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WriteCan2eth_Response__ros_msg_type * ros_message = static_cast<_WriteCan2eth_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dummy2_interface
size_t get_serialized_size_dummy2_interface__srv__WriteCan2eth_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WriteCan2eth_Response__ros_msg_type * ros_message = static_cast<const _WriteCan2eth_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WriteCan2eth_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dummy2_interface__srv__WriteCan2eth_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dummy2_interface
size_t max_serialized_size_dummy2_interface__srv__WriteCan2eth_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dummy2_interface__srv__WriteCan2eth_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WriteCan2eth_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dummy2_interface__srv__WriteCan2eth_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WriteCan2eth_Response = {
  "dummy2_interface::srv",
  "WriteCan2eth_Response",
  _WriteCan2eth_Response__cdr_serialize,
  _WriteCan2eth_Response__cdr_deserialize,
  _WriteCan2eth_Response__get_serialized_size,
  _WriteCan2eth_Response__max_serialized_size
};

static rosidl_message_type_support_t _WriteCan2eth_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WriteCan2eth_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dummy2_interface, srv, WriteCan2eth_Response)() {
  return &_WriteCan2eth_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dummy2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dummy2_interface/srv/write_can2eth.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WriteCan2eth__callbacks = {
  "dummy2_interface::srv",
  "WriteCan2eth",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dummy2_interface, srv, WriteCan2eth_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dummy2_interface, srv, WriteCan2eth_Response)(),
};

static rosidl_service_type_support_t WriteCan2eth__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WriteCan2eth__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dummy2_interface, srv, WriteCan2eth)() {
  return &WriteCan2eth__handle;
}

#if defined(__cplusplus)
}
#endif
