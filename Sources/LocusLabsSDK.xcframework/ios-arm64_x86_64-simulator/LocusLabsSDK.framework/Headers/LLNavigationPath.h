//
// Created by Rafal Hotlos on 30/03/2018.
//  Copyright © 2018-2021 LocusLabs, Inc. All rights reserved.
//  Copyright © 2021 Acuity Brands, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LLNavigationPoint;

/**
 *  Describes a navigation path between a starting point and one or more destinations.
 */
@interface LLNavigationPath : NSObject

/**
 *  A series of LLWaypoints which define the path between the destinations.
 */
@property (nonatomic, readonly) NSArray *waypoints;

/**
 *  The total distance of the navigation path, in meters.
 */
@property (nonatomic, readonly) NSNumber *distance;

/**
 *  The estimated time needed to traverse the path, in minutes.
 */
@property (nonatomic, readonly) NSNumber *eta;

@property (nonatomic, readonly) NSArray<LLNavigationPoint *> *navigationPoints;

@end
