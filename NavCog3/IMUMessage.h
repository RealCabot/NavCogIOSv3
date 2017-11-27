//
//  IMUMessage.h
//  NavCog3
//
//  Created by Shangxuan Wu on 11/26/17.
//  Copyright © 2017 HULOP. All rights reserved.
//

#ifndef IMUMessage_h
#define IMUMessage_h

#import "RBManager.h"
#import "HeaderMessage.h"
#import "VectorMessage.h"


@interface IMUMessage : RBMessage {
    HeaderMessage * header;
    VectorMessage * vector;  // change?
    
    /*NSNumber * angleX;
    NSNumber * angleY;
    NSNumber * angleZ;
    NSArray * EulerAngles;*/
}

@property (nonatomic, strong) VectorMessage * vector;
@property (nonatomic, strong) HeaderMessage * header;

@end

#endif /* IMUMessage_h */
