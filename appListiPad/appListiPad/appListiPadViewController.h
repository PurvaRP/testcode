//
//  appListiPadViewController.h
//  appListiPad
//
//  Created by Rakesh on 23/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface appListiPadViewController : UIViewController<UIDocumentInteractionControllerDelegate> {
    IBOutlet UIBarButtonItem * barButton;
    UIDocumentInteractionController * documentInteractionController;
}

- (IBAction) barButtonAction:(id)sender;

@end
