//
//  SMRotaryWheel.m
//  RotaryWheelProject
//
//  Created by cesarerocchi on 2/10/12.
//  Copyright (c) 2012 studiomagnolia.com. All rights reserved.

#import <UIKit/UIKit.h>
#import "SMRotaryProtocol.h"
#import "SMClove.h"

@interface SMRotaryWheel : UIView 

@property (weak) id <SMRotaryProtocol> delegate;
@property (nonatomic, strong) UIView *container;
@property (nonatomic, strong) NSMutableArray *cloves;
@property CGAffineTransform startTransform;
@property int currentValue;
@property int numberOfSections;
@property CGPoint wheelCenter;
@property (nonatomic, strong) NSMutableDictionary *cloveNames;

- (id) initWithFrame:(CGRect)frame andDelegate:(id)del withSections:(int)sectionsNumber;
- (void) initWheel;
- (void) buildClovesEven;
- (void) buildClovesOdd;
- (float) calculateDistanceFromCenter:(CGPoint)point;
- (UILabel *) getLabelByValue:(int)value;
- (NSString *) getCloveName:(int)position;


@end
