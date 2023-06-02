#ifndef _ROS_SERVICE_ResetMapping_h
#define _ROS_SERVICE_ResetMapping_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace hector_mapping
{

static const char RESETMAPPING[] = "hector_mapping/ResetMapping";

  class ResetMappingRequest : public ros::Msg
  {
    public:
      typedef geometry_msgs::Pose _initial_pose_type;
      _initial_pose_type initial_pose;

    ResetMappingRequest():
      initial_pose()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->initial_pose.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->initial_pose.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return RESETMAPPING; };
    const char * getMD5(){ return "3423647d14c6c84592eef8b1184a5974"; };

  };

  class ResetMappingResponse : public ros::Msg
  {
    public:

    ResetMappingResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return RESETMAPPING; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class ResetMapping {
    public:
    typedef ResetMappingRequest Request;
    typedef ResetMappingResponse Response;
  };

}
#endif
