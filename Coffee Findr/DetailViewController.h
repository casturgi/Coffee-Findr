//
//  DetailViewController.h
//  Coffee Findr
//
//  Created by cory Sturgis on 9/9/15.
//  Copyright (c) 2015 CorySturgis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;

@end
