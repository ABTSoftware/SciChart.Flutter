//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFont.h is part of SCICHART®, High Performance Scientific Charts
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
    #import <AppKit/NSFont.h>
    #import <AppKit/NSAttributedString.h>
    #import <AppKit/NSStringDrawing.h>
    #import "NSFont+UIFont.h"
#elif TARGET_OS_IOS
    #import <UIKit/UIFont.h>
    #import <UIKit/NSAttributedString.h>
    #import <UIKit/NSStringDrawing.h>
#endif

// -------------------- SCIFont ----------------------
#if TARGET_OS_OSX
    #define SCIFont NSFont
#elif TARGET_OS_IOS
    #define SCIFont UIFont
#endif
