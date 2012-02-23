//
//  SMRotaryWheel.m
//  RotaryWheelProject
//
//  Created by cesarerocchi on 2/10/12.
//  Copyright (c) 2012 studiomagnolia.com. All rights reserved.

#import "SMViewController.h"

@implementation SMViewController

@synthesize wheel;

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    wheel = [[SMRotaryWheel alloc] initWithFrame:CGRectMake(0, 0, 200, 200) 
                                     andDelegate:self 
                                    withSections:8];
    
    wheel.center = CGPointMake(160, 240);
    [self.view addSubview:wheel];

}

- (void) didChangeValue:(NSString *)newValue {

    
    
}
@end
