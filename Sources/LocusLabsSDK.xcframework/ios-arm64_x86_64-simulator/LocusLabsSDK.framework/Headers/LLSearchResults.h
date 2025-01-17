//
//  LLSearchResults.h
//  LocusLabsSDK
//
//  Created by Samuel Ziegler on 7/11/14.
//  Copyright © 2014-2021 LocusLabs, Inc. All rights reserved.
//  Copyright © 2021 Acuity Brands, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LLSearchResults : NSObject

/**
 *  The current search results.
 */
@property (strong, readonly) NSArray *results;

/**
 *  The current search other results.
 */
@property (strong, readonly) NSArray *otherResults;

/**
 *  The query string.
 */
@property (strong, readonly) NSString *query;

/**
 *  Whether additional results are available.  If there are, they can be retrieved by another call to search.
 *
 *  @return the more flag
 */
- (BOOL)hasMore;

@end