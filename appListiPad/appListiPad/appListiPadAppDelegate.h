//
//  appListiPadAppDelegate.h
//  appListiPad
//
//  Created by Rakesh on 23/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class appListiPadViewController;

@interface appListiPadAppDelegate : NSObject <UIApplicationDelegate> {
    int aq;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UINavigationController *viewController;

@end
