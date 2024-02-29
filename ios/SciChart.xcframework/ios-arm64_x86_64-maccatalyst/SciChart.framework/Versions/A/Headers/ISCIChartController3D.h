//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartController3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartController.h"

/**
 * The protocol to a subset of methods on the `SCIChartSurface3D`.
 */
@protocol ISCIChartController3D <ISCIChartController>

/**
 * Zooms the chart to the extents of the data in the `Z-Direction`, accounting for the current data in view in the `X-Y direction`.
 */
- (void)zoomExtentsZ;

/**
 * Zooms the chart to the extents of the data in the `Z-Direction`, accounting for the current data in view in the `X-Y direction`.
 * @param duration The duration of animation when zooming to extents
 */
- (void)animateZoomExtentsZWithDuration:(NSTimeInterval)duration;

@end
