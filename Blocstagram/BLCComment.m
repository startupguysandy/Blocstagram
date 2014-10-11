//
//  BLCComment.m
//  Blocstagram
//
//  Created by Andy Bradbury on 06/09/2014.
//  Copyright (c) 2014 Tin Bear Studios. All rights reserved.
//

#import "BLCComment.h"
#import "BLCUser.h"

@implementation BLCComment

- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary {
    self = [super init];
    
    if (self) {
        self.idNumber = commentDictionary[@"id"];
        self.text = commentDictionary[@"text"];
        self.from = [[BLCUser alloc] initWithDictionary:commentDictionary[@"from"]];
    }
    
    return self;
}

@end
