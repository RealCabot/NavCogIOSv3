//
//  MotorMessage.h
//  NavCog3
//
//  Created by Shangxuan Wu on 11/9/17.
//  Copyright © 2017 HULOP. All rights reserved.
//

#ifndef MotorMessage_h
#define MotorMessage_h

#import "RBManager.h"
#import "HeaderMessage.h"


@interface MotorMessage : RBMessage {
    HeaderMessage * header;
    NSNumber * left_speed;
    NSNumber * right_speed;
}

@property (nonatomic, strong) NSNumber * left_speed;
@property (nonatomic, strong) NSNumber * right_speed;
@property (nonatomic, strong) HeaderMessage * header;

@end


#endif /* MotorMessage_h */
