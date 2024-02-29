//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIButtonMask.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines mouse button masks which are used with `GestureRecognizer`.
 */
typedef NS_OPTIONS(NSUInteger, SCIButtonMask) {
    /// Defines state when no buttons are pressed.
    SCIButtonMask_None = 0 << 0,
    
    /// Defines Left Button.
    SCIButtonMask_Left = 1 << 0,
    
    /// Defines Right Button.
    SCIButtonMask_Right = 1 << 1,
    
    /// Defines Other Button.
    SCIButtonMask_Other = 1 << 2
};
 
