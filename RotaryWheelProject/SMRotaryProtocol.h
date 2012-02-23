//
//  SMRotaryWheel.m
//  RotaryWheelProject
//
//  Created by cesarerocchi on 2/10/12.
//  Copyright (c) 2012 studiomagnolia.com. All rights reserved.

#import <Foundation/Foundation.h>

@protocol SMRotaryProtocol <NSObject>

- (void) didChangeValue:(NSString *)newValue;

@end
