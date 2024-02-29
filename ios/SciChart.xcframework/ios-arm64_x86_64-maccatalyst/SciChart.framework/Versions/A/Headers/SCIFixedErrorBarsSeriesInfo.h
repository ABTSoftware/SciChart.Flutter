//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFixedErrorBarsSeriesInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXySeriesInfo.h"
#import "SCIFastFixedErrorBarsRenderableSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines Series Info class for `SCIFixedErrorBarsSeriesInfo`
 */
@interface SCIFixedErrorBarsSeriesInfo : SCIXySeriesInfo

/**
 * The parent renderable series.
 */
@property (strong, nonatomic, readonly) SCIFastFixedErrorBarsRenderableSeries *renderableSeries;

/**
 * The `High Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> highValue;

/**
 * The `Low Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> lowValue;

/**
 * Gets the formatted `highValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedHighValue;

/**
 * Gets the formatted `lowValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedLowValue;

/**
 * Creates a new instance of `SCIFixedErrorBarsSeriesInfo` class.
 * @param series The parent associated renderable series.
 */
- (instancetype)initWithSeries:(SCIFastFixedErrorBarsRenderableSeries *)series NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
