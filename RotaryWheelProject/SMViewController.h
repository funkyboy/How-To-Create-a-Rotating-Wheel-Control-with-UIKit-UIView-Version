//
//  SMRotaryWheel.m
//  RotaryWheelProject
//
//  Created by cesarerocchi on 2/10/12.
//  Copyright (c) 2012 studiomagnolia.com. All rights reserved.

#import <UIKit/UIKit.h>
#import "SMRotaryWheel.h"
#import "SMRotaryProtocol.h"

@interface SMViewController : UIViewController <SMRotaryProtocol>

@property (nonatomic, strong) SMRotaryWheel *wheel;

@end
