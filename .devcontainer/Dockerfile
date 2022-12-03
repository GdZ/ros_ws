# This is an auto generated Dockerfile for ros:desktop-full
# generated from docker_images/create_ros_image.Dockerfile.em
FROM osrf/ros:melodic-desktop-bionic
USER root

# install ros packages
RUN apt-get update && apt upgrade -y && apt-get install -y --no-install-recommends \
    ros-melodic-desktop-full=1.4.1-0* \
    gdb ros-melodic-catkin python-catkin-tools ros-melodic-moveit \
    && rm -rf /var/lib/apt/lists/*

RUN echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
RUN echo "source /workspaces/ros_ws/devel/setup.bash" >> ~/.bashrc
