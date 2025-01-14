//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartController.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIInvalidatableElement.h"
#import "ISCISuspendable.h"

/**
 * Defnies the protocol to a subset of methods on the `SCIChartSurface`.
 */
@protocol ISCIChartController <ISCIInvalidatableElement, ISCISuspendable>

/**
 * Zooms the chart to the extents of the data, plus any X or Y Grow By fraction set on the X and Y Axes.
 */
- (void)zoomExtents;

/**
 * Zooms to extents with the specified animation duration.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)animateZoomExtentsWithDuration:(NSTimeInterval)duration;

/**
 * Zooms the chart to the extents of the data in the `Y-Direction`, accounting for the current data in view in the `X-direction`.
 */
- (void)zoomExtentsY;

/**
 * Zooms the chart to the extents of the data in the `Y-Direction`, accounting for the current data in view in the `X-direction`.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)animateZoomExtentsYWithDuration:(NSTimeInterval)duration;

/**
 * Zooms the chart to the extents of the data in the `X-Direction`.
 */
- (void)zoomExtentsX;

/**
 * Zooms the chart to the extents of the data in the `X-Direction`.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)animateZoomExtentsXWithDuration:(NSTimeInterval)duration;

@end
