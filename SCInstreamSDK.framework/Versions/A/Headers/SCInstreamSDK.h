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

/**
 * @defgroup SCInstreamSDK The Instream SDK for iOS
 * @{
 * 
 * some initial description
 *
 * <h2>Minimum Requirements</h2>
 *
 * Required frameworks:
 *
 * - Foundation.framework
 * - UIKit.framework
 * - MediaPlayer.framework
 * - CoreTelephony.framework
 * - SystemConfiguration.framework
 *
 * Minimum Operating System: <b>iOS 4.0</b>
 *
 * <h2>Add the SCInstreamSDK to your project</h2>
 *
 * this section will show you how to add the @c SCInstreamSDK.framework to your project.
 * No previous knowledge of the SDK itself is required. Basic Xcode knowledge is assumed.
 *
 * If you have any trouble along the way please feel free to send us an email at adtech@smartclip.de
 *
 * <h2>Prepare your Xcode project</h2>
 *
 * Create a new iOS Xcode project or open an existing project.
 * Now simply drag the @c SCInstreamSDK.framework into your project navigator on the left hand side,
 * possibly onto the Framework group, but thats entirely up to you.
 *
 * @image html drag.png "Drag the SCInstreamSDK.framework onto the Framework Group"
 *
 * make sure that the Add to targets checkbox is checked for the correct target you intend to use the
 * framework with.
 * you can check <b>Copy items into destination group's folder</b> if needed.
 *
 * @image html thirdparty.png
 *
 * just ensure that its being added to the necessary targets.
 *
 * @image html link.png
 *
 * as we're using libxml internally to parse the VAST2 Tags you'll have to add
 * the following path to the targets Header Search Paths
 *
 *   @b /usr/include/libxml2
 *
 * for Other Linker Flags add
 *
 *   @b -lxml2
 *
 * @image html libxml.png
 *
 * As the last step import the SDK's header
 *
 * @code
 * #import <SCInstreamSDK/SCInstreamSDK.h>
 * @endcode
 *
 * and continue following the SCInstreamController documentation.
 *
 * <h2></h2>
 *
 * Smartclip uses in their own VAST2 the following bandwidth qualities per device type:
 * - 300 kbps for mobile devices/smartphones
 * - 670 kbps for tablets (e. g. iPad & Android tablets)
 * - 1100 kbps for Connected TV
 *
 * @note All test-ad-calls mentioned in this document return *.mp4 files with 670 kbps bandwidth.
 *
 * @}
 */

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_4_3
#error SCInstreamSDK supports iOS 4.3 upwards.
#endif

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef _SCInstreamSDK_
#define _SCInstreamSDK_

#import <SCInstreamSDK/SCPreprocessorMacros.h>
#import <SCInstreamSDK/SCConstants.h>

#import <SCInstreamSDK/SCVAST2Events.h>

#import <SCInstreamSDK/SCInstreamConfig.h>
#import <SCInstreamSDK/SCAdCountdownConfiguration.h>
#import <SCInstreamSDK/SCAdLabelConfiguration.h>
#import <SCInstreamSDK/OISDisplayConfig.h>

#import <SCInstreamSDK/SCInstreamDelegate.h>
#import <SCInstreamSDK/SCDisplayDelegate.h>
#import <SCInstreamSDK/SCInstreamTracking.h>
#import <SCInstreamSDK/SCInstreamController.h>
#import <SCInstreamSDK/OISDisplayController.h>

#endif /* _SCInstreamSDK_ */
