//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICategoryDateAxis.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICategoryAxisBase.h"
#import "ISCICategoryDateAxis.h"

/**
 * Provides a Linear, Category Date Axis, capable of rendering Date ticks on the X-Axis of a `SCIChartSurface`.
 * @see `ISCIAxis`.
 * @see `SCIAxisBase`.
 * @see `SCINumericAxis`.
 * @see `SCILogarithmicNumericAxis`.
 * @see `SCIDateAxis`.
 * @see `SCICategoryAxisBase`.
 */
@interface SCICategoryDateAxis : SCICategoryAxisBase<ISCICategoryDateAxis>

/**
 * Gets or sets the Bar Time Frame in seconds. This is the number of seconds that each data-point represents on the `SCICategoryDateAxis` and is required for proper rendering.
 * A default value of -1 allows the `SCICategoryDateAxis` to estimate the time frame.
 * @return The Bar Time Frame in seconds.
 */
@property (nonatomic) double barTimeFrame;

@end
