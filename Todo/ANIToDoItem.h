//
//  ANIToDoItem.h
//  Todo
//
//  Created by anirudh-MacBookAir on 26/04/14.
//  Copyright (c) 2014 2Robots. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ANIToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
