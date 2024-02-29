//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUniformHeatmapSeriesInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesInfo.h"
#import "SCIFastUniformHeatmapRenderableSeries.h"
#import "ISCIComparable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines Series Info class for `SCIFastUniformHeatmapRenderableSeries`.
 */
@interface SCIUniformHeatmapSeriesInfo : SCISeriesInfo

/**
 * The parent renderable series.
 */
@property (strong, nonatomic, readonly) SCIFastUniformHeatmapRenderableSeries *renderableSeries;

/**
 * The `X Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> xValue;

/**
 * The` Y Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> yValue;

/**
 * The `Z Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> zValue;

/**
 * The x index in `SCIUniformHeatmapDataSeries` at the `hit-test` site.
 */
@property (nonatomic) NSInteger xIndex;

/**
 * The y index in `SCIUniformHeatmapDataSeries` at the `hit-test` site.
 */
@property (nonatomic) NSInteger yIndex;

/**
 * Gets the formatted `xValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedXValue;

/**
 * Gets the formatted `yValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedYValue;

@end

NS_ASSUME_NONNULL_END
