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
 *
 * @ingroup SCInstreamSDK
 * @defgroup Preprocessor-Macros Preprocessor Macros
 * @{
 */

#import <Availability.h>

#define __SCINSTREAMSDK_1_0 10000  /* released 01.08.2012 */
#define __SCINSTREAMSDK_1_1 10100  /* released 31.09.2012 */
#define __SCINSTREAMSDK_1_2 10200  /* released 31.10.2012 */
#define __SCINSTREAMSDK_1_3 10300  /* released 21.12.2012 */
#define __SCINSTREAMSDK_1_4 10400  /* skipped */
#define __SCINSTREAMSDK_1_5 10500  /* released xx.02.2013 */
#define __SCINSTREAMSDK_NA  99999  /* not available */

/**
 * Mark a method or property as deprecated to the compiler.
 *
 * Any use of a deprecated method or property will flag a warning when compiling.
 *
 * Borrowed from Apple's AvailabiltyInternal.h header.
 */
#define __SC_DEPRECATED_METHOD __attribute__((deprecated))
#define __SC_DEPRECATED(_message) __attribute__((deprecated(#_message)))

/**
 * Mark a method or property available with a specific version
 */
#define __SC_AVAILABLE_STARTING(_version) __SC_AVAILABILITY_INTERNAL##_version

#define __SC_AVAILABILITY_INTERNAL__SCINSTREAMSDK_1_0 __AVAILABILITY_INTERNAL_UNAVAILABLE
#define __SC_AVAILABILITY_INTERNAL__SCINSTREAMSDK_1_1 __AVAILABILITY_INTERNAL_REGULAR

// Newer runtimes defines this, here's a fallback for the iOS5 SDK.
#ifndef NS_ENUM
#define NS_ENUM(_type, _name) _type _name; enum
#define NS_OPTIONS(_type, _name) _type _name; enum
#endif

/**
 * @}
 */
