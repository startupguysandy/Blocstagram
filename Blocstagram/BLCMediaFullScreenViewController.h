//
//  BLCMediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Andy Bradbury on 24/10/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaFullScreenViewController : UIViewController;

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(BLCMedia *)media;

- (void) centerScrollView;

@end
