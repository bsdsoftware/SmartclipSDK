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

#import "SCAdCountdownConfiguration.h"
#import "SCAdLabelConfiguration.h"

/**
 *
 * @ingroup SCInstreamSDK
 * @defgroup SCInstreamConfig Configuration
 * @{
 *
 * @}
 */

/**
 * The SCInstreamConfig where the ad call urls are managed.
 *
 *      @ingroup SCInstreamConfig
 */
__attribute__((visibility("default")))
@interface SCInstreamConfig : NSObject

/**
 * inserts an ad call url for the specified AdType
 *
 * @param adURL ad call
 * @param type the @link SCConstants::SCAdType AdType@endlink for the supplied url
 */
- (void)insertAdURL:(NSURL *)adURL forAdType:(SCAdType)type;

/**
 * inserts multiple ad call urls for the specified AdType
 *
 * @param type the @link SCConstants::SCAdType AdType@endlink for the supplied url
 * @param firstAdURL, ... a comma-seperated list of ad call urls ending with nil. 
 */
- (void)insertWithAdType:(SCAdType)type adURLs:(NSURL *)firstAdURL, ... NS_REQUIRES_NIL_TERMINATION;

/**
 * inserts the same ad call url n times specified by count
 *
 * @param adURL ad call
 * @param type the @link SCConstants::SCAdType AdType@endlink for the supplied url
 * @param count the number of times the adURL is inserted
 */
- (void)insertAdURL:(NSURL *)adURL forAdType:(SCAdType)type count:(NSUInteger)count;

/**
 * insert an ad call url for an slot that is played at the specified percentage of the content video.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param adURL ad call
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param percent percentage played of the content video
 */
- (void)insertAdURL:(NSURL *)adURL forAdSlot:(SCSlotType)slot atPercent:(NSUInteger)percent;

/**
 * insert an ad call url for an slot that is played at the specified percentage of the content video.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param percent percentage played of the content video
 * @param firstAdURL, ... a comma-seperated list of ad call urls ending with nil.
 */
- (void)insertWithAdSlot:(SCSlotType)slot atPercent:(NSUInteger)percent adURLs:(NSURL *)firstAdURL, ... NS_REQUIRES_NIL_TERMINATION;

/**
 * insert an ad call url for an slot that is played at the specified percentage of the content video.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param adURL ad call
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param percent percentage played of the content video
 * @param count the number of times the adURL is inserted
 */
- (void)insertAdURL:(NSURL *)adURL forAdSlot:(SCSlotType)slot atPercent:(NSUInteger)percent count:(NSUInteger)count;

/**
 * insert an ad call url for an slot that is played at the specified position of the content video.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param adURL ad call
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param position the position on the content video
 */
- (void)insertAdURL:(NSURL *)adURL forAdSlot:(SCSlotType)slot atPosition:(NSTimeInterval)position;

/**
 * insert an ad call url for an slot that is played at the specified position of the content video.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param position the position on the content video
 * @param firstAdURL, ... a comma-seperated list of ad call urls ending with nil.
 */
- (void)insertWithAdSlot:(SCSlotType)slot atPosition:(NSTimeInterval)position adURLs:(NSURL *)firstAdURL, ... NS_REQUIRES_NIL_TERMINATION;

/**
 * insert an ad call url for an slot that is played at the specified position of the content video.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param adURL ad call
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param position the position on the content video
 * @param count the number of times the adURL is inserted
 */
- (void)insertAdURL:(NSURL *)adURL forAdSlot:(SCSlotType)slot atPosition:(NSTimeInterval)position count:(NSUInteger)count;

/**
 * insert an ad call url for an slot that is played at the specific interval.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param adURL ad call
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param interval the interval on which the ad call is run
 */
- (void)insertAdURL:(NSURL *)adURL forAdSlot:(SCSlotType)slot withInterval:(NSTimeInterval)interval;

