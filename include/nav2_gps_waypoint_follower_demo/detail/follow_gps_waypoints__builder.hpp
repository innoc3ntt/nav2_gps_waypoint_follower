// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_interfaces:action/FollowGPSWaypoints.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__BUILDER_HPP_
#define GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__BUILDER_HPP_

#include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_Goal_gps_poses
{
public:
  Init_FollowGPSWaypoints_Goal_gps_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_Goal gps_poses(::gps_interfaces::action::FollowGPSWaypoints_Goal::_gps_poses_type arg)
  {
    msg_.gps_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_Goal>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_Goal_gps_poses();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_Result_missed_waypoints
{
public:
  Init_FollowGPSWaypoints_Result_missed_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_Result missed_waypoints(::gps_interfaces::action::FollowGPSWaypoints_Result::_missed_waypoints_type arg)
  {
    msg_.missed_waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_Result>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_Result_missed_waypoints();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_Feedback_current_waypoint
{
public:
  Init_FollowGPSWaypoints_Feedback_current_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_Feedback current_waypoint(::gps_interfaces::action::FollowGPSWaypoints_Feedback::_current_waypoint_type arg)
  {
    msg_.current_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_Feedback>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_Feedback_current_waypoint();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_SendGoal_Request_goal
{
public:
  explicit Init_FollowGPSWaypoints_SendGoal_Request_goal(::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request goal(::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request msg_;
};

class Init_FollowGPSWaypoints_SendGoal_Request_goal_id
{
public:
  Init_FollowGPSWaypoints_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowGPSWaypoints_SendGoal_Request_goal goal_id(::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowGPSWaypoints_SendGoal_Request_goal(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_SendGoal_Request_goal_id();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_SendGoal_Response_stamp
{
public:
  explicit Init_FollowGPSWaypoints_SendGoal_Response_stamp(::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response stamp(::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response msg_;
};

class Init_FollowGPSWaypoints_SendGoal_Response_accepted
{
public:
  Init_FollowGPSWaypoints_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowGPSWaypoints_SendGoal_Response_stamp accepted(::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowGPSWaypoints_SendGoal_Response_stamp(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_SendGoal_Response_accepted();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_GetResult_Request_goal_id
{
public:
  Init_FollowGPSWaypoints_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Request goal_id(::gps_interfaces::action::FollowGPSWaypoints_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_GetResult_Request_goal_id();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_GetResult_Response_result
{
public:
  explicit Init_FollowGPSWaypoints_GetResult_Response_result(::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response result(::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response msg_;
};

class Init_FollowGPSWaypoints_GetResult_Response_status
{
public:
  Init_FollowGPSWaypoints_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowGPSWaypoints_GetResult_Response_result status(::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowGPSWaypoints_GetResult_Response_result(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_GetResult_Response_status();
}

}  // namespace gps_interfaces


namespace gps_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowGPSWaypoints_FeedbackMessage_feedback
{
public:
  explicit Init_FollowGPSWaypoints_FeedbackMessage_feedback(::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage feedback(::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage msg_;
};

class Init_FollowGPSWaypoints_FeedbackMessage_goal_id
{
public:
  Init_FollowGPSWaypoints_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowGPSWaypoints_FeedbackMessage_feedback goal_id(::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowGPSWaypoints_FeedbackMessage_feedback(msg_);
  }

private:
  ::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>()
{
  return gps_interfaces::action::builder::Init_FollowGPSWaypoints_FeedbackMessage_goal_id();
}

}  // namespace gps_interfaces

#endif  // GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__BUILDER_HPP_
