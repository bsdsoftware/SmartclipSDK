//
//  smartclip Mobile Video Ad Instream SDK (iOS)
//  Copyright (c) 2009-2012, smartclip AG
//
//  This program is free software: you can redistribute it and/or modify it under the terms
//  of the GNU LesserGeneral Public License as published by the Free Software Foundation, which incorporates
//  the terms and conditions of either version 3 of the GNU General Public License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the
//  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//  See the GNU Lesser General Public License and the GNU General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License and the GNU General Public License along
//  with this program. If not, see http://www.gnu.org/licenses/gpl-3.0.html and http://www.gnu.org/licenses/lgpl-3.0.en.html
//
//  This file should be accompanied with supporting documentation and source code.
//  If you believe you are missing files or information, please contact smartclip AG (adtech@smartclip.de)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *
 * @ingroup SCInstreamConfig
 * @defgroup SCAdCountdownConfiguration AdCountdown Configuration
 * @{
 *
 * @}
 */

/**
 *
 * @image html adCountdown.png "The AdCoundown with the default settings"
 *
 *      @ingroup SCAdCountdownConfiguration
 */

__attribute__((visibility("default")))
@interface SCAdCountdownConfiguration : NSObject

/** @publicsection */

/**
 * @enum SCAdCountdownPosition
 * allowed AdCountdown positions
 */
typedef enum SCAdCountdownPosition {
	SCAdCountdownPositionBottom,	/**< positioned bottom */
	SCAdCountdownPositionTop		/**< positioned top */
} SCAdCountdownPosition;

/**
 * the background color of the AdCountdown bar
 *
 * default: blackColor
 */
@property (nonatomic, copy) UIColor *backgroundColor;

/**
 * the color used for the foreground elements
 * such as the countdown text, or if only the progressbar is used
 * the progressbar color
 *
 * default: whiteColor
 */
@property (nonatomic, copy) UIColor *foregroundColor;

/**
 * the font and sized used for the countdownText
 *
 * default: systemFontOfSize:12
 */
@property (nonatomic, retain) UIFont *font;

/**
 * the text displayed on the AdCountdown bar
 *
 * default: Your video will proceed in [time] seconds, [percent]% played.
 */
@property (nonatomic, copy) NSString *countdownText;

/**
 * the alpha value used for the AdCountdown Bar
 *
 * @note: the alpha value is only applied to the background and not the text
 *
 * default: 0.8
 */
@property (nonatomic, assign) CGFloat alpha;

/**
 * text Alignment for the countdownText
 *
 * default: UITextAlignmentCenter
 */
@property (nonatomic, assign) NSTextAlignment textAlignment;

/**
 * position of the AdCountdown @see SCAdCountdownConfiguration::SCAdCountdownPosition
 *
 * default: @link SCAdCountdownConfiguration::SCAdCountdownPosition SCAdCountdownPositionTop@endlink
 */
@property (nonatomic, assign) SCAdCountdownPosition position;

/**
 * enable the AdCountdown, it will show up with every linear ad.
 *
 * default: YES
 */
@property (nonatomic, assign) BOOL enabled;

/**
 * displays a progress bar inside the AdCountdown bar
 *
 * default: YES
 */
@property (nonatomic, assign) BOOL showProgressBar;

@end
