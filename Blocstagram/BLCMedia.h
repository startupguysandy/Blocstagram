//
//  BLCMedia.h
//  Blocstagram
//
//  Created by Andy Bradbury on 06/09/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, BLCMediaDownloadState) {
    BLCMediaDownloadStateNeedsImage				= 0,
    BLCMediaDownloadStateDownloadInProgress		= 1,
    BLCMediaDownloadStateNonRecoverableError	= 2,
    BLCMediaDownloadStateHasImage				= 3
};

@class BLCUser;

@interface BLCMedia : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) BLCMediaDownloadState downloadState;

@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

- (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@end
