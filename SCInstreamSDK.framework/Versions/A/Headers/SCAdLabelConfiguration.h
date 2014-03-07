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
@property (nonatomic, assign) NSTextAlignment textAlignment;

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
