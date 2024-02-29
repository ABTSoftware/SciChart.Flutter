//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPinchZoomModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase.h"
#import "SCIDirection2D.h"

/**
 * The `SCIPinchZoomModifier` provides zooming of the `SCIChartSurface` with the pinch gesture.
 */
@interface SCIPinchZoomModifier : SCIGestureModifierBase

/**
 * Defines `UIPinchGestureRecognizer` which is used to detect pinch gestures.
 */
@property (weak, nonatomic, readonly, nullable) SCIPinchGestureRecognizer *gestureRecognizer;

/**
 * Defines the scale factor to scale (or shrink) both axes on pinch gesture.
 */
@property (nonatomic) CGFloat scaleFactor;

/**
 * Defines the `SCIDirection2D` which restricts zoom interactivity to.
 */
@property (nonatomic) SCIDirection2D direction;

#if TARGET_OS_IOS
/**
 * Defines the value which indicates whether uniform zoom should be used by this modifier.
 * @note When uniform zoom is set to `YES` - then modifier applies same scale factor for both x and y direction,
 * otherwise - scale factor calculated separately for x and y direction based on information from touch events.
 */
@property (nonatomic) BOOL isUniformZoom;
#endif

@end
