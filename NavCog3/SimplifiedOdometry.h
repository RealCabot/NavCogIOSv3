//
//  A simplified version of nav_msg/Odometry
// http://docs.ros.org/api/nav_msgs/html/msg/Odometry.html
//

#ifndef SimplifiedOdometry_h
#define SimplifiedOdometry_h

@interface SimplifiedOdometry : RBMessage {
    HeaderMessage * header;
    VectorMessage * pose;
    NSNumber * orientation;
    NSNumber * speed;
    // Rotate?
}

@property (nonatomic, strong) HeaderMessage * header;
@property (nonatomic, strong) VectorMessage * pose;
@property (nonatomic, strong) NSNumber * x;
@property (nonatomic, strong) NSNumber * y;
@property (nonatomic, strong) NSNumber * z;

#endif /* SimplifiedOdometry_h */
