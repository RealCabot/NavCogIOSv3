# NavCog3

## NavCog3 Tools
The workspace also includes the following tools.

- **NavCogFingerPrint**: For fingerprinting
- **NavCogTool**: For simulate blind user navigation commands

## Pre-Requisites

- [Mantle](https://github.com/Mantle/Mantle) (MIT License)
- [Watson Developer Cloud Swift SDK](https://github.com/watson-developer-cloud/swift-sdk) (Apache 2.0)
- [blelocpp (BLE localization library)](https://github.com/hulop/blelocpp) (MIT License)

## Build

1. Install [CocoaPods](https://cocoapods.org/).
2. In the project directory, run `pod install`.
3. install [Carthage](https://github.com/Carthage/Carthage).
4. In the project directory, run `carthage bootstrap --platform iOS`.
5. Run `git submodule update --init --recursive`
6. Open NavCog3.xcworkspace
7. Build NavCog3 project with Xcode.

## Setup

See [wiki](https://github.com/hulop/NavCogIOSv3/wiki) for set up servers and data.

## RosBridge URLs
D-Money: 192.168.0.104:9090
Jennifei: 192.168.0.107:9090
Cloud Computing: 192.168.0.109:9090
Scrum Daddy: 192.168.0.105:9090 
C-Dawg: 192.168.0.108:9090

## ROS Messages
encoderMessage
  header
  speed
  
IMUMessage
  header
  vector
  
MotorMessage
  header
  left_speed
  right_speed
  
SimplifiedOdometry
  header
  pose
  orientation
  speed
  
## ROS Subscribers
ROSMotorSubscriber
ROSIMUSubscirber

## ROS Publisher
debugInfoPublisher
odometryPublisher

