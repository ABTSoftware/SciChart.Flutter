//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIView.h is part of SCICHART®, High Performance Scientific Charts
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
#import <QuartzCore/CALayer.h>

// -------------------- Imports ----------------------
#if TARGET_OS_OSX
    #import <AppKit/NSView.h>
    #import <AppKit/NSLayoutConstraint.h>
    #import "NSView+UIView.h"
#elif TARGET_OS_IOS
    #import <UIKit/UIView.h>
    #import "UIView+NSView.h"
#endif

// -------------------- SCIView ----------------------
#if TARGET_OS_OSX
    #define SCIView NSView
#elif TARGET_OS_IOS
    #define SCIView UIView
#endif

// -------------------- Constants --------------------
#if TARGET_OS_OSX
    #define SCIAutoresizingFlexible NSViewWidthSizable | NSViewHeightSizable
    #define CGSizeValue sizeValue
    #define valueWithCGSize valueWithSize
    #define SCILayoutConstraintOrientationHorizontal NSLayoutConstraintOrientationHorizontal
#elif TARGET_OS_IOS
    #define SCIAutoresizingFlexible UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight
    #define CGSizeValue CGSizeValue
    #define valueWithCGSize valueWithCGSize
    #define SCILayoutConstraintOrientationHorizontal UILayoutConstraintAxisHorizontal
#endif
