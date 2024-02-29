//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUniformHeatmapRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesRenderPassData.h"
#import "SCIDoubleValues.h"
#import "SCIFloatValues.h"
#import "SCIIntegerValues.h"
#import "SCIUnsignedIntegerValues.h"
#import "SCIIndexRange.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIFastUniformHeatmapRenderableSeries`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIUniformHeatmapRenderPassData : SCISeriesRenderPassData

/**
 * Provides the collection of `Z-values` for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIDoubleValues *zValues;

/**
 * :nodoc:
 */
@property (strong, nonatomic, readonly) SCIFloatValues *zScaledValues;

/**
 * Provides the collection of `z-indices` for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIIntegerValues *zIndices;

/**
 * Provides collection of colors which is used with associated `FastUniformHeatmapRenderableSeries` for the single render pass.
 */
@property (strong, nonatomic) SCIUnsignedIntegerValues *colorMapValues;

/**
 * Defines the `minimum` value of the associated `SCIFastUniformHeatmapRenderableSeries` for single render pass.
 */
@property (nonatomic) double minimum;

/**
 * Defines the `maximum` value of the associated `SCIFastUniformHeatmapRenderableSeries` for single render pass.
 */
@property (nonatomic) double maximum;

/**
 * Gets or sets start X value for 2D heatmap for the single render pass.
 */
@property (nonatomic) double xStart;

/**
 * Gets or sets dataSeries start X value for 2D heatmap.
 */
@property (nonatomic) double dataSeriesStartX;

/**
 * Gets or sets the size for each cell in 2D heatmap in `X-direction` for the single render pass.
 */
@property (nonatomic) double xStep;

/**
 * Gets or sets end X value for 2D heatmap for the single render pass.
 */
@property (nonatomic) double xEnd;

/**
 * Gets or sets start X value for 2D heatmap for the single render pass.
 */
@property (nonatomic) double yStart;

/**
 * Gets or sets dataSeries start Y value for 2D heatmap.
 */
@property (nonatomic) double dataSeriesStartY;

/**
 * Gets or sets the size for each cell in 2D heatmap in `Y-direction` for the single render pass.
 */
@property (nonatomic) double yStep;

/**
 * Gets or sets end X value for 2D heatmap for the single render pass.
 */
@property (nonatomic) double yEnd;

/**
 * The size of the heatmap data in `x-direction` for the single render pass.
 */
@property (nonatomic) NSInteger xSize;

/**
 * The size of the heatmap data in `y-direction` for the single render pass.
 */
@property (nonatomic) NSInteger ySize;

/**
 * Gets the point range in `Y-Direction` for the current render pass.
 */
@property (strong, nonatomic, readonly) SCIIndexRange *yPointRange;

@end

NS_ASSUME_NONNULL_END
