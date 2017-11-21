//
//  MotorMessage.m
//  NavCog3
//
//  Created by Shangxuan Wu on 11/21/17.
//  Copyright © 2017 HULOP. All rights reserved.
//


#import "MotorMessage.h"

@implementation MotorMessage
@synthesize header, left_speed, right_speed;

-(void)setDefaults {
    self.header = [[HeaderMessage alloc] init];
}

@end
