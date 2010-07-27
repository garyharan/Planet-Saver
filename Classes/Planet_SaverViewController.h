//
//  Planet_SaverViewController.h
//  Planet-Saver
//
//  Created by Gary Haran on 10-07-26.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Planet_SaverViewController : UIViewController <UIAccelerometerDelegate> {
	IBOutlet UIProgressView *progressX;
	IBOutlet UIProgressView *progressY;
	IBOutlet UIProgressView *progressZ;
  
  UIAccelerometer *accelerometer;
}

@property (nonatomic, retain) IBOutlet UIProgressView *progressX;
@property (nonatomic, retain) IBOutlet UIProgressView *progressY;
@property (nonatomic, retain) IBOutlet UIProgressView *progressZ;

@property (nonatomic, retain) UIAccelerometer *accelerometer;

@end

