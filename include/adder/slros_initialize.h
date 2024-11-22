#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "adder_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block adder/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_adder_std_msgs_Float64> Sub_adder_1;

// For Block adder/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_adder_std_msgs_Float64> Sub_adder_15;

// For Block adder/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_adder_std_msgs_Float64> Pub_adder_4;

void slros_node_init(int argc, char** argv);

#endif
