#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "adder";

// For Block adder/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_adder_std_msgs_Float64> Sub_adder_1;

// For Block adder/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_adder_std_msgs_Float64> Sub_adder_15;

// For Block adder/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_adder_std_msgs_Float64> Pub_adder_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

