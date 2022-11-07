// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_interfaces:action/FollowGPSWaypoints.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__TRAITS_HPP_
#define GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__TRAITS_HPP_

#include "gps_interfaces/action/detail/follow_gps_waypoints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'gps_poses'
#include "geographic_msgs/msg/detail/geo_pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gps_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_poses.size() == 0) {
      out << "gps_poses: []\n";
    } else {
      out << "gps_poses:\n";
      for (auto item : msg.gps_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_Goal>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_Goal";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_Goal>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_Goal";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: missed_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missed_waypoints.size() == 0) {
      out << "missed_waypoints: []\n";
    } else {
      out << "missed_waypoints:\n";
      for (auto item : msg.missed_waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_Result>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_Result";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_Result>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_Result";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_waypoint: ";
    value_to_yaml(msg.current_waypoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_Feedback>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_Feedback";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_Feedback>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_Feedback";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "gps_interfaces/action/detail/follow_gps_waypoints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_SendGoal_Request";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_SendGoal_Response";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_SendGoal>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_SendGoal";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_SendGoal>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_SendGoal";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>::value &&
    has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>::value &&
    has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<gps_interfaces::action::FollowGPSWaypoints_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gps_interfaces::action::FollowGPSWaypoints_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_GetResult_Request";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_GetResult_Request";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_GetResult_Response";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_GetResult_Response";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_Result>::value> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_Result>::value> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_GetResult>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_GetResult";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_GetResult>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_GetResult";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>::value &&
    has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>::value &&
    has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>::value
  >
{
};

template<>
struct is_service<gps_interfaces::action::FollowGPSWaypoints_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<gps_interfaces::action::FollowGPSWaypoints_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gps_interfaces::action::FollowGPSWaypoints_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "gps_interfaces/action/detail/follow_gps_waypoints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>()
{
  return "gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage";
}

template<>
inline const char * name<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>()
{
  return "gps_interfaces/action/FollowGPSWaypoints_FeedbackMessage";
}

template<>
struct has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<gps_interfaces::action::FollowGPSWaypoints_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<gps_interfaces::action::FollowGPSWaypoints_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<gps_interfaces::action::FollowGPSWaypoints_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<gps_interfaces::action::FollowGPSWaypoints>
  : std::true_type
{
};

template<>
struct is_action_goal<gps_interfaces::action::FollowGPSWaypoints_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<gps_interfaces::action::FollowGPSWaypoints_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<gps_interfaces::action::FollowGPSWaypoints_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // GPS_INTERFACES__ACTION__DETAIL__FOLLOW_GPS_WAYPOINTS__TRAITS_HPP_
