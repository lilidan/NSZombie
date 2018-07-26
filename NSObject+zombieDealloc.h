//
//  NSObject+zombieDealloc.h
//  FortunePlat
//
//  Created by sgcy on 2018/7/26.
//  Copyright © 2018年 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject(zombieDealloc)

- (void)dealloc;

@end
