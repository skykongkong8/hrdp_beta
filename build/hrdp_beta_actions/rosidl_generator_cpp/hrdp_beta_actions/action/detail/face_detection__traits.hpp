// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrdp_beta_actions:action/FaceDetection.idl
// generated code does not contain a copyright notice

#ifndef HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__TRAITS_HPP_
#define HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__TRAITS_HPP_

#include "hrdp_beta_actions/action/detail/face_detection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_Goal>()
{
  return "hrdp_beta_actions::action::FaceDetection_Goal";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_Goal>()
{
  return "hrdp_beta_actions/action/FaceDetection_Goal";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_Result>()
{
  return "hrdp_beta_actions::action::FaceDetection_Result";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_Result>()
{
  return "hrdp_beta_actions/action/FaceDetection_Result";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_Feedback>()
{
  return "hrdp_beta_actions::action::FaceDetection_Feedback";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_Feedback>()
{
  return "hrdp_beta_actions/action/FaceDetection_Feedback";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hrdp_beta_actions/action/detail/face_detection__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>()
{
  return "hrdp_beta_actions::action::FaceDetection_SendGoal_Request";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>()
{
  return "hrdp_beta_actions/action/FaceDetection_SendGoal_Request";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hrdp_beta_actions::action::FaceDetection_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hrdp_beta_actions::action::FaceDetection_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>()
{
  return "hrdp_beta_actions::action::FaceDetection_SendGoal_Response";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>()
{
  return "hrdp_beta_actions/action/FaceDetection_SendGoal_Response";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_SendGoal>()
{
  return "hrdp_beta_actions::action::FaceDetection_SendGoal";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_SendGoal>()
{
  return "hrdp_beta_actions/action/FaceDetection_SendGoal";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>::value &&
    has_fixed_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>::value &&
    has_bounded_size<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hrdp_beta_actions::action::FaceDetection_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hrdp_beta_actions::action::FaceDetection_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrdp_beta_actions::action::FaceDetection_SendGoal_Response>
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

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_GetResult_Request>()
{
  return "hrdp_beta_actions::action::FaceDetection_GetResult_Request";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_GetResult_Request>()
{
  return "hrdp_beta_actions/action/FaceDetection_GetResult_Request";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_GetResult_Response>()
{
  return "hrdp_beta_actions::action::FaceDetection_GetResult_Response";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_GetResult_Response>()
{
  return "hrdp_beta_actions/action/FaceDetection_GetResult_Response";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hrdp_beta_actions::action::FaceDetection_Result>::value> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hrdp_beta_actions::action::FaceDetection_Result>::value> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_GetResult>()
{
  return "hrdp_beta_actions::action::FaceDetection_GetResult";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_GetResult>()
{
  return "hrdp_beta_actions/action/FaceDetection_GetResult";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hrdp_beta_actions::action::FaceDetection_GetResult_Request>::value &&
    has_fixed_size<hrdp_beta_actions::action::FaceDetection_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hrdp_beta_actions::action::FaceDetection_GetResult_Request>::value &&
    has_bounded_size<hrdp_beta_actions::action::FaceDetection_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hrdp_beta_actions::action::FaceDetection_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hrdp_beta_actions::action::FaceDetection_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrdp_beta_actions::action::FaceDetection_GetResult_Response>
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
// #include "hrdp_beta_actions/action/detail/face_detection__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrdp_beta_actions::action::FaceDetection_FeedbackMessage>()
{
  return "hrdp_beta_actions::action::FaceDetection_FeedbackMessage";
}

template<>
inline const char * name<hrdp_beta_actions::action::FaceDetection_FeedbackMessage>()
{
  return "hrdp_beta_actions/action/FaceDetection_FeedbackMessage";
}

template<>
struct has_fixed_size<hrdp_beta_actions::action::FaceDetection_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hrdp_beta_actions::action::FaceDetection_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hrdp_beta_actions::action::FaceDetection_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hrdp_beta_actions::action::FaceDetection_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hrdp_beta_actions::action::FaceDetection_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hrdp_beta_actions::action::FaceDetection>
  : std::true_type
{
};

template<>
struct is_action_goal<hrdp_beta_actions::action::FaceDetection_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hrdp_beta_actions::action::FaceDetection_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hrdp_beta_actions::action::FaceDetection_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__TRAITS_HPP_
