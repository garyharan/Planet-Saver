//
//  Planet_SaverViewController.m
//  Planet-Saver
//
//  Created by Gary Haran on 10-07-26.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "Planet_SaverViewController.h"

@implementation Planet_SaverViewController

@synthesize progressX, progressY, progressZ, accelerometer;

- (void)viewDidLoad {
	[super viewDidLoad];
  
	self.accelerometer = [UIAccelerometer sharedAccelerometer];
  self.accelerometer.updateInterval = 0.1;
  self.accelerometer.delegate = self;
}

- (void)accelerometer:(UIAccelerometer *)accelerometer didAccelerate:(UIAcceleration *)acceleration {
  self.progressX.progress = ABS(acceleration.x);
	self.progressY.progress = ABS(acceleration.y);
  self.progressZ.progress = ABS(acceleration.z);
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
}

- (void)dealloc {
	[super dealloc];
}

@end
