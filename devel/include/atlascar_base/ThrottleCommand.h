// Generated by gencpp from file atlascar_base/ThrottleCommand.msg
// DO NOT EDIT!


#ifndef ATLASCAR_BASE_MESSAGE_THROTTLECOMMAND_H
#define ATLASCAR_BASE_MESSAGE_THROTTLECOMMAND_H


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
struct ThrottleCommand_
{
  typedef ThrottleCommand_<ContainerAllocator> Type;

  ThrottleCommand_()
    : header()
    , throttle(0.0)
    , mode(0)
    , priority(0.0)
    , lifetime(0.0)  {
    }
  ThrottleCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , throttle(0.0)
    , mode(0)
    , priority(0.0)
    , lifetime(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _throttle_type;
  _throttle_type throttle;

   typedef uint32_t _mode_type;
  _mode_type mode;

   typedef double _priority_type;
  _priority_type priority;

   typedef double _lifetime_type;
  _lifetime_type lifetime;





  typedef boost::shared_ptr< ::atlascar_base::ThrottleCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atlascar_base::ThrottleCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ThrottleCommand_

typedef ::atlascar_base::ThrottleCommand_<std::allocator<void> > ThrottleCommand;

typedef boost::shared_ptr< ::atlascar_base::ThrottleCommand > ThrottleCommandPtr;
typedef boost::shared_ptr< ::atlascar_base::ThrottleCommand const> ThrottleCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atlascar_base::ThrottleCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atlascar_base::ThrottleCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atlascar_base::ThrottleCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atlascar_base::ThrottleCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "699f454e929c5ffcacbe00a57838c2fe";
  }

  static const char* value(const ::atlascar_base::ThrottleCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x699f454e929c5ffcULL;
  static const uint64_t static_value2 = 0xacbe00a57838c2feULL;
};

template<class ContainerAllocator>
struct DataType< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atlascar_base/ThrottleCommand";
  }

  static const char* value(const ::atlascar_base::ThrottleCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64 throttle\n"
"uint32 mode\n"
"\n"
"float64 priority\n"
"float64 lifetime\n"
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

  static const char* value(const ::atlascar_base::ThrottleCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.throttle);
      stream.next(m.mode);
      stream.next(m.priority);
      stream.next(m.lifetime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ThrottleCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atlascar_base::ThrottleCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atlascar_base::ThrottleCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "throttle: ";
    Printer<double>::stream(s, indent + "  ", v.throttle);
    s << indent << "mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "priority: ";
    Printer<double>::stream(s, indent + "  ", v.priority);
    s << indent << "lifetime: ";
    Printer<double>::stream(s, indent + "  ", v.lifetime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATLASCAR_BASE_MESSAGE_THROTTLECOMMAND_H