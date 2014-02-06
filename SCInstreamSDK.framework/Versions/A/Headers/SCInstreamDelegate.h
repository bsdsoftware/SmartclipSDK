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

@class SCInstreamController;

/**
 * The delegate protocol for the SCInstreamController.
 *
 *      @ingroup SCInstreamController
 */

__attribute__((visibility("default")))
@protocol SCInstreamDelegate <NSObject>

/** @name [SCInstreamDelegate] Data-Source */

@required

/**
 * this method is invoked after a resize was invoked
 * to request the new display dimensions the ad should use
 *
 * @return A rectangle with the new display dimensions and position.
 */

- (CGRect)frameForInstreamController:(SCInstreamController *)controller;

/** @cond __unavailable */

- (BOOL)pauseStateForInstreamController:(SCInstreamController *)controller __unavailable;

/** @endcond */

@optional

- (CGRect)frameForAdSize:(CGSize)size instreamController:(SCInstreamController *)controller;

/**
 *
 */
- (UIView *)clickThruViewForInstreamController:(SCInstreamController *)controller __deprecated;

/**
 * when @link SCInstreamController::skip skip@endlink or @link SCInstreamController::skipAfter: skipAfter:@endlink
 * is used, this callback will be asked if the whole block for the @link SCConstants::SCSlotType slot@endlink
 * should be skipped.
 */
- (BOOL)shouldSkipAllAdsForSlot:(SCSlotType)slot instreamController:(SCInstreamController *)controller;

/** @name [SCInstreamDelegate] Notifications */

/**
 * if @link SCInstreamConfig::adAutostart adAutostart@endlink is disabled
 * this callback will be invoked notifying the ad is preparedToPlay and can be started
 * by calling @link SCInstreamController::play play@endlink
 *
 * @note this callback will not be called if there is no mediaFile found or any type of error
 * happened that prevents the ad from playing
 */
- (void)instreamControllerPreparedToPlay:(SCInstreamController *)controller;

/**
 * dispatched before the ad will actually start playing.
 *
 * @note this will only fire if a valid ad is found, however the ad can still fail to play if the media file is damaged.
 */
- (void)instreamController:(SCInstreamController *)controller willPlayAdInSlot:(SCSlotType)slot;

- (void)instreamController:(SCInstreamController *)controller didSkipAdInSlot:(SCSlotType)slot;

@required

/**
 * The @link SCInstreamController::beforeContent beforeContent@endlink action is done.
 * The intended starting routine should be resumed.
 *
 * @note this method will alway be invoked even if the ad did not play for whatever reason.
 */
- (void)instreamControllerProceedStart:(SCInstreamController *)controller;

/**
 * The @link SCInstreamController::afterContent afterContent@endlink action is done.
 * if there is anything left to do in the finish routine this is where it can be called.
 *
 * @note this method will alway be invoked even if the ad did not play for whatever reason.
 */
- (void)instreamControllerProceedHandleFinished:(SCInstreamController *)controller;

/** @name [SCInstreamDelegate] State Changes */

/**
 * SCInstreamController is playing something that needs the content video to be paused
 */
- (void)instreamControllerShouldPause:(SCInstreamController *)controller;

/**
 * The SCInstreamController finished, the content can be resumed.
 */
- (void)instreamControllerShouldResume:(SCInstreamController *)controller;

@optional

/**
 * A Non Linear ad has started and might obstruct the controls, so they should be hidden
 *
 * @note this is a suggestion, if you are using controls ouside the display they don't
 * need to be hidden
 */
- (void)instreamControllerShouldHideControls:(SCInstreamController *)controller;

/**
 * The Non Linear ad did finish or hide, the controls can be displayed again.
 */
- (void)instreamControllerShouldShowControls:(SCInstreamController *)controller;

/**
 * should the SCInstreamController handle opening clickThru urls
 * return NO if you want to handle it yourself
 * when opening the url you need to call SCVAST2PostClickTrackingTrackEventNotification(self);
 *
 * default is the SCInstreamController handles the clickThru
 */
- (BOOL)instreamControllerShouldOpenClickThruURL:(NSURL *)url;

/**
 *
 */
- (void)instreamController:(SCInstreamController *)controller
   didUpdateAdPlaybackTime:(NSTimeInterval)playbackTime
				adDuration:(NSTimeInterval)duration;

@end
