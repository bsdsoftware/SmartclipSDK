//
//  SCAdLabelConfiguration.h
//  SCInstreamSDK
//
//  Created by Andreas Schubert on 29.11.12.
//  Copyright (c) 2012 BurgEins GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

__attribute__((visibility("default")))
@interface SCAdLabelConfiguration : NSObject


/** @publicsection */

/**
 * @enum SCAdCountdownPosition
 * allowed AdCountdown positions
 */
typedef enum SCAdLabelPosition {
	SCAdLabelPositionBottom,	/**< positioned bottom */
	SCAdLabelPositionTop		/**< positioned top */
} SCAdLabelPosition;

/**
 * the background color of the AdLabel bar
 *
 * default: blackColor
 */
@property (nonatomic, copy) UIColor *backgroundColor;

/**
 * the color used for the foreground elements
 *
 * default: whiteColor
 */
@property (nonatomic, copy) UIColor *foregroundColor;

/**
 * the font and sized used for the labelText
 *
 * default: systemFontOfSize:12
 */
@property (nonatomic, retain) UIFont *font;

/**
 * the text displayed on the AdLabel bar
 *
 * default: Ads by smartclip.
 */
@property (nonatomic, copy) NSString *labelText;

/**
 * the alpha value used for the AdLabel Bar
 *
 * @note: the alpha value is only applied to the background and not the text
 *
 * default: 0.8
 */
@property (nonatomic, assign) CGFloat alpha;

/**
 * text Alignment for the labelText
 *
 * default: UITextAlignmentCenter
 */
@property (nonatomic, assign) UITextAlignment textAlignment;

/**
 * position of the AdLabel @see SCAdLabelConfiguration::SCAdLabelPosition
 *
 * default: @link SCAdLabelConfiguration::SCAdLabelPosition SCAdLabelPositionTop@endlink
 */
@property (nonatomic, assign) SCAdLabelPosition position;

/**
 * enable the AdLabel, it will show up with every linear ad.
 *
 * default: NO
 */
@property (nonatomic, assign) BOOL enabled;

@end
