# **hrdp_beta**
> hms robot development platform (beta)  
Sample packages for robot development kickstart.

Undergraduate Researcher Project in [Human Machine Systems Lab.](https://faculty.korea.ac.kr/kufaculty/drsspark/index.do) in [Korea University](https://www.korea.edu/)

## **Overview**
![hrdp vs hrdp_beta](https://github.com/skykongkong8/hrdp_beta/blob/main/res/HRDP_compare_blockdiagram.drawio.png)
## Environment settings
* HW : [Jetson Nano](https://developer.nvidia.com/embedded/jetson-nano-developer-kit)
* OS + frameworks : ubuntu 20.04 + [ros2-foxy](https://docs.ros.org/en/foxy/index.html) download from [here](https://omorobot.com/docs/ros2-%EC%84%A4%EC%B9%98%ED%95%98%EA%B8%B0-jetson-nano/)
  * swap mem : follow [here](https://github.com/JetsonHacksNano/installSwapfile) or below
  ```git
  cd ~
  git clone https://github.com/JetsonHacksNano/installSwapfile
  cd installSwapfile
  ./installSwapfile.sh
  sudo reboot
  ```
  * CUDA : cudatoolkit 10 + cudnn7 + gcc7 linking
  > Latest cuda configuration for Jetson Nano by far! (November, 2022)
  1. install CUDA
  ```
  sudo apt install -y cuda-core-10-0\
  cuda-cublas-dev-10-0\
  cuda-cudart-dev-10-0\
  cuda-libraries-dev-10-0\
  cuda-toolkit-10-0
  ```
  2. install cudnn
  ```
  sudo apt install libcudnn7-dev
  ```
  3. export cuda path
  ```
  export PATH=/usr/local/cuda-10.0/bin${PATH:+:${PATH}}
  export LD_LIBRARY_PATH=/usr/local/cuda/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
  ```
  4. link gcc/g++ version (for opencv build)_
  ```
  sudo apt install gcc-7 g++-7
  sudo ln -s /usr/bin/gcc-7 /usr/local/cuda-10.0/bin/gcc
  sudo ln -s /usr/bin/g++-7 /usr/local/cuda-10.0/bin/g++
  ```
* Sensor
  * camera : [Intel Realsense D455](https://www.intelrealsense.com/depth-camera-d455/)
    * sdk install : [follow here](https://github.com/IntelRealSense/librealsense/tree/development/wrappers/python
) and [here](https://jstar0525.tistory.com/97) (download from source)
    > * **WARNING** : cmake with python binding, CUDA, RSUSB !!!  
    ```cmake
    cmake  ../  -DBUILD_PYTHON_BINDINGS:bool=true -DFORCE_RSUSB_BACKEND=true -DBUILD_WITH_CUDA=true
    ```
    > *  *Many github issues are suffering from installing **librealsense2 with python binding at arm64 CPU architecture with ubuntu 20.04**, especially for Jetson Nano since Nvidia is not releasing the official image for it by far. However, I found the trick!*
  * lidar : [rplidar_s1](https://www.slamtec.com/en/Lidar/S1)
    * sdk install : [follow here](https://github.com/CreedyNZ/rplidar_ros2)
* Major python dependencies : [mediapipe](https://google.github.io/mediapipe/getting_started/python.html), [tensorflow 2.4](https://www.tensorflow.org/install/source?hl=ko), gTTS, SpeechRecognition, playsound
  * Almost every ros/python package depdency can be resolved with [rosdep](https://docs.ros.org/en/foxy/Tutorials/Intermediate/Rosdep.html) + Check [here](https://github.com/ros/rosdistro/tree/master/rosdep) as well
  > If it is your first time running rosdep:
  ```ros
  rosdep init
  rosdep update
  ```
  > Then run:
  ```ros
  cd ~/your_ws
  rosdep install  --from-paths src 
  ```

## 1. hrdp_sensors_beta
* Responsible for getting, processing, filtering, logging all the sensor data   
*  Currently only supports RGB & Depth camera    
   
### Sensors node
> Multiple publishers for each sensor connected 

Open a new terminal and insert:  
``` ros
ros2 run hrdp_sensors_beta sensors
```
  
## 2. hrdp_perception_beta
* Contains: [face_detection](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/face_detection.py), [pose_detection](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/sample_scripts/sample_body_pose_detection.py), [3d_sneakers_objectron](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/shoe_3d_detection.py)
> * with tensorflow 2.4+, you can enjoy personalized detection functions with customized tf/tflie models. However, in this repository we are using jdk to use tf models without tf!  

### Face detection node
> Subscribed to camera +  Face detection model  + Detection call service

Open a new terminal and insert:
```ros
ros2 run hrdp_perception_beta face_detection
```
Then to request the service:
```ros
ros2 service call /hrdp_perception_beta/face_detection example_interfaces/srv/SetBool "{data : True}"
```

### Sneakers objectron node
> Subscribed to camera + MobileNet + Sneakers objectron model + MultiArray publishers  

> **WARNING** : you should require specific .tflite model's' for objectron node.  
You can download all the files from [here](https://github.com/google/mediapipe/tree/v0.8.10.1/mediapipe/modules/objectron), or from the older branches of [mediapipe](https://github.com/google/mediapipe) repo if deprecated, and add it to : `{your_python_dist-packages}/mediapipe/modules/objectron`  

Then, open a new terminal and insert:
```ros
ros2 run hrdp_perception_beta sneakers_objectron
```
* Sample Image: sneakers_objectron_node -> Publishes Translation & Rotation  
![3D Sneakers OObjectron](https://github.com/skykongkong8/hrdp_beta/blob/main/res/sneakers_objectron.png)  

## 3. hrdp_actuators_beta 
* Current actuator suppported : [dynamixel](http://www.dynamixel.com/)
### Keyboard control node
> Keyboard input interface + Twist publisher  

Open a new terminal and insert:
```ros
ros2 run hrdp_actuators_beta keyboard_control
```
### Voice control node
> Subscribed to user_voice + String publisher

Open a new terminal and insert:
```ros
ros2 run hrdp_actuators_beta voice_control
```

## 4. hrdp_human_interfaces
* Functions of ears and mouth for a robot.  
* Simple AI speaker functions : clock, timer, joke  
* Before running any nodes, please run `organs/microphone_connection_check.py` and correct DEVICE_INDEX variable properly!

### User voice listener node
> Microphone connection + TTS algorithm + String publisher  

Open a new terminal and insert:
```ros
ros2 run hrdp_human_interface_beta user_voice_listener
```

## 5. hrdp_launch
* Integrated launch files that contain multiple nodes from the distant packages.
### hrdp_sneakers_objectron_launch.xml
> Camera publisher + camera subscriber + sneakers_objectron model + Rotation publisher + Translation publisher
```ros
ros2 launch hrdp_launch hrdp_sneakers_objectron_launch.xml
```
