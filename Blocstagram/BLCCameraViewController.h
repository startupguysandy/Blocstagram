//
//  BLCCameraViewController.h
//  Blocstagram
//
//  Created by Andy Bradbury on 23/11/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCCameraViewController;

@protocol BLCCameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(BLCCameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface BLCCameraViewController : UIViewController

@property (nonatomic, weak) NSObject <BLCCameraViewControllerDelegate> *delegate;

@end
