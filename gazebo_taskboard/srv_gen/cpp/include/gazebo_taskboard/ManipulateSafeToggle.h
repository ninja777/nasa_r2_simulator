/* Auto-generated by genmsg_cpp for file /home/ubuntu/work/robonaut2_taskboard_controller/stacks/nasa_r2_simulator/gazebo_taskboard/srv/ManipulateSafeToggle.srv */
#ifndef GAZEBO_TASKBOARD_SERVICE_MANIPULATESAFETOGGLE_H
#define GAZEBO_TASKBOARD_SERVICE_MANIPULATESAFETOGGLE_H
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
struct ManipulateSafeToggleRequest_ {
  typedef ManipulateSafeToggleRequest_<ContainerAllocator> Type;

  ManipulateSafeToggleRequest_()
  : index(0)
  , mode(0)
  , value(0.0)
  , duration(0.0)
  {
  }

  ManipulateSafeToggleRequest_(const ContainerAllocator& _alloc)
  : index(0)
  , mode(0)
  , value(0.0)
  , duration(0.0)
  {
  }

  typedef int32_t _index_type;
  int32_t index;

  typedef int32_t _mode_type;
  int32_t mode;

  typedef double _value_type;
  double value;

  typedef double _duration_type;
  double duration;


  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ManipulateSafeToggleRequest
typedef  ::gazebo_taskboard::ManipulateSafeToggleRequest_<std::allocator<void> > ManipulateSafeToggleRequest;

typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleRequest> ManipulateSafeToggleRequestPtr;
typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleRequest const> ManipulateSafeToggleRequestConstPtr;


template <class ContainerAllocator>
struct ManipulateSafeToggleResponse_ {
  typedef ManipulateSafeToggleResponse_<ContainerAllocator> Type;

  ManipulateSafeToggleResponse_()
  : ok(false)
  {
  }

  ManipulateSafeToggleResponse_(const ContainerAllocator& _alloc)
  : ok(false)
  {
  }

  typedef uint8_t _ok_type;
  uint8_t ok;


  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ManipulateSafeToggleResponse
typedef  ::gazebo_taskboard::ManipulateSafeToggleResponse_<std::allocator<void> > ManipulateSafeToggleResponse;

typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleResponse> ManipulateSafeToggleResponsePtr;
typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateSafeToggleResponse const> ManipulateSafeToggleResponseConstPtr;

struct ManipulateSafeToggle
{

typedef ManipulateSafeToggleRequest Request;
typedef ManipulateSafeToggleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ManipulateSafeToggle
} // namespace gazebo_taskboard

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "253aa4561823cd92d74565b77292e382";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x253aa4561823cd92ULL;
  static const uint64_t static_value2 = 0xd74565b77292e382ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulateSafeToggleRequest";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 index\n\
int32 mode\n\
float64 value\n\
float64 duration\n\
\n\
";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulateSafeToggleResponse";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool ok\n\
\n\
\n\
";
  }

  static const char* value(const  ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.index);
    stream.next(m.mode);
    stream.next(m.value);
    stream.next(m.duration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ManipulateSafeToggleRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ok);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ManipulateSafeToggleResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<gazebo_taskboard::ManipulateSafeToggle> {
  static const char* value() 
  {
    return "ae7b68166c28d08616913839674635ad";
  }

  static const char* value(const gazebo_taskboard::ManipulateSafeToggle&) { return value(); } 
};

template<>
struct DataType<gazebo_taskboard::ManipulateSafeToggle> {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulateSafeToggle";
  }

  static const char* value(const gazebo_taskboard::ManipulateSafeToggle&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ae7b68166c28d08616913839674635ad";
  }

  static const char* value(const gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulateSafeToggle";
  }

  static const char* value(const gazebo_taskboard::ManipulateSafeToggleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ae7b68166c28d08616913839674635ad";
  }

  static const char* value(const gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gazebo_taskboard/ManipulateSafeToggle";
  }

  static const char* value(const gazebo_taskboard::ManipulateSafeToggleResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_TASKBOARD_SERVICE_MANIPULATESAFETOGGLE_H

