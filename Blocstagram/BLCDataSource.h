//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by Andy Bradbury on 06/09/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
