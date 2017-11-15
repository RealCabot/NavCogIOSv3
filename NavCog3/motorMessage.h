//
//  encoderMessage.h
//  NavCog3
//
//  Created by Shangxuan Wu on 11/9/17.
//  Copyright © 2017 HULOP. All rights reserved.
//

#import "RBManager.h"
#import "RBSubscriber.h"

#import "HeaderMessage.h"

#ifndef motorMessage_h
#define motorMessage_h

#endif /* encoderMessage_h */


@interface motorMessage : RBMessage {
    NSNumber * left_speed;
    NSNumber * right_speed;
    HeaderMessage * header;
}

@property (nonatomic, strong) NSNumber * left_speed;
@property (nonatomic, strong) NSNumber * right_speed;
@property (nonatomic, strong) HeaderMessage * header;

@end
