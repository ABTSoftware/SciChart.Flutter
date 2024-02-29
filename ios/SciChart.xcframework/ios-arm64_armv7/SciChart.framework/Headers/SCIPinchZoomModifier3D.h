//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPinchZoomModifier3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase3D.h"
#import "SCIGestureRecognizer.h"

/**
 * The `SCIPinchZoomModifier3D` provides zooming of the `SCIChartSurface3D` with the pinch gesture.
 */
@interface SCIPinchZoomModifier3D : SCIGestureModifierBase3D

/**
 * Defines the scale factor to scale (or shrink) on pinch gesture.
 */
@property (nonatomic) CGFloat scaleFactor;

/**
 * Defines the `UIPinchGestureRecognizer` which is used to detect gestures.
 */
@property (nonatomic, readonly, nullable) SCIPinchGestureRecognizer *gestureRecognizer;

@end
