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

#import <SCInstreamSDK/SCDisplayDelegate.h>

@class OISDisplayConfig;

__attribute__((visibility("default")))
@interface OISDisplayController : NSObject

/**
 * Initializes a newly allocated DisplayController with a view, where the ad will be
 * displayed in
 *
 * @param view the View where the Ad can place itself into
 */
- (id)initInView:(UIView *)view withDelegate:(id<SCDisplayDelegate>)delegate;

/**
 */
- (void)startAd __SC_DEPRECATED("replaced with requestAd");

/**
 */
- (void)requestAd;
- (void)stopRequest;

/**
 * initiate a resize and reposition of all components that require change in dimension and/or origin
 */
- (void)resize;

/**
 *
 */
- (void)setTimeoutInterval:(NSTimeInterval)seconds;

/**
 * the config property where the ad calls can be defined
 *
 * @see SCDisplayConfig::insertDisplayAdURL:
 */
@property (nonatomic, strong, readonly) OISDisplayConfig *config;

@property (nonatomic, strong, readonly) UIView *adView;

@property (nonatomic, weak) id<SCDisplayDelegate> delegate; // must be specified via initializer method.

@end

@compatibility_alias SCDisplayController OISDisplayController;
