//
//  encoderMessage.m
//  NavCog3
//
//  Created by Shangxuan Wu on 11/20/17.
//  Copyright © 2017 HULOP. All rights reserved.
//

#import "encoderMessage.h"

@implementation encoderMessage
@synthesize header, speed;
-(void)setDefaults {
    self.header = [[HeaderMessage alloc] init];
}

@end
