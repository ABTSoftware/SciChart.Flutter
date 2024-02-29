//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIEdgeInsets.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import <TargetConditionals.h>

// -------------------- Imports ----------------------
#if TARGET_OS_OSX
    #import <Foundation/NSGeometry.h>
#elif TARGET_OS_IOS
    #import <UIKit/UIGeometry.h>
#endif

// -------------------- Constants --------------------
#if TARGET_OS_OSX
    #define SCIEdgeInsets NSEdgeInsets
    #define SCIEdgeInsetsEqual NSEdgeInsetsEqual
    #define SCIEdgeInsetsZero NSEdgeInsetsZero
#elif TARGET_OS_IOS
    #define SCIEdgeInsets UIEdgeInsets
    #define SCIEdgeInsetsEqual UIEdgeInsetsEqualToEdgeInsets
    #define SCIEdgeInsetsZero UIEdgeInsetsZero
#endif

/// :nodoc:
static inline SCIEdgeInsets SCIScaleEdgeInsets(SCIEdgeInsets insets, CGFloat scale) {
    SCIEdgeInsets result = {insets.top * scale, insets.left * scale, insets.bottom * scale, insets.right * scale};
    return result;
}

/// :nodoc:
static inline CGRect SCIEdgeInsetsInsetRect(CGRect rect, SCIEdgeInsets insets) {
    rect.origin.x    += insets.left;
    rect.origin.y    += insets.top;
    rect.size.width  -= (insets.left + insets.right);
    rect.size.height -= (insets.top  + insets.bottom);
    return rect;
}
