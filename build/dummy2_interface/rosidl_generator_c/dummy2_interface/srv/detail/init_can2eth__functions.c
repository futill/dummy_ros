// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dummy2_interface:srv/InitCan2eth.idl
// generated code does not contain a copyright notice
#include "dummy2_interface/srv/detail/init_can2eth__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"

bool
dummy2_interface__srv__InitCan2eth_Request__init(dummy2_interface__srv__InitCan2eth_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    dummy2_interface__srv__InitCan2eth_Request__fini(msg);
    return false;
  }
  return true;
}

void
dummy2_interface__srv__InitCan2eth_Request__fini(dummy2_interface__srv__InitCan2eth_Request * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
}

bool
dummy2_interface__srv__InitCan2eth_Request__are_equal(const dummy2_interface__srv__InitCan2eth_Request * lhs, const dummy2_interface__srv__InitCan2eth_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  return true;
}

bool
dummy2_interface__srv__InitCan2eth_Request__copy(
  const dummy2_interface__srv__InitCan2eth_Request * input,
  dummy2_interface__srv__InitCan2eth_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  return true;
}

dummy2_interface__srv__InitCan2eth_Request *
dummy2_interface__srv__InitCan2eth_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy2_interface__srv__InitCan2eth_Request * msg = (dummy2_interface__srv__InitCan2eth_Request *)allocator.allocate(sizeof(dummy2_interface__srv__InitCan2eth_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dummy2_interface__srv__InitCan2eth_Request));
  bool success = dummy2_interface__srv__InitCan2eth_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dummy2_interface__srv__InitCan2eth_Request__destroy(dummy2_interface__srv__InitCan2eth_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dummy2_interface__srv__InitCan2eth_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dummy2_interface__srv__InitCan2eth_Request__Sequence__init(dummy2_interface__srv__InitCan2eth_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy2_interface__srv__InitCan2eth_Request * data = NULL;

  if (size) {
    data = (dummy2_interface__srv__InitCan2eth_Request *)allocator.zero_allocate(size, sizeof(dummy2_interface__srv__InitCan2eth_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dummy2_interface__srv__InitCan2eth_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dummy2_interface__srv__InitCan2eth_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dummy2_interface__srv__InitCan2eth_Request__Sequence__fini(dummy2_interface__srv__InitCan2eth_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dummy2_interface__srv__InitCan2eth_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dummy2_interface__srv__InitCan2eth_Request__Sequence *
dummy2_interface__srv__InitCan2eth_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy2_interface__srv__InitCan2eth_Request__Sequence * array = (dummy2_interface__srv__InitCan2eth_Request__Sequence *)allocator.allocate(sizeof(dummy2_interface__srv__InitCan2eth_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dummy2_interface__srv__InitCan2eth_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dummy2_interface__srv__InitCan2eth_Request__Sequence__destroy(dummy2_interface__srv__InitCan2eth_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dummy2_interface__srv__InitCan2eth_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dummy2_interface__srv__InitCan2eth_Request__Sequence__are_equal(const dummy2_interface__srv__InitCan2eth_Request__Sequence * lhs, const dummy2_interface__srv__InitCan2eth_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dummy2_interface__srv__InitCan2eth_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dummy2_interface__srv__InitCan2eth_Request__Sequence__copy(
  const dummy2_interface__srv__InitCan2eth_Request__Sequence * input,
  dummy2_interface__srv__InitCan2eth_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dummy2_interface__srv__InitCan2eth_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dummy2_interface__srv__InitCan2eth_Request * data =
      (dummy2_interface__srv__InitCan2eth_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dummy2_interface__srv__InitCan2eth_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dummy2_interface__srv__InitCan2eth_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dummy2_interface__srv__InitCan2eth_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dummy2_interface__srv__InitCan2eth_Response__init(dummy2_interface__srv__InitCan2eth_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
dummy2_interface__srv__InitCan2eth_Response__fini(dummy2_interface__srv__InitCan2eth_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
dummy2_interface__srv__InitCan2eth_Response__are_equal(const dummy2_interface__srv__InitCan2eth_Response * lhs, const dummy2_interface__srv__InitCan2eth_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
dummy2_interface__srv__InitCan2eth_Response__copy(
  const dummy2_interface__srv__InitCan2eth_Response * input,
  dummy2_interface__srv__InitCan2eth_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

dummy2_interface__srv__InitCan2eth_Response *
dummy2_interface__srv__InitCan2eth_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy2_interface__srv__InitCan2eth_Response * msg = (dummy2_interface__srv__InitCan2eth_Response *)allocator.allocate(sizeof(dummy2_interface__srv__InitCan2eth_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dummy2_interface__srv__InitCan2eth_Response));
  bool success = dummy2_interface__srv__InitCan2eth_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dummy2_interface__srv__InitCan2eth_Response__destroy(dummy2_interface__srv__InitCan2eth_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dummy2_interface__srv__InitCan2eth_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dummy2_interface__srv__InitCan2eth_Response__Sequence__init(dummy2_interface__srv__InitCan2eth_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy2_interface__srv__InitCan2eth_Response * data = NULL;

  if (size) {
    data = (dummy2_interface__srv__InitCan2eth_Response *)allocator.zero_allocate(size, sizeof(dummy2_interface__srv__InitCan2eth_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dummy2_interface__srv__InitCan2eth_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dummy2_interface__srv__InitCan2eth_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dummy2_interface__srv__InitCan2eth_Response__Sequence__fini(dummy2_interface__srv__InitCan2eth_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dummy2_interface__srv__InitCan2eth_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dummy2_interface__srv__InitCan2eth_Response__Sequence *
dummy2_interface__srv__InitCan2eth_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy2_interface__srv__InitCan2eth_Response__Sequence * array = (dummy2_interface__srv__InitCan2eth_Response__Sequence *)allocator.allocate(sizeof(dummy2_interface__srv__InitCan2eth_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dummy2_interface__srv__InitCan2eth_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dummy2_interface__srv__InitCan2eth_Response__Sequence__destroy(dummy2_interface__srv__InitCan2eth_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dummy2_interface__srv__InitCan2eth_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dummy2_interface__srv__InitCan2eth_Response__Sequence__are_equal(const dummy2_interface__srv__InitCan2eth_Response__Sequence * lhs, const dummy2_interface__srv__InitCan2eth_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dummy2_interface__srv__InitCan2eth_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dummy2_interface__srv__InitCan2eth_Response__Sequence__copy(
  const dummy2_interface__srv__InitCan2eth_Response__Sequence * input,
  dummy2_interface__srv__InitCan2eth_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dummy2_interface__srv__InitCan2eth_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dummy2_interface__srv__InitCan2eth_Response * data =
      (dummy2_interface__srv__InitCan2eth_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dummy2_interface__srv__InitCan2eth_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dummy2_interface__srv__InitCan2eth_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dummy2_interface__srv__InitCan2eth_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
