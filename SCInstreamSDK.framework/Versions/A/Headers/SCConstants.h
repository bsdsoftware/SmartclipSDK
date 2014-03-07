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

/**
 *
 * @ingroup SCInstreamSDK
 * @defgroup SCConstants Constants
 * @{
 */

/**
 * @enum SCSlotType
 * the available Slot types
 */
typedef enum SCSlotType {
	SCSlotTypeUnknown,		/**< unknown slot type */
	SCSlotTypeLinear,		/**< linear slot type, pauses the content video before playing */
	SCSlotTypeNonLinear		/**< non linear slot type, runs in parallel to the content video */
} SCSlotType;

/**
 * @enum SCAdType
 * the available AdTypes.
 */
typedef enum SCAdType {
	SCInstreamTypePreroll,					/**< fixed roll ads that play before the video (linear ad) */
	SCInstreamTypeMidroll,					/**< fixed roll ads that play halfway through the video (linear ad) */
	SCInstreamTypeOverlay,					/**< tickers that overlay the video content (non‐linear ad) */
	SCInstreamTypePostroll					/**< fixed roll ads that play after the video ends (linear ad) */
} SCAdType;

extern BOOL SCFixUserAgent __deprecated;
extern CGFloat SCAdRequestTimeoutInterval;

/**
 * @enum SCUDIDSystemOption
 * the UDID system options.
 */
typedef enum SCUDIDSystemOption {
	SCUDIDSystemDefault,		/**< usses the udid provided from the system. for iOS5 and below: uniqueIdentifier and iOS6 and up identifierForVendor */
	SCUDIDSystemCustom			/**< use a custom defined UDID @see SCConstants::SCCustomUDID most common are openUDID or ODIN */
} SCUDIDSystemOption;

extern SCUDIDSystemOption SCUDIDSystem;

/**
 * the custom UDID that will be used if @link SCConstants::SCUDIDSystemOption@endlink is set to SCUDIDSystemCustom
 */
extern NSString *SCCustomUDID;

typedef NS_ENUM(NSInteger, SCNonLinearAlignMask) {
	SCNonLinearAlignMaskTop    = 1 << 0,
	SCNonLinearAlignMaskBottom = 1 << 1
};

extern void SCVAST2PostClickTrackingTrackEventNotification(id sender);

extern NSString * const SCClickThruWindowDidAppearNotification;
extern NSString * const SCClickThruWindowDidDisappearNotification;

extern NSString * SCInstreamSDKVersion();
extern void SCInstreamSDKPrintVersion();

/**
 * @}
 */
