# NavCog3 for Cabot

## Build

1. Install [CocoaPods](https://cocoapods.org/).
2. In the project directory, run `pod install`.
3. install [Carthage](https://github.com/Carthage/Carthage).
4. In the project directory, run `carthage bootstrap --platform iOS`.
5. Run `git submodule update --init --recursive`
6. Open NavCog3.xcworkspace
7. Build NavCog3 project with Xcode.

## ROS Messages
### Subscribed
- `/encoder`: `MotorMessage` which replicates `arduino_msg::Motor`
- `/imu`: `IMUMessage` which replicates `geometry_msg::Vector3Stamped`
### Published
- `/Navcog/odometry`: `navcog_msg::SimplifiedOdometry`
- `/Navcog/debug`: `std_msgs/String`, some random debug info
