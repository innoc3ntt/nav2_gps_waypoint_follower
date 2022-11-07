// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gps_interfaces:action/FollowGPSWaypoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
#include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
#include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `gps_poses`
#include "geographic_msgs/msg/geo_pose.h"
// Member `gps_poses`
#include "geographic_msgs/msg/detail/geo_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_Goal__init(message_memory);
}

void FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_Goal__fini(message_memory);
}

size_t FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__size_function__GeoPose__gps_poses(
  const void * untyped_member)
{
  const geographic_msgs__msg__GeoPose__Sequence * member =
    (const geographic_msgs__msg__GeoPose__Sequence *)(untyped_member);
  return member->size;
}

const void * FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__get_const_function__GeoPose__gps_poses(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__GeoPose__Sequence * member =
    (const geographic_msgs__msg__GeoPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__get_function__GeoPose__gps_poses(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__GeoPose__Sequence * member =
    (geographic_msgs__msg__GeoPose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__resize_function__GeoPose__gps_poses(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__GeoPose__Sequence * member =
    (geographic_msgs__msg__GeoPose__Sequence *)(untyped_member);
  geographic_msgs__msg__GeoPose__Sequence__fini(member);
  return geographic_msgs__msg__GeoPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_member_array[1] = {
  {
    "gps_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_Goal, gps_poses),  // bytes offset in struct
    NULL,  // default value
    FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__size_function__GeoPose__gps_poses,  // size() function pointer
    FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__get_const_function__GeoPose__gps_poses,  // get_const(index) function pointer
    FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__get_function__GeoPose__gps_poses,  // get(index) function pointer
    FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__resize_function__GeoPose__gps_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_Goal",  // message name
  1,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_Goal),
  FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_member_array,  // message members
  FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_Goal)() {
  FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPose)();
  if (!FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_Goal__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `missed_waypoints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_Result__init(message_memory);
}

void FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_member_array[1] = {
  {
    "missed_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_Result, missed_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_Result",  // message name
  1,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_Result),
  FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_member_array,  // message members
  FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_Result)() {
  if (!FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_Result__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_Feedback__init(message_memory);
}

void FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_member_array[1] = {
  {
    "current_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_Feedback, current_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_Feedback",  // message name
  1,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_Feedback),
  FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_member_array,  // message members
  FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_Feedback)() {
  if (!FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowGPSWaypoints_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "gps_interfaces/action/follow_gps_waypoints.h"
// Member `goal`
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__init(message_memory);
}

void FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request),
  FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_member_array,  // message members
  FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Request)() {
  FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_Goal)();
  if (!FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__init(message_memory);
}

void FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response),
  FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_member_array,  // message members
  FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Response)() {
  FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_members = {
  "gps_interfaces__action",  // service namespace
  "FollowGPSWaypoints_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_type_support_handle = {
  0,
  &gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal)() {
  if (!gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_type_support_handle.typesupport_identifier) {
    gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Response)()->data;
  }

  return &gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__init(message_memory);
}

void FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_GetResult_Request),
  FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_member_array,  // message members
  FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult_Request)() {
  FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "gps_interfaces/action/follow_gps_waypoints.h"
// Member `result`
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__init(message_memory);
}

void FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_GetResult_Response),
  FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_member_array,  // message members
  FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult_Response)() {
  FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_Result)();
  if (!FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_members = {
  "gps_interfaces__action",  // service namespace
  "FollowGPSWaypoints_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_type_support_handle = {
  0,
  &gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult)() {
  if (!gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_type_support_handle.typesupport_identifier) {
    gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_GetResult_Response)()->data;
  }

  return &gps_interfaces__action__detail__follow_gps_waypoints__rosidl_typesupport_introspection_c__FollowGPSWaypoints_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__functions.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "gps_interfaces/action/follow_gps_waypoints.h"
// Member `feedback`
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__init(message_memory);
}

void FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_fini_function(void * message_memory)
{
  gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_members = {
  "gps_interfaces__action",  // message namespace
  "FollowGPSWaypoints_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage),
  FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_member_array,  // message members
  FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_type_support_handle = {
  0,
  &FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_FeedbackMessage)() {
  FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, action, FollowGPSWaypoints_Feedback)();
  if (!FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowGPSWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowGPSWaypoints_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
