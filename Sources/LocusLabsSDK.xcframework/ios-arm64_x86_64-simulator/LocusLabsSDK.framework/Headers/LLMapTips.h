//
// Created by Jeff Goldberg on 4/8/15.
//  Copyright © 2015-2021 LocusLabs, Inc. All rights reserved.
//  Copyright © 2021 Acuity Brands, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LLMapTipsPopupMethod) {
    LLMapTipsPopupMethodDefault = 0,
    LLMapTipsPopupMethodPush,
    LLMapTipsPopupMethodModal
};

@interface LLMapTips : UIViewController

@property (retain,nonatomic) UINavigationController *customerNavigationController;
@property (nonatomic) LLMapTipsPopupMethod mapTipsPopupMethod;

- (void)show;

@end