/**
 * insert an ad call url for an slot that is played at the specific interval.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param adURL ad call
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param interval the interval on which the ad call is run
 * @param count the number of times the adURL is inserted
 */
- (void)insertAdURL:(NSURL *)adURL forAdSlot:(SCSlotType)slot withInterval:(NSTimeInterval)interval count:(NSUInteger)count;

/**
 * insert an ad call url for an slot that is played at the specific interval.
 * requires the duration as well as the current play time to be passed to the SCInstreamController
 * @see SCInstreamControlller::updateContentVideoPlaybackTime:withContentDuration:
 *
 * @param slot the @link SCConstants::SCSlotType SlotType@endlink for the supplied url
 * @param interval the interval on which the ad call is run
 * @param firstAdURL, ... a comma-seperated list of ad call urls ending with nil.
 */
- (void)insertWithAdSlot:(SCSlotType)slot withInterval:(NSTimeInterval)interval adURLs:(NSURL *)firstAdURL, ... NS_REQUIRES_NIL_TERMINATION;

/**
 * the number of ads to successfully play per @link SCConstants::SCSlotType slot@endlink
 *
 * default: the amount of ad calls added
 */
- (void)setNumberOfAds:(NSInteger)number perSlot:(SCSlotType)slot;

/**
 * toggle between opening clickThru urls in the in-app UIWebView or externally in Safari
 *
 * you are responsible to resume the ad when returning to the app when turning this on
 * as linear ads will be paused on clickThru
 *
 * default: NO
 */
@property (nonatomic, assign) BOOL openClickThruExternally;

@property (nonatomic, assign) BOOL clickThruAlertEnabled;
@property (nonatomic, copy) NSString *clickThruAlertTitle;
@property (nonatomic, copy) NSString *clickThruAlertMessage;
@property (nonatomic, copy) NSString *clickThruAlertCancelButtonTitle;
@property (nonatomic, copy) NSString *clickThruAlertOpenButtonTitle;

/**
 * enable or disable adAutostart.
 *
 * if disabled will not automatically start the ad after loading and
 * parsing the ad tag but rather will call 
 * @link SCInstreamDelegate::instreamControllerPreparedToPlay: instreamControllerPreparedToPlay:@endlink
 *
 * default: YES
 */
@property (nonatomic, assign) BOOL adAutostart;

/**
 * display a loading view for the @link SCInstreamController:beforeContent beforeContent@endlink method
 * 
 * @note will have no effect if adAutostart is set to NO
 *
 * default: NO
 */
@property (nonatomic, assign) BOOL showLoadingView;

/**
 * sets a delay in seconds that specifies the amount of delay before the SCSlotTypeNonLinear is loaded
 *
 * default: 5
 */
@property (nonatomic, assign) NSTimeInterval nonLinearDelay;

/**
 *
 * default: SCNonLinearAlignMaskBottom
 */
@property (nonatomic, assign) SCNonLinearAlignMask verticalOverlayPosition;

/**
 * minimum length the content has to have for linear ads to play besides
 * @link SCConstants::SCInstreamTypePreroll preroll@endlink and @link SCConstants::SCAdType SCInstreamTypePostroll@endlink
 *
 * default: 100
 */
@property (nonatomic, assign) NSTimeInterval minContentLength;

/**
 * the background color behind a linear ad
 *
 * default: blackColor
 */
@property (nonatomic, retain) UIColor *adBackgroundColor;

/**
 * AdCountdown configuration, @see SCAdCountdownConfiguration for more information about its
 * configuration properties.
 */
@property (nonatomic, retain, readonly) SCAdCountdownConfiguration *adCountdownConfiguration;

/**
 * AdCountdown configuration, @see SCAdCountdownConfiguration for more information about its
 * configuration properties.
 */
@property (nonatomic, retain, readonly) SCAdLabelConfiguration *adLabelConfiguration;

@property (nonatomic, assign) UIViewController *presentingController;

@end
