// Generated by gencpp from file atlascar_base/ManagerCommand.msg
// DO NOT EDIT!


#ifndef ATLASCAR_BASE_MESSAGE_MANAGERCOMMAND_H
#define ATLASCAR_BASE_MESSAGE_MANAGERCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace atlascar_base
{
template <class ContainerAllocator>
struct ManagerCommand_
{
  typedef ManagerCommand_<ContainerAllocator> Type;

  ManagerCommand_()
    : header()
    , priority(0.0)
    , lifetime(0.0)
    , gear(0)
    , clutch(0.0)
    , brake(0.0)
    , steering_wheel(0.0)
    , throttle(0.0)
    , velocity(0.0)
    , lights_brake(0)
    , lights_reverse(0)
    , lights_warning(0)
    , lights_high(0)
    , lights_medium(0)
    , lights_left(0)
    , lights_right(0)
    , lights_danger(0)
    , emergency(0)
    , auto_ignition(0)
    , auto_brake(0)
    , auto_direction(0)
    , auto_clutch(0)
    , auto_throttle(0)
    , parking(0)
    , ignition(0)
    , horn(0)
    , direct_control(0)  {
    }
  ManagerCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , priority(0.0)
    , lifetime(0.0)
    , gear(0)
    , clutch(0.0)
    , brake(0.0)
    , steering_wheel(0.0)
    , throttle(0.0)
    , velocity(0.0)
    , lights_brake(0)
    , lights_reverse(0)
    , lights_warning(0)
    , lights_high(0)
    , lights_medium(0)
    , lights_left(0)
    , lights_right(0)
    , lights_danger(0)
    , emergency(0)
    , auto_ignition(0)
    , auto_brake(0)
    , auto_direction(0)
    , auto_clutch(0)
    , auto_throttle(0)
    , parking(0)
    , ignition(0)
    , horn(0)
    , direct_control(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _priority_type;
  _priority_type priority;

   typedef double _lifetime_type;
  _lifetime_type lifetime;

   typedef uint32_t _gear_type;
  _gear_type gear;

   typedef double _clutch_type;
  _clutch_type clutch;

   typedef double _brake_type;
  _brake_type brake;

   typedef double _steering_wheel_type;
  _steering_wheel_type steering_wheel;

   typedef double _throttle_type;
  _throttle_type throttle;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef uint32_t _lights_brake_type;
  _lights_brake_type lights_brake;

   typedef uint32_t _lights_reverse_type;
  _lights_reverse_type lights_reverse;

   typedef uint32_t _lights_warning_type;
  _lights_warning_type lights_warning;

   typedef uint32_t _lights_high_type;
  _lights_high_type lights_high;

   typedef uint32_t _lights_medium_type;
  _lights_medium_type lights_medium;

   typedef uint32_t _lights_left_type;
  _lights_left_type lights_left;

   typedef uint32_t _lights_right_type;
  _lights_right_type lights_right;

   typedef uint32_t _lights_danger_type;
  _lights_danger_type lights_danger;

   typedef uint32_t _emergency_type;
  _emergency_type emergency;

   typedef uint32_t _auto_ignition_type;
  _auto_ignition_type auto_ignition;

   typedef uint32_t _auto_brake_type;
  _auto_brake_type auto_brake;

   typedef uint32_t _auto_direction_type;
  _auto_direction_type auto_direction;

   typedef uint32_t _auto_clutch_type;
  _auto_clutch_type auto_clutch;

   typedef uint32_t _auto_throttle_type;
  _auto_throttle_type auto_throttle;

   typedef uint32_t _parking_type;
  _parking_type parking;

   typedef uint32_t _ignition_type;
  _ignition_type ignition;

   typedef uint32_t _horn_type;
  _horn_type horn;

   typedef uint32_t _direct_control_type;
  _direct_control_type direct_control;





  typedef boost::shared_ptr< ::atlascar_base::ManagerCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atlascar_base::ManagerCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ManagerCommand_

typedef ::atlascar_base::ManagerCommand_<std::allocator<void> > ManagerCommand;

typedef boost::shared_ptr< ::atlascar_base::ManagerCommand > ManagerCommandPtr;
typedef boost::shared_ptr< ::atlascar_base::ManagerCommand const> ManagerCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atlascar_base::ManagerCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atlascar_base::ManagerCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace atlascar_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'atlascar_base': ['/home/ruic7/MTT/src/atlascar_base/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atlascar_base::ManagerCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atlascar_base::ManagerCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atlascar_base::ManagerCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45876c19b4f045f55316ae68c9a82049";
  }

  static const char* value(const ::atlascar_base::ManagerCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45876c19b4f045f5ULL;
  static const uint64_t static_value2 = 0x5316ae68c9a82049ULL;
};

template<class ContainerAllocator>
struct DataType< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atlascar_base/ManagerCommand";
  }

  static const char* value(const ::atlascar_base::ManagerCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64 priority\n"
"float64 lifetime\n"
"\n"
"uint32 gear\n"
"float64 clutch\n"
"float64 brake\n"
"float64 steering_wheel\n"
"float64 throttle\n"
"float64 velocity\n"
"\n"
"uint32 lights_brake\n"
"uint32 lights_reverse\n"
"uint32 lights_warning\n"
"uint32 lights_high\n"
"uint32 lights_medium\n"
"uint32 lights_left\n"
"uint32 lights_right\n"
"uint32 lights_danger\n"
"\n"
"uint32 emergency\n"
"\n"
"uint32 auto_ignition\n"
"uint32 auto_brake\n"
"uint32 auto_direction\n"
"uint32 auto_clutch\n"
"uint32 auto_throttle\n"
"\n"
"uint32 parking\n"
"\n"
"uint32 ignition\n"
"\n"
"uint32 horn\n"
"\n"
"uint32 direct_control\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::atlascar_base::ManagerCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.priority);
      stream.next(m.lifetime);
      stream.next(m.gear);
      stream.next(m.clutch);
      stream.next(m.brake);
      stream.next(m.steering_wheel);
      stream.next(m.throttle);
      stream.next(m.velocity);
      stream.next(m.lights_brake);
      stream.next(m.lights_reverse);
      stream.next(m.lights_warning);
      stream.next(m.lights_high);
      stream.next(m.lights_medium);
      stream.next(m.lights_left);
      stream.next(m.lights_right);
      stream.next(m.lights_danger);
      stream.next(m.emergency);
      stream.next(m.auto_ignition);
      stream.next(m.auto_brake);
      stream.next(m.auto_direction);
      stream.next(m.auto_clutch);
      stream.next(m.auto_throttle);
      stream.next(m.parking);
      stream.next(m.ignition);
      stream.next(m.horn);
      stream.next(m.direct_control);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManagerCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atlascar_base::ManagerCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atlascar_base::ManagerCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "priority: ";
    Printer<double>::stream(s, indent + "  ", v.priority);
    s << indent << "lifetime: ";
    Printer<double>::stream(s, indent + "  ", v.lifetime);
    s << indent << "gear: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gear);
    s << indent << "clutch: ";
    Printer<double>::stream(s, indent + "  ", v.clutch);
    s << indent << "brake: ";
    Printer<double>::stream(s, indent + "  ", v.brake);
    s << indent << "steering_wheel: ";
    Printer<double>::stream(s, indent + "  ", v.steering_wheel);
    s << indent << "throttle: ";
    Printer<double>::stream(s, indent + "  ", v.throttle);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "lights_brake: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_brake);
    s << indent << "lights_reverse: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_reverse);
    s << indent << "lights_warning: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_warning);
    s << indent << "lights_high: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_high);
    s << indent << "lights_medium: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_medium);
    s << indent << "lights_left: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_left);
    s << indent << "lights_right: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_right);
    s << indent << "lights_danger: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lights_danger);
    s << indent << "emergency: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.emergency);
    s << indent << "auto_ignition: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.auto_ignition);
    s << indent << "auto_brake: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.auto_brake);
    s << indent << "auto_direction: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.auto_direction);
    s << indent << "auto_clutch: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.auto_clutch);
    s << indent << "auto_throttle: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.auto_throttle);
    s << indent << "parking: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.parking);
    s << indent << "ignition: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ignition);
    s << indent << "horn: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.horn);
    s << indent << "direct_control: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.direct_control);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATLASCAR_BASE_MESSAGE_MANAGERCOMMAND_H