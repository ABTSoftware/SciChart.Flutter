//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFastUniformHeatmapRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesBase.h"
#import "SCIUniformHeatmapRenderPassData.h"
#import "SCIColorMap.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Displays 2D data as an uniform heat map.
 */
@interface SCIFastUniformHeatmapRenderableSeries : SCIRenderableSeriesBase

/**
 * Gets or sets the minimum value for this `SCIFastUniformHeatmapRenderableSeries`.
 */
@property (nonatomic) double minimum;

/**
 * Gets or sets the maximum value for this `SCIFastUniformHeatmapRenderableSeries`.
 */
@property (nonatomic) double maximum;

/**
 * Gets or sets the `SCIColorMap` associated with this `SCIFastUniformHeatmapRenderableSeries`
 */
@property (strong, nonatomic) SCIColorMap *colorMap;

// TODO: Implement drawing text in heatmap cells
/**
 * Gets or sets the value indicating whether this `SCIFastUniformHeatmapRenderableSeries` should draw text in heat map cells.
 */
@property (nonatomic) BOOL drawTextInCell;

/**
 * Gets or sets the `SCIFontStyle` for heat map cells.
 */
//@property (strong, nonatomic) SCIFontStyle *fontStyle;

/**
 * Creates a new instance of `SCIFastUniformHeatmapRenderableSeries` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCIFastUniformHeatmapRenderableSeries` class.
 * @param renderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 * @param nearestPointProvider The nearest point provider instance.
 */
- (instancetype)initWithRenderPassData:(SCIUniformHeatmapRenderPassData *)renderPassData hitProvider:(id<ISCIHitProvider>)hitProvider nearestPointProvider:(id<ISCINearestPointProvider>)nearestPointProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
