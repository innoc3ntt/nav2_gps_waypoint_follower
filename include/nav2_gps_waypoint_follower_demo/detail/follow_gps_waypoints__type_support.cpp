// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gps_interfaces:action/FollowGPSWaypoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_Goal(_init);
}

void FollowGPSWaypoints_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_Goal *>(message_memory);
  typed_message->~FollowGPSWaypoints_Goal();
}

size_t size_function__FollowGPSWaypoints_Goal__gps_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::msg::GeoPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowGPSWaypoints_Goal__gps_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::msg::GeoPose> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowGPSWaypoints_Goal__gps_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::msg::GeoPose> *>(untyped_member);
  return &member[index];
}

void resize_function__FollowGPSWaypoints_Goal__gps_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::msg::GeoPose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_Goal_message_member_array[1] = {
  {
    "gps_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::GeoPose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_Goal, gps_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowGPSWaypoints_Goal__gps_poses,  // size() function pointer
    get_const_function__FollowGPSWaypoints_Goal__gps_poses,  // get_const(index) function pointer
    get_function__FollowGPSWaypoints_Goal__gps_poses,  // get(index) function pointer
    resize_function__FollowGPSWaypoints_Goal__gps_poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_Goal_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_Goal",  // message name
  1,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_Goal),
  FollowGPSWaypoints_Goal_message_member_array,  // message members
  FollowGPSWaypoints_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_Goal>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_Goal)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_Result(_init);
}

void FollowGPSWaypoints_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_Result *>(message_memory);
  typed_message->~FollowGPSWaypoints_Result();
}

size_t size_function__FollowGPSWaypoints_Result__missed_waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowGPSWaypoints_Result__missed_waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowGPSWaypoints_Result__missed_waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__FollowGPSWaypoints_Result__missed_waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_Result_message_member_array[1] = {
  {
    "missed_waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_Result, missed_waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowGPSWaypoints_Result__missed_waypoints,  // size() function pointer
    get_const_function__FollowGPSWaypoints_Result__missed_waypoints,  // get_const(index) function pointer
    get_function__FollowGPSWaypoints_Result__missed_waypoints,  // get(index) function pointer
    resize_function__FollowGPSWaypoints_Result__missed_waypoints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_Result_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_Result",  // message name
  1,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_Result),
  FollowGPSWaypoints_Result_message_member_array,  // message members
  FollowGPSWaypoints_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_Result>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_Result)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_Feedback(_init);
}

void FollowGPSWaypoints_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_Feedback *>(message_memory);
  typed_message->~FollowGPSWaypoints_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_Feedback_message_member_array[1] = {
  {
    "current_waypoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_Feedback, current_waypoint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_Feedback_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_Feedback",  // message name
  1,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_Feedback),
  FollowGPSWaypoints_Feedback_message_member_array,  // message members
  FollowGPSWaypoints_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_Feedback>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_Feedback)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request(_init);
}

void FollowGPSWaypoints_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request *>(message_memory);
  typed_message->~FollowGPSWaypoints_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_SendGoal_Request_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request),
  FollowGPSWaypoints_SendGoal_Request_message_member_array,  // message members
  FollowGPSWaypoints_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Request)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response(_init);
}

void FollowGPSWaypoints_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response *>(message_memory);
  typed_message->~FollowGPSWaypoints_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_SendGoal_Response_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response),
  FollowGPSWaypoints_SendGoal_Response_message_member_array,  // message members
  FollowGPSWaypoints_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_SendGoal_Response)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FollowGPSWaypoints_SendGoal_service_members = {
  "gps_interfaces::action",  // service namespace
  "FollowGPSWaypoints_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FollowGPSWaypoints_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_GetResult_Request(_init);
}

void FollowGPSWaypoints_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request *>(message_memory);
  typed_message->~FollowGPSWaypoints_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_GetResult_Request_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_GetResult_Request),
  FollowGPSWaypoints_GetResult_Request_message_member_array,  // message members
  FollowGPSWaypoints_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_GetResult_Request)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_GetResult_Response(_init);
}

void FollowGPSWaypoints_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response *>(message_memory);
  typed_message->~FollowGPSWaypoints_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_GetResult_Response_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_GetResult_Response),
  FollowGPSWaypoints_GetResult_Response_message_member_array,  // message members
  FollowGPSWaypoints_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_GetResult_Response)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FollowGPSWaypoints_GetResult_service_members = {
  "gps_interfaces::action",  // service namespace
  "FollowGPSWaypoints_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FollowGPSWaypoints_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowGPSWaypoints_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage(_init);
}

void FollowGPSWaypoints_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage *>(message_memory);
  typed_message->~FollowGPSWaypoints_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowGPSWaypoints_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowGPSWaypoints_FeedbackMessage_message_members = {
  "gps_interfaces::action",  // message namespace
  "FollowGPSWaypoints_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage),
  FollowGPSWaypoints_FeedbackMessage_message_member_array,  // message members
  FollowGPSWaypoints_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowGPSWaypoints_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowGPSWaypoints_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowGPSWaypoints_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>()
{
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, action, FollowGPSWaypoints_FeedbackMessage)() {
  return &::gps_interfaces::action::rosidl_typesupport_introspection_cpp::FollowGPSWaypoints_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
