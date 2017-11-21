#import "SimplifiedOdometry.h"

@implementation SimplifiedOdometry
@synthesize header, pose, orientation, speed;

-(void)setDefaults {
    self.header = [[HeaderMessage alloc] init];
    self.pose = [[VectorMessage alloc] init];
}

@end
