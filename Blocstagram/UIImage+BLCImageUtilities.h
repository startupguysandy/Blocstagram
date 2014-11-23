//
//  UIImage+BLCImageUtilities.h
//  Blocstagram
//
//  Created by Andy Bradbury on 23/11/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BLCImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end
