//
//  Planet_SaverAppDelegate.h
//  Planet-Saver
//
//  Created by Gary Haran on 10-07-26.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Planet_SaverViewController;

@interface Planet_SaverAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Planet_SaverViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Planet_SaverViewController *viewController;

@end

