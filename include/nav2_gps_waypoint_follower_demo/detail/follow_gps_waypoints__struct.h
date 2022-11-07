// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_interfaces:action/FollowGPSWaypoints.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__STRUCT_H_
#define GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gps_poses'
#include "geographic_msgs/msg/detail/geo_pose__struct.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_Goal
{
  geographic_msgs__msg__GeoPose__Sequence gps_poses;
} gps_interfaces__action__FollowGPSWaypoints_Goal;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_Goal.
typedef struct gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'missed_waypoints'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_Result
{
  rosidl_runtime_c__int32__Sequence missed_waypoints;
} gps_interfaces__action__FollowGPSWaypoints_Result;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_Result.
typedef struct gps_interfaces__action__FollowGPSWaypoints_Result__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_Result__Sequence;


// Constants defined in the message

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_Feedback
{
  uint32_t current_waypoint;
} gps_interfaces__action__FollowGPSWaypoints_Feedback;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_Feedback.
typedef struct gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  gps_interfaces__action__FollowGPSWaypoints_Goal goal;
} gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request.
typedef struct gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response.
typedef struct gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} gps_interfaces__action__FollowGPSWaypoints_GetResult_Request;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_GetResult_Request.
typedef struct gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_GetResult_Response
{
  int8_t status;
  gps_interfaces__action__FollowGPSWaypoints_Result result;
} gps_interfaces__action__FollowGPSWaypoints_GetResult_Response;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_GetResult_Response.
typedef struct gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.h"

// Struct defined in action/FollowGPSWaypoints in the package gps_interfaces.
typedef struct gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  gps_interfaces__action__FollowGPSWaypoints_Feedback feedback;
} gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage;

// Struct for a sequence of gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage.
typedef struct gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence
{
  gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__action__FollowGPSWaypoints_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__STRUCT_H_
