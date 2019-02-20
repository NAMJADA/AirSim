# airsim_roscpp_pkgs

For internal use, don't use this in open source version as of now
##  Setup 
Ubuntu 16.04 + ROS Kinetic. 
WSL works fine as well


##  Build
- Build AirSim and 
```
cd $(AIRSIM_ROOT);
./setup.sh;
./build.sh;
cd $(AIRSIM_ROOT)/Unity;
./build.sh;
```

```
mkdir -p airsim_ros_ws/src && cd $_
git clone https://github.com/madratman/airsim_roscpp_pkgs.git
cd ../
catkin_make # or catkin build
```
