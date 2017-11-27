//
//  IMUMessage.m
//  NavCog3
//
//  Created by Shangxuan Wu on 11/26/17.
//  Copyright © 2017 HULOP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMUMessage.h"

@implementation IMUMessage
@synthesize header, vector;
// @synthesize header, angleX, angleY, angleZ;

-(void)setDefaults {
    self.header = [[HeaderMessage alloc] init];
    self.vector = [[VectorMessage alloc] init];
}
@end
