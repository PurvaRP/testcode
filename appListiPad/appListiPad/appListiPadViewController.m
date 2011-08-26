//
//  appListiPadViewController.m
//  appListiPad
//
//  Created by Rakesh on 23/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "appListiPadViewController.h"

@implementation appListiPadViewController

- (void)dealloc
{
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSString * filepath = [[NSBundle mainBundle] pathForResource:@"05tutorial_reading"  ofType:@"txt"];
    
    documentInteractionController = [UIDocumentInteractionController interactionControllerWithURL:[NSURL fileURLWithPath:filepath]];
    [documentInteractionController setDelegate:self];
    [documentInteractionController retain];
    
}

- (IBAction) barButtonAction:(id)sender {
    [documentInteractionController 
     presentOptionsMenuFromBarButtonItem:barButton animated:YES];
}

- (void) viewDidAppear:(BOOL)animated {
}


- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return YES;
}

@end
