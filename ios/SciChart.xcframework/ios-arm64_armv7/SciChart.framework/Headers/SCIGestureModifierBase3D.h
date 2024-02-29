//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGestureModifierBase3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartModifier3DBase.h"
#import "ISCIReceiveGestureEvents.h"
#import "SCIGestureRecognizer.h"
#import "SCIButtonMask.h"

/**
 * Defines the base class to a Chart Modifier 3D which detects standard gestures detected by the Gesture Recognizers.
 * @note If you want to receive actions from the `SCIGestureModifierBase.gestureRecognizer` in derived classes,
 * either implement `-[ISCIReceiveGestureEvents onEvent:]`, or one of the following methods separatelly:
 * - `-[SCIGestureModifierBase onGestureBeganWithArgs:]`.
 * - `-[SCIGestureModifierBase onGestureChangedWithArgs:]`.
 * - `-[SCIGestureModifierBase onGestureEndedWithArgs:]`.
 * - `-[SCIGestureModifierBase onGestureCancelledWithArgs:]`.

 * @see `SCIZoomExtentsModifier3D`.
 * @see `SCIOrbitModifier3D`.
 * @see `SCIPinchZoomModifier3D`.
 * @see `SCIFreeLookModifier3D`.
 * @see `SCIVertexSelectionModifier3D`.
 */
@interface SCIGestureModifierBase3D : SCIChartModifier3DBase<SCIGestureRecognizerDelegate, ISCIReceiveGestureEvents>

/**
 * Defines current gesture recognizer which is used to detect gestures.
 */
@property (nonatomic, readonly, nullable) SCIGestureRecognizer *gestureRecognizer;

/**
 * Defines a Button Mask which will be used to detect gestures.
 */
@property (nonatomic) SCIButtonMask buttonMask;

@end
