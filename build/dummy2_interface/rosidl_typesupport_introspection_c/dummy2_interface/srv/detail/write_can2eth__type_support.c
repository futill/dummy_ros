// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dummy2_interface:srv/WriteCan2eth.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dummy2_interface/srv/detail/write_can2eth__rosidl_typesupport_introspection_c.h"
#include "dummy2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dummy2_interface/srv/detail/write_can2eth__functions.h"
#include "dummy2_interface/srv/detail/write_can2eth__struct.h"


// Include directives for member types
// Member `pos_commands`
// Member `vel_commands`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dummy2_interface__srv__WriteCan2eth_Request__init(message_memory);
}

void dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_fini_function(void * message_memory)
{
  dummy2_interface__srv__WriteCan2eth_Request__fini(message_memory);
}

size_t dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__size_function__WriteCan2eth_Request__pos_commands(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_const_function__WriteCan2eth_Request__pos_commands(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_function__WriteCan2eth_Request__pos_commands(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__fetch_function__WriteCan2eth_Request__pos_commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_const_function__WriteCan2eth_Request__pos_commands(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__assign_function__WriteCan2eth_Request__pos_commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_function__WriteCan2eth_Request__pos_commands(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__resize_function__WriteCan2eth_Request__pos_commands(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__size_function__WriteCan2eth_Request__vel_commands(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_const_function__WriteCan2eth_Request__vel_commands(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_function__WriteCan2eth_Request__vel_commands(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__fetch_function__WriteCan2eth_Request__vel_commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_const_function__WriteCan2eth_Request__vel_commands(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__assign_function__WriteCan2eth_Request__vel_commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_function__WriteCan2eth_Request__vel_commands(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__resize_function__WriteCan2eth_Request__vel_commands(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_member_array[2] = {
  {
    "pos_commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dummy2_interface__srv__WriteCan2eth_Request, pos_commands),  // bytes offset in struct
    NULL,  // default value
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__size_function__WriteCan2eth_Request__pos_commands,  // size() function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_const_function__WriteCan2eth_Request__pos_commands,  // get_const(index) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_function__WriteCan2eth_Request__pos_commands,  // get(index) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__fetch_function__WriteCan2eth_Request__pos_commands,  // fetch(index, &value) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__assign_function__WriteCan2eth_Request__pos_commands,  // assign(index, value) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__resize_function__WriteCan2eth_Request__pos_commands  // resize(index) function pointer
  },
  {
    "vel_commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dummy2_interface__srv__WriteCan2eth_Request, vel_commands),  // bytes offset in struct
    NULL,  // default value
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__size_function__WriteCan2eth_Request__vel_commands,  // size() function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_const_function__WriteCan2eth_Request__vel_commands,  // get_const(index) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__get_function__WriteCan2eth_Request__vel_commands,  // get(index) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__fetch_function__WriteCan2eth_Request__vel_commands,  // fetch(index, &value) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__assign_function__WriteCan2eth_Request__vel_commands,  // assign(index, value) function pointer
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__resize_function__WriteCan2eth_Request__vel_commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_members = {
  "dummy2_interface__srv",  // message namespace
  "WriteCan2eth_Request",  // message name
  2,  // number of fields
  sizeof(dummy2_interface__srv__WriteCan2eth_Request),
  dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_member_array,  // message members
  dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_type_support_handle = {
  0,
  &dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dummy2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth_Request)() {
  if (!dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_type_support_handle.typesupport_identifier) {
    dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dummy2_interface__srv__WriteCan2eth_Request__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dummy2_interface/srv/detail/write_can2eth__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dummy2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dummy2_interface/srv/detail/write_can2eth__functions.h"
// already included above
// #include "dummy2_interface/srv/detail/write_can2eth__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dummy2_interface__srv__WriteCan2eth_Response__init(message_memory);
}

void dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_fini_function(void * message_memory)
{
  dummy2_interface__srv__WriteCan2eth_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dummy2_interface__srv__WriteCan2eth_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_members = {
  "dummy2_interface__srv",  // message namespace
  "WriteCan2eth_Response",  // message name
  1,  // number of fields
  sizeof(dummy2_interface__srv__WriteCan2eth_Response),
  dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_member_array,  // message members
  dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_type_support_handle = {
  0,
  &dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dummy2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth_Response)() {
  if (!dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_type_support_handle.typesupport_identifier) {
    dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dummy2_interface__srv__WriteCan2eth_Response__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dummy2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dummy2_interface/srv/detail/write_can2eth__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_members = {
  "dummy2_interface__srv",  // service namespace
  "WriteCan2eth",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_Request_message_type_support_handle,
  NULL  // response message
  // dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_Response_message_type_support_handle
};

static rosidl_service_type_support_t dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_type_support_handle = {
  0,
  &dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dummy2_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth)() {
  if (!dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_type_support_handle.typesupport_identifier) {
    dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy2_interface, srv, WriteCan2eth_Response)()->data;
  }

  return &dummy2_interface__srv__detail__write_can2eth__rosidl_typesupport_introspection_c__WriteCan2eth_service_type_support_handle;
}
