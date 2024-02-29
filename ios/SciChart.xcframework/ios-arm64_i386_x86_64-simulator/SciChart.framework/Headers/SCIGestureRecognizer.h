//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGestureRecognizer.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIEventModifierFlags.h"

// -------------------- Imports ----------------------
#if TARGET_OS_OSX
    #import "NSGestureRecognizer+UIGestureRecognizer.h"
    #import <AppKit/NSPanGestureRecognizer.h>
    #import <AppKit/NSClickGestureRecognizer.h>
    #import "NSMagnificationGestureRecognizer+UIPinchGestureRecognizer.h"
    #import <AppKit/NSPressGestureRecognizer.h>
    #import <AppKit/NSTouch.h>
#elif TARGET_OS_IOS
    #import <UIKit/UIPanGestureRecognizer.h>
    #import <UIKit/UITapGestureRecognizer.h>
    #import <UIKit/UILongPressGestureRecognizer.h>
    #import <UIKit/UIPinchGestureRecognizer.h>
    #import <UIKit/UISwipeGestureRecognizer.h>
    #import <UIKit/UITouch.h>
#endif

// -------------------- SCIGestureRecognizer ----------------------
#if TARGET_OS_OSX
    #define SCIGestureRecognizerDelegate NSGestureRecognizerDelegate
    #define SCIGestureRecognizer NSGestureRecognizer
    #define SCITapGestureRecognizer NSClickGestureRecognizer
    #define SCIPanGestureRecognizer NSPanGestureRecognizer
    #define SCIPinchGestureRecognizer NSMagnificationGestureRecognizer
    #define SCITouch NSTouch
#elif TARGET_OS_IOS
    #define SCIGestureRecognizerDelegate UIGestureRecognizerDelegate
    #define SCIGestureRecognizer UIGestureRecognizer
    #define SCITapGestureRecognizer UITapGestureRecognizer
    #define SCIPanGestureRecognizer UIPanGestureRecognizer
    #define SCIPinchGestureRecognizer UIPinchGestureRecognizer
    #define SCITouch UITouch
#endif

// -------------------- SCIGestureRecognizerState ----------------------
#if TARGET_OS_OSX
    #define SCIGestureRecognizerState NSGestureRecognizerState
    #define SCIGestureRecognizerStatePossible NSGestureRecognizerStatePossible
    #define SCIGestureRecognizerStateBegan NSGestureRecognizerStateBegan
    #define SCIGestureRecognizerStateChanged NSGestureRecognizerStateChanged
    #define SCIGestureRecognizerStateEnded NSGestureRecognizerStateEnded
    #define SCIGestureRecognizerStateCancelled NSGestureRecognizerStateCancelled
    #define SCIGestureRecognizerStateFailed NSGestureRecognizerStateFailed
    #define SCIGestureRecognizerStateRecognized NSGestureRecognizerStateRecognized
#elif TARGET_OS_IOS
    #define SCIGestureRecognizerState UIGestureRecognizerState
    #define SCIGestureRecognizerStatePossible UIGestureRecognizerStatePossible
    #define SCIGestureRecognizerStateBegan UIGestureRecognizerStateBegan
    #define SCIGestureRecognizerStateChanged UIGestureRecognizerStateChanged
    #define SCIGestureRecognizerStateEnded UIGestureRecognizerStateEnded
    #define SCIGestureRecognizerStateCancelled UIGestureRecognizerStateCancelled
    #define SCIGestureRecognizerStateFailed UIGestureRecognizerStateFailed
    #define SCIGestureRecognizerStateRecognized UIGestureRecognizerStateRecognized
#endif
