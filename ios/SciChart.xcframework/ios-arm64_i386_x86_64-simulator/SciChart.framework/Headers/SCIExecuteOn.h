//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIExecuteOn.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines constants for when a `SCIGestureModifierBase` operation occurs.
 */
typedef NS_ENUM(NSUInteger, SCIExecuteOn) {
#if TARGET_OS_OSX
    /// Executes on Mouse Left Button single click.
    SCIExecuteOn_MouseSingleClick,
    
    /// Executes on Mouse Left Button double click.
    SCIExecuteOn_MouseDoubleClick,
    
    /// Executes when held down a mouse button for a particular amount of time.
    SCIExecuteOn_LongPress,
#elif TARGET_OS_IOS
    /// Executes on Single Tap.
    SCIExecuteOn_SingleTap,
    
    /// Executes on Double Tap.
    SCIExecuteOn_DoubleTap,
    
    /// Executes on Long Press.
    SCIExecuteOn_LongPress,
    
    /// Executes on Fling gesture.
    SCIExecuteOn_Fling
#endif
};
