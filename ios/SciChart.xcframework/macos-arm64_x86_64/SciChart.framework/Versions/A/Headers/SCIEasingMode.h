//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIEasingMode.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/**
 * Defines the modes in which classes deriving from `SCIEasingFunctionBase` will perform their easing.
 */
typedef NS_ENUM(NSUInteger, SCIEasingMode) {
    /**
     * The easing is performed at the start of the animation.
     */
    SCIEasingMode_EaseIn,
    
    /**
     * The easing is performed at the end of the animation.
     */
    SCIEasingMode_EaseOut,
    
    /**
     * The easing is performed  both at the start and the end of the animation.
     */
    SCIEasingMode_EaseInOut,
};
