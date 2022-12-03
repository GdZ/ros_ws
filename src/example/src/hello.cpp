#include <ros/ros.h>

// #include "/* header */"

int main(int argc, char * argv[])
{
    ros::init(argc, argv, "hello");
    // auto /* node_name */ = /* namespace_name::ClassName */();
    for (int8_t i = 0; i < 10; )
    {
        i += 1;
        ROS_INFO("%d. hello, world!", i);
        i -= 1;
    }

    ros::spin();
    ros::shutdown();
    return 0;
}
