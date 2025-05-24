// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dummy2_interface:srv/InitCan2eth.idl
// generated code does not contain a copyright notice

#ifndef DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__STRUCT_H_
#define DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InitCan2eth in the package dummy2_interface.
typedef struct dummy2_interface__srv__InitCan2eth_Request
{
  rosidl_runtime_c__String action;
} dummy2_interface__srv__InitCan2eth_Request;

// Struct for a sequence of dummy2_interface__srv__InitCan2eth_Request.
typedef struct dummy2_interface__srv__InitCan2eth_Request__Sequence
{
  dummy2_interface__srv__InitCan2eth_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dummy2_interface__srv__InitCan2eth_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InitCan2eth in the package dummy2_interface.
typedef struct dummy2_interface__srv__InitCan2eth_Response
{
  bool success;
} dummy2_interface__srv__InitCan2eth_Response;

// Struct for a sequence of dummy2_interface__srv__InitCan2eth_Response.
typedef struct dummy2_interface__srv__InitCan2eth_Response__Sequence
{
  dummy2_interface__srv__InitCan2eth_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dummy2_interface__srv__InitCan2eth_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUMMY2_INTERFACE__SRV__DETAIL__INIT_CAN2ETH__STRUCT_H_
