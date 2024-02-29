//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseColumnRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyRenderableSeriesBase.h"
#import "SCITextureMappingMode.h"
#import "SCIXyRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * An abstract base class for column series.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIBaseColumnRenderableSeries : SCIXyRenderableSeriesBase

/**
 * Gets or sets the `SCIBrushStyle` used to fill columns.
 */
@property (strong, nonatomic) SCIBrushStyle *fillBrushStyle;

/**
 * Gets the `SCITextureMappingMode` which defines how columns are filled when a gradient is used.
 */
@property (nonatomic) SCITextureMappingMode fillBrushMappingMode;

/**
 * Gets or sets a value between 0.0 and 1.0 which defines the fraction of available space each column should occupy.
 */
@property (nonatomic) double dataPointWidth;

/**
 * Creates a new instance of `SCIBaseColumnRenderableSeries` class.
 * @param renderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 * @param nearestPointProvider The nearest point provider instance.
 */
- (instancetype)initWithRenderPassData:(SCIXyRenderPassData *)renderPassData hitProvider:(id<ISCIHitProvider>)hitProvider nearestPointProvider:(id<ISCINearestPointProvider>)nearestPointProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
