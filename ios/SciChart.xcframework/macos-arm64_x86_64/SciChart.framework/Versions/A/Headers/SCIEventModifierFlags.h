//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIEventModifierFlags.h is part of SCICHART®, High Performance Scientific Charts
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
    #import <AppKit/NSEvent.h>
#elif TARGET_OS_IOS
    #import <UIKit/UICommand.h>
#endif

// -------------------- SCIEventModifierFlags ----------------------
#if TARGET_OS_OSX
    #define SCIEventModifierFlags NSEventModifierFlags
    #define SCIEventModifierFlagCapsLock NSEventModifierFlagCapsLock     // = 1 << 16 - Set if Caps Lock key is pressed.
    #define SCIEventModifierFlagShift NSEventModifierFlagShift           // = 1 << 17 - Set if Shift key is pressed.
    #define SCIEventModifierFlagControl NSEventModifierFlagControl       // = 1 << 18 - Set if Control key is pressed.
    #define SCIEventModifierFlagOption NSEventModifierFlagOption         // = 1 << 19 - Set if Option or Alternate key is pressed.
    #define SCIEventModifierFlagCommand NSEventModifierFlagCommand       // = 1 << 20 - Set if Command key is pressed.
    #define SCIEventModifierFlagNumericPad NSEventModifierFlagNumericPad // = 1 << 21 - Set if any key in the numeric keypad is pressed.
#elif TARGET_OS_IOS
    #define SCIEventModifierFlags UIKeyModifierFlags
    #define SCIEventModifierFlagCapsLock UIKeyModifierAlphaShift         // = 1 << 16, - This bit indicates CapsLock
    #define SCIEventModifierFlagShift UIKeyModifierShift                 // = 1 << 17, - Set if Shift key is pressed.
    #define SCIEventModifierFlagControl UIKeyModifierControl             // = 1 << 18, - Set if Control key is pressed.
    #define SCIEventModifierFlagOption UIKeyModifierAlternate            // = 1 << 19, - Set if Option or Alternate key is pressed.
    #define SCIEventModifierFlagCommand UIKeyModifierCommand             // = 1 << 20, - Set if Command key is pressed.
    #define SCIEventModifierFlagNumericPad UIKeyModifierNumericPad       // = 1 << 21, - Set if any key in the numeric keypad is pressed.
#endif
