//
//  BLCMediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by Andy Bradbury on 27/10/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCMediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end
