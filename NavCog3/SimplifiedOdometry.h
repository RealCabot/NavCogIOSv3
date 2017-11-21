//
//  A simplified version of nav_msg/Odometry
// http://docs.ros.org/api/nav_msgs/html/msg/Odometry.html
//

#ifndef SimplifiedOdometry_h
#define SimplifiedOdometry_h

#import "HeaderMessage.h"
#import "VectorMessage.h"

@interface SimplifiedOdometry : RBMessage {
    HeaderMessage * header;
    VectorMessage * pose;
    NSNumber * orientation;
    NSNumber * speed;
}

@property (nonatomic, strong) HeaderMessage * header;
@property (nonatomic, strong) VectorMessage * pose;
@property (nonatomic, strong) NSNumber * orientation;
@property (nonatomic, strong) NSNumber * speed;

@end

#endif /* SimplifiedOdometry_h */
