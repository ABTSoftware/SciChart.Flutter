//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIZoomExtentsModifier.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIExecuteOn.h"

/**
 * Provides zoom to extents, or zoom to specific X and Y VisibleRange on touch gesture.
 */
@interface SCIZoomExtentsModifier : SCIGestureModifierBase

/**
 * Definec when the `SCIZoomExtentsModifier` should be executed.
 * @note e.g. `SCIExecuteOn.SCIExecuteOn_DoubleTap` will cause a zoom to extents on double tap on the parent `SCIChartSurface` instance.
 */
@property (nonatomic) SCIExecuteOn executeOn;

/**
 * Defines the `SCIDirection2D` mode of the `SCIZoomExtentsModifier`.
 */
@property (nonatomic) SCIDirection2D direction;

/**
 * Defines whether zoom operations should be animated.
 */
@property (nonatomic) BOOL isAnimated;

@end
