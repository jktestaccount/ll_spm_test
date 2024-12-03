//
//  LLAccessibilityIdentifier.h
//  LocusLabsSDK
//
//  Created by Rafal Hotlos on 18/09/2019.
//  Copyright © 2019-2021 LocusLabs, Inc. All rights reserved.
//  Copyright © 2021 Acuity Brands, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * This file provides constants for accessibilityIdentifier values used in the SDK.
 * These are strings identifying the user interface elements and can be used for UI test automation.
 */

/**
 * Identifier for the back button presented in the LLMapView
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierMapViewBackButton;
/**
 * Identifier for the close button for a POI view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierPOIViewCloseButton;
/**
 * Identifier for the tappable phone view in the POI view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierPOIViewPhoneView;
/**
 * Identifier for the swap button in the POI view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierPOIViewSwapButton;
/**
 * Identifier for the cancel button in directions view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierDirectionsViewCancelButton;
/**
 * Identifier for the next button in directions queue selector
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierQueueSelectorNextButton;
/**
 * Identifier for the nav button in bottom bar view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierBottomBarViewNavButton;
/**
 * Identifier for the cancel button in bottom bar view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierBottomBarViewCancelButton;
/**
 * Identifier for the levels button in bottom bar view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierBottomBarViewLevelsButton;
/**
 * Identifier for the close button in level selector view
 */
FOUNDATION_EXPORT NSString *const llAccessibilityIdentifierLevelSelectorViewCloseButton;



NS_ASSUME_NONNULL_END
