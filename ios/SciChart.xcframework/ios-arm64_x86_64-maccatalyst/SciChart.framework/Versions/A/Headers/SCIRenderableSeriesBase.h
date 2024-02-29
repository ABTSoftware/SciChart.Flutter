//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderableSeriesBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesCore.h"
#import "ISCIRenderableSeries.h"
#import "ISCIChartSurfaceProvider.h"
#import "SCILineDrawMode.h"
#import "ISCIHitProvider.h"
#import "ISCINearestPointProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the Base class for all RenderableSeries within SciChart.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations. 
 */
@interface SCIRenderableSeriesBase : SCIRenderableSeriesCore<ISCIRenderableSeries, ISCIChartSurfaceProvider>

/**
 * Gets or sets a value indicating how this renderable series will treat `NaN`. See `SCILineDrawMode` for available options.
 */
@property (nonatomic) SCILineDrawMode drawNaNAs;

/**
 * Gets the value which determines the zero line in `Y direction`.
 * @note Used to set the bottom of a column, or the zero line in a mountain.
 */
@property (nonatomic) double zeroLineY;

/**
 * Gets the value indicating whether this renderable series should be clipped to bounds, which is provided by `-[ISCIRenderContext2D setClipRect:]` method.
 * @note If YES - then renderable series will be clipped to bounds.
 */
@property (nonatomic) BOOL clipToBounds;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;
/**
 * Creates a new instance of `SCIRenderableSeriesBase` class.
 * @param renderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 * @param nearestPointProvider The nearest point provider instance.
 */
- (instancetype)initWithRenderPassData:(id<ISCISeriesRenderPassData>)renderPassData hitProvider:(id<ISCIHitProvider>)hitProvider nearestPointProvider:(id<ISCINearestPointProvider>)nearestPointProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
