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

#import <SCInstreamSDK/SCInstreamDelegate.h>
#import <SCInstreamSDK/SCInstreamTracking.h>

/**
 * @ingroup SCInstreamSDK
 * @defgroup SCInstreamController InstreamController
 * @{
 *
 * @}
 */

@class SCInstreamConfig;

/**
 * The SCInstreamController handles the ad playback and notifies you after it finishes
 * playing.
 * The configuration of the ad calls is done via the @link SCInstreamController::config config@endlink property
 *
 * @image html sequencing.png "Basic Sequencing."
 *
 * <h2>Example</h2>
 *
 * first the SCInstreamController needs to be instantiated and the controller needs to respond
 * to the SCInstreamDelegate protocoll. The example is showing this by using a Objective-C class extension.
 *
 * @code
 * 	@interface Controller () <SCInstreamDelegate>
 * 	@property (nonatomic, retain) SCInstreamController *instream;
 *  @end
 * @endcode
 *
 * and at a appropriate place, for example viewDidLoad, instaniate the SCInstreamController, with
 * SCInstreamController::initInView:withDelegate: providing a view, where the ad will place itself above,
 * and the class that implements the SCInstreamDelegate protocoll.
 *
 * @code
 * 	self.instream = [[[SCInstreamController alloc] initInView:self.videoView withDelegate:self] autorelease];
 * @endcode
 *
 * To conform the SCInstreamDelegate protocol the following five required methods need to be implemented
 * 
 * @code
 * - (CGRect)frameForInstreamController:(SCInstreamController *)controller;
 * - (void)instreamControllerProceedStart:(SCInstreamController *)controller;
 * - (void)instreamControllerProceedHandleFinished:(SCInstreamController *)controller;
 * - (void)instreamControllerShouldPause:(SCInstreamController *)controller;
 * - (void)instreamControllerShouldResume:(SCInstreamController *)controller;
 * @endcode
 *
 * the first method: SCInstreamDelegate::frameForInstreamController: is called to retrieve the position and size 
 * the ad container has to use.
 *
 *      @ingroup SCInstreamController
 */

__attribute__((visibility("default")))
@interface SCInstreamController : NSObject

/**
 * Initializes a newly allocated InstreamController with a view, where the ad will be
 * displayed in, and the delegate for notifications and/or questions
 *
 * @param view the View where the Ad can place itself into
 * @param delegate the object that conforms to the SCInstreamDelegate protocol
 */
- (id)initInView:(UIView *)view withDelegate:(id<SCInstreamDelegate>)delegate;

/**
 * This should be called before you load and start your content.
 * Calling the function, will automatically start a preroll if defined in SCInstreamConfig.
 */
- (void)beforeContent;

/**
 * This should be called after the content has finished playing,
 * this will automatically start the postroll if defined in SCInstreamConfig.
 */
- (void)afterContent;

/**
 * initiate a resize and reposition of all components that require change in dimension and/or origin
 * this will invoke the @link SCInstreamDelegate::frameForInstreamController: frameForInstreamController:@endlink
 * delegate method
 */
- (void)resize;
 
/**
 * start playing the ad if @link SCInstreamConfig::adAutostart adAutostart@endlink was disabled
 *
 * if the ad was @link SCInstreamController::pause paused@endlink the ad will resume
 *
 * @note this method will do nothing if no valid ad call was loaded
 */
- (void)play;

/**
 * pauses the ad, to resume just call @link SCInstreamController::play play@endlink
 */
- (void)pause;

/**
 * stops the ad and removes everything so the ad is not resumable or restartable
 * to start again call @link SCInstreamController:beforeContent beforeContent@endlink
 */
- (void)stop;

/**
 * skip and close the currently playing ad
 */
- (void)skip;

/**
 * skip and close the currently playing ad after the specified delay
 * @param delay the delay after which the ad will be closed
 */
- (void)skipAfter:(NSTimeInterval)delay;

/** displays a button to skip the ad at the top left corner of the ad
 *
 * @note: non-linear ads will have a close button by default 
 */
- (void)showSkipButton;

/** displays a button to skip the ad after the specified delay, at the top left corner of the ad
 *
 * @note: non-linear ads will have a close button by default
 */
- (void)showSkipButtonAfter:(NSTimeInterval)delay;

/**
 * playback and duration updates for the content video, based on those information the
 * percentage played will be calculated and the ad that has been added
 * with SCInstreamConfig::insertAdURL:forAdSlot:atPosition: will be fired
 */
- (void)updateContentVideoPlaybackTime:(NSTimeInterval)playbackTime withContentDuration:(NSTimeInterval)duration;

/**
 * the config property where the ad calls can be defined
 *
 * @see SCInstreamConfig::insertAdURL:forAdType:
 */
@property (nonatomic, retain, readonly) SCInstreamConfig *config;

@property (nonatomic, retain, readonly) UIView *adView;

/**
 * To listen for VAST tracking events, set the object that conforms to the SCInstreamTracking protocol.
 */
@property (nonatomic, assign) id<SCInstreamTracking> trackingListener;

@property (nonatomic, assign) id<SCInstreamDelegate> delegate; // must be specified via initializer method.

@end
