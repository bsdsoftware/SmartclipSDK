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

extern NSString * const SCVASTImpressionTrackEventName;
extern NSString * const SCVASTErrorTrackEventName;

extern NSString * const SCVASTCreativeViewTrackEventName;
extern NSString * const SCVASTStartTrackEventName;
extern NSString * const SCVASTMidPointTrackEventName;
extern NSString * const SCVASTFirstQuartileTrackEventName;
extern NSString * const SCVASTThirdQuartileTrackEventName;
extern NSString * const SCVASTCompleteTrackEventName;
extern NSString * const SCVASTMuteTrackEventName;
extern NSString * const SCVASTUnMuteTrackEventName;
extern NSString * const SCVASTPauseTrackEventName;
extern NSString * const SCVASTRewindTrackEventName;
extern NSString * const SCVASTResumeTrackEventName;
extern NSString * const SCVASTFullscreenTrackEventName;
extern NSString * const SCVASTExpandTrackEventName;
extern NSString * const SCVASTCollapseTrackEventName;
extern NSString * const SCVASTCloseTrackEventName;
extern NSString * const SCVASTAcceptInvitationTrackEventName;

extern NSString * const SCVASTClickTrackingTrackEventName;

/**
 * @enum SCVAST2TrackEvents
 * VAST2 Tracking Events
 */
typedef NS_ENUM(NSInteger, SCVAST2TrackEvent) {
	SCVASTImpressionTrackEvent,
	SCVASTErrorTrackEvent,
	
	SCVASTCreativeViewTrackEvent,
	SCVASTStartTrackEvent,
	SCVASTMidPointTrackEvent,
	SCVASTFirstQuartileTrackEvent,
	SCVASTThirdQuartileTrackEvent,
	SCVASTCompleteTrackEvent,
	SCVASTMuteTrackEvent,
	SCVASTUnMuteTrackEvent,
	SCVASTPauseTrackEvent,
	SCVASTRewindTrackEvent,
	SCVASTResumeTrackEvent,
	SCVASTFullscreenTrackEvent,
	SCVASTExpandTrackEvent,
	SCVASTCollapseTrackEvent,
	SCVASTCloseTrackEvent,
	SCVASTAcceptInvitationTrackEvent,
	
	SCVASTClickTrackingTrackEvent
};

/**
 * NSValueTransformer that allows transforming the values back and forth between a string and SCVAST2TrackEvents
 *
 * @code
 *	[SCVAST2EventTransformer() transformedValue:@(event)]
 * @endcode
 */
extern NSValueTransformer * SCVAST2EventTransformer();
