//
//  RCUserEntity.h
//  JLRubyChina
//
//  Created by ccjoy-jimneylee on 13-12-10.
//  Copyright (c) 2013年 jimneylee. All rights reserved.
//

#import "JLNimbusEntity.h"

@interface RCUserEntity : JLNimbusEntity
@property (nonatomic, copy) NSString* userId;
@property (nonatomic, copy) NSString* username;
@property (nonatomic, copy) NSString* avatarUrl;
@end
