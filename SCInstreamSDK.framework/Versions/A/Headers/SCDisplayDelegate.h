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

@class OISDisplayController;

__attribute__((visibility("default")))
@protocol SCDisplayDelegate <NSObject>

@optional

- (void)displayControllerWillShowAd:(OISDisplayController *)controller;

- (UIView *)clickThruViewForDisplayController:(OISDisplayController *)controller __deprecated;

@required

- (void)displayControllerDidLoadAd:(OISDisplayController *)controller;
- (void)displayControllerDidFailLoad:(OISDisplayController *)controller error:(NSError *)error;

@optional

- (void)displayControllerDidFailLoad:(OISDisplayController *)controller __deprecated;

@end
