#include "ros/ros.h"
#include "airsim_ros_wrapper.h"

int main(int argc, char ** argv)
{
    ros::init(argc, argv, "airsim_node");
    ros::NodeHandle nh;
    ros::NodeHandle nh_private("~");

    AirsimROSWrapper airsim_ros_wrapper(nh, nh_private);
    airsim_ros_wrapper.initialize_airsim();
    airsim_ros_wrapper.initialize_ros();

    ros::spin();
    return 0;
}