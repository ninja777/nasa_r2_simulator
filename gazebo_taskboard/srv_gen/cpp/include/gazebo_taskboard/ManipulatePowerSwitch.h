/* Auto-generated by genmsg_cpp for file /home/ubuntu/work/robonaut2_taskboard_controller/stacks/nasa_r2_simulator/gazebo_taskboard/srv/ManipulatePowerSwitch.srv */
#ifndef GAZEBO_TASKBOARD_SERVICE_MANIPULATEPOWERSWITCH_H
#define GAZEBO_TASKBOARD_SERVICE_MANIPULATEPOWERSWITCH_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace gazebo_taskboard
{
template <class ContainerAllocator>
struct ManipulatePowerSwitchRequest_ {
  typedef ManipulatePowerSwitchRequest_<ContainerAllocator> Type;

  ManipulatePowerSwitchRequest_()
  : angle(0.0)
  , duration(0.0)
  {
  }

  ManipulatePowerSwitchRequest_(const ContainerAllocator& _alloc)
  : angle(0.0)
  , duration(0.0)
  {
  }

  typedef double _angle_type;
  double angle;

  typedef double _duration_type;
  double duration;


  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ManipulatePowerSwitchRequest
typedef  ::gazebo_taskboard::ManipulatePowerSwitchRequest_<std::allocator<void> > ManipulatePowerSwitchRequest;

typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchRequest> ManipulatePowerSwitchRequestPtr;
typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchRequest const> ManipulatePowerSwitchRequestConstPtr;


template <class ContainerAllocator>
struct ManipulatePowerSwitchResponse_ {
  typedef ManipulatePowerSwitchResponse_<ContainerAllocator> Type;

  ManipulatePowerSwitchResponse_()
  : ok(false)
  {
  }

  ManipulatePowerSwitchResponse_(const ContainerAllocator& _alloc)
  : ok(false)
  {
  }

  typedef uint8_t _ok_type;
  uint8_t ok;


  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ManipulatePowerSwitchResponse
typedef  ::gazebo_taskboard::ManipulatePowerSwitchResponse_<std::allocator<void> > ManipulatePowerSwitchResponse;

typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchResponse> ManipulatePowerSwitchResponsePtr;
typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerSwitchResponse const> ManipulatePowerSwitchResponseConstPtr;

struct ManipulatePowerSwitch
{

typedef ManipulatePowerSwitchRequest Request;
typedef ManipulatePowerSwitchResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ManipulatePowerSwitch
} // namespace gazebo_taskboard

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bec7600c9fce5aa19d66565f6ce396c6";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xbec7600c9fce5aa1ULL;
  static const uint64_t static_value2 = 0x9d66565f6ce396c6ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulatePowerSwitchRequest";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 angle\n\
float64 duration\n\
\n\
";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulatePowerSwitchResponse";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool ok\n\
\n\
\n\
";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.angle);
    stream.next(m.duration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ManipulatePowerSwitchRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ok);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ManipulatePowerSwitchResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<gazebo_taskboard::ManipulatePowerSwitch> {
  static const char* value() 
  {
    return "f5cdf7033f402cd788e5611f14b40b32";
  }

  static const char* value(const gazebo_taskboard::ManipulatePowerSwitch&) { return value(); } 
};

template<>
struct DataType<gazebo_taskboard::ManipulatePowerSwitch> {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulatePowerSwitch";
  }

  static const char* value(const gazebo_taskboard::ManipulatePowerSwitch&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f5cdf7033f402cd788e5611f14b40b32";
  }

  static const char* value(const gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulatePowerSwitch";
  }

  static const char* value(const gazebo_taskboard::ManipulatePowerSwitchRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f5cdf7033f402cd788e5611f14b40b32";
  }

  static const char* value(const gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulatePowerSwitch";
  }

  static const char* value(const gazebo_taskboard::ManipulatePowerSwitchResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_TASKBOARD_SERVICE_MANIPULATEPOWERSWITCH_H

