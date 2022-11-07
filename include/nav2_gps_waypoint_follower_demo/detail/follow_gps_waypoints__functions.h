// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gps_interfaces:action/FollowGPSWaypoints.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__FUNCTIONS_H_
#define GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gps_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_Goal
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Goal__init(gps_interfaces__action__FollowGPSWaypoints_Goal * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Goal__fini(gps_interfaces__action__FollowGPSWaypoints_Goal * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_Goal *
gps_interfaces__action__FollowGPSWaypoints_Goal__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Goal__destroy(gps_interfaces__action__FollowGPSWaypoints_Goal * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Goal__are_equal(const gps_interfaces__action__FollowGPSWaypoints_Goal * lhs, const gps_interfaces__action__FollowGPSWaypoints_Goal * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Goal__copy(
  const gps_interfaces__action__FollowGPSWaypoints_Goal * input,
  gps_interfaces__action__FollowGPSWaypoints_Goal * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence *
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_Result
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Result__init(gps_interfaces__action__FollowGPSWaypoints_Result * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Result__fini(gps_interfaces__action__FollowGPSWaypoints_Result * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_Result *
gps_interfaces__action__FollowGPSWaypoints_Result__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Result__destroy(gps_interfaces__action__FollowGPSWaypoints_Result * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Result__are_equal(const gps_interfaces__action__FollowGPSWaypoints_Result * lhs, const gps_interfaces__action__FollowGPSWaypoints_Result * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Result__copy(
  const gps_interfaces__action__FollowGPSWaypoints_Result * input,
  gps_interfaces__action__FollowGPSWaypoints_Result * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence *
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Result__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_Result__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_Feedback
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Feedback__init(gps_interfaces__action__FollowGPSWaypoints_Feedback * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Feedback__fini(gps_interfaces__action__FollowGPSWaypoints_Feedback * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_Feedback *
gps_interfaces__action__FollowGPSWaypoints_Feedback__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Feedback__destroy(gps_interfaces__action__FollowGPSWaypoints_Feedback * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Feedback__are_equal(const gps_interfaces__action__FollowGPSWaypoints_Feedback * lhs, const gps_interfaces__action__FollowGPSWaypoints_Feedback * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Feedback__copy(
  const gps_interfaces__action__FollowGPSWaypoints_Feedback * input,
  gps_interfaces__action__FollowGPSWaypoints_Feedback * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence *
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__init(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__fini(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request *
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__destroy(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__are_equal(const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * lhs, const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__copy(
  const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * input,
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence *
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__init(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__fini(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response *
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__destroy(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__are_equal(const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * lhs, const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__copy(
  const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * input,
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence *
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__init(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__fini(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request *
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__destroy(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__are_equal(const gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * lhs, const gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__copy(
  const gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * input,
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence *
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__init(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__fini(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response *
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__destroy(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__are_equal(const gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * lhs, const gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__copy(
  const gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * input,
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence *
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence * output);

/// Initialize action/FollowGPSWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage
 * )) before or use
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__init(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * msg);

/// Finalize action/FollowGPSWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__fini(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * msg);

/// Create action/FollowGPSWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage *
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__create();

/// Destroy action/FollowGPSWaypoints message.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__destroy(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * msg);

/// Check for action/FollowGPSWaypoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__are_equal(const gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * lhs, const gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * rhs);

/// Copy a action/FollowGPSWaypoints message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__copy(
  const gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * input,
  gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * output);

/// Initialize array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__init(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__fini(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * array);

/// Create array of action/FollowGPSWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence *
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/FollowGPSWaypoints messages.
/**
 * It calls
 * gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__destroy(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * array);

/// Check for action/FollowGPSWaypoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__are_equal(const gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * lhs, const gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/FollowGPSWaypoints messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence__copy(
  const gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * input,
  gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__FUNCTIONS_H_
