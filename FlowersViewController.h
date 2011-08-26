//
//  FlowersViewController.h
//  Flowers
//
//  Created by MAC22 on 30/06/11.
//  Copyright 2011 Diaspark India. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MediaPlayer/MPMediaPickerController.h"
#import "MediaPlayer/MPMoviePlayerViewController.h"
#import "MediaPlayer/MediaPlayer.h"

#import "CustomTableViewController.h"
#import "SlideShowViewCtrl.h"
#import "TestimonialViewController.h"
#import "VideoViewCtrl.h"
#import "UIViewTap.h"

@interface FlowersViewController : UIViewController <GalleryDelegate,UIViewTapDelegate>{
    
    //UIToolBar
    IBOutlet UIToolbar *toolBar;
    IBOutlet UIBarButtonItem *imageNumber;
    IBOutlet UIBarButtonItem *pageButton;
    
    // Media player
    MPMoviePlayerViewController *player;
    
    // Image gallery view
    CustomTableViewController *galleryViewController;
    
    // Testimonial view
    TestimonialViewController *testimonialViewController;
    
    // UIViewTap
    UIViewTap *backgroundTapView;   // This is the view to appear in background to show a partial transparent view and handle tap on background.
    
	NSArray *catalogueArray;    
    int currentImageIndex;
    
    
    IBOutlet UIButton *slidesButton;
    IBOutlet UIButton *videosButton;
    IBOutlet UIButton *testimonialButton;
    IBOutlet UIButton *buyNowButton;
	IBOutlet UIButton *testButton;
    
    SlideShowViewCtrl *SlideShowViewCtrl_Obj;
    VideoViewCtrl *videoViewCtrl;
}

@property (nonatomic , retain ) IBOutlet UIScrollView *imagePinchInScrollView;
@property (nonatomic , retain ) IBOutlet UIImageView *pagesImageView;
@property (nonatomic , retain ) IBOutlet UIImageView *splashImageView;
@property (nonatomic , retain ) IBOutlet UIButton *coverPageButton; // button as cover page

@property (nonatomic , retain ) UIButton *buyNowButton;

@property (nonatomic , retain ) IBOutlet UIView *optionView;
@property (nonatomic,retain) NSArray *catalogueArray;
@property (nonatomic) int currentImageIndex;
// TestimonialView
@property(nonatomic,retain) TestimonialViewController *testimonialViewController;
-(void)showTestimonialView:(UIButton*)btn;
-(void)hideTestimonialView:(UIButton*)btn;


// GalleryView
@property(nonatomic,retain) CustomTableViewController *galleryViewController;
-(void)scrollGalleryToIndex:(NSInteger)index;

// ------ ToolBar
@property (nonatomic , retain ) IBOutlet UIToolbar *toolBar;
@property (nonatomic , retain ) IBOutlet UIBarButtonItem *imageNumber;
@property (nonatomic , retain ) IBOutlet UIBarButtonItem *tabBarPrevious;
@property (nonatomic , retain ) IBOutlet UIBarButtonItem *tabBarNext;
@property (nonatomic , retain ) IBOutlet UIBarButtonItem *pageButton;

@property (nonatomic , retain ) UIViewTap *backgroundTapView;

- (IBAction)coverButtonClicked:(id)sender;
- (IBAction)pagesButtonClicked:(id)sender;
- (IBAction)previousButtonClicked:(id)sender;
- (IBAction)nextButtonClicked:(id)sender;
- (IBAction)shareButtonClicked:(id)sender;
- (IBAction)favoriteButtonClicked:(id)sender;
- ( void ) titlePageNumber : (NSInteger) currentIndex;

//------ option view
-(void)showOptionView;
-(void)hideOptionView;
- (IBAction)testimonialButtonClicked:(id)sender;
- (IBAction)videosButtonClicked:(id)sender;
- (IBAction)slidesButtonClicked:(id)sender;
- (IBAction)buyNowButtonClicked:(id)sender;
-(void) removeSlideShowViewCtrl;



// Gesture
- (void)createGestureRecognizers;

// Partial background view
-(void)showBackgroundTapView;
-(void)hideBackgroundTapView;
-(void)removeTestimonialView;
-(void)hideSlideShowViewCtrl;
- ( void ) optionViewButtonValidation;
-(void) hideVideoViewCtrl ;
-(void) removeVideoViewCtrl;


// Orientation CHANGE Methods
- ( void ) initializeOrientationPortrait;
- ( void )initializeOrientationLandscape;

//------ Cover page
- (IBAction)coverPageTapped:(id)sender; // handle tap on cover page

//------ Tray
-(void)hideTray;
-(void)showTray;
-(void)setPageButtonStyleToBorder;

@end

