//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderableSeriesCore.h"
#import "ISCIDrawable.h"
#import "ISCIUpdatable.h"
#import "ISCIThemeable.h"
#import "ISCIRenderSurfaceChangedListener.h"
#import "ISCIAxis.h"
#import "SCIPenStyle.h"
#import "ISCIPointMarker.h"
#import "SCIResamplingMode.h"
#import "ISCISeriesRenderPassData.h"
#import "ISCIPaletteProvider.h"
#import "SCIHitTestInfo.h"
#import "ISCISeriesInfoProvider.h"
#import "ISCIRenderPassDataTransformation.h"
#import "ISCIReadWriteLock.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol for all RenderableSeries within SciChart.
 * @note Renderable series is charts visual part. For it to be displayed you have to `attach` renderable series to `SCIChartSurface`, setup `axes ID` and provide `data series`.
 * @see `SCIRenderableSeriesBase`.
 * @see `ISCIDataSeries`.
 * @see `ISCIPointMarker`.
 * @see `SCIFastLineRenderableSeries`.
 * @see `SCIFastMountainRenderableSeries`.
 * @see `SCIFastColumnRenderableSeries`.
 * @see `SCIFastCandlestickRenderableSeries`.
 * @see `SCIFastImpulseRenderableSeries`.
 * @see `SCIXyScatterRenderableSeries`.
 */
@protocol ISCIRenderableSeries <ISCIRenderableSeriesCore, ISCIDrawable, ISCIUpdatable, ISCIThemeable, ISCIRenderSurfaceChangedListener>

/**
 * Provides the color which represents this `ISCIRenderableSeries` instance.
 */
@property (strong, nonatomic, readonly) SCIColor *seriesColor;

/**
 * Gets or sets the stroke style of this renderable series instance.
 */
@property (strong, nonatomic) SCIPenStyle *strokeStyle;

/**
 * Gets or sets the id of XAxis that this `ISCIRenderableSeries` is associated with.
 * @warning Make sure that axis with given ID attached to `SCIChartSurface`.
 */
@property (copy, nonatomic) NSString *xAxisId;

/**
 * Gets or sets the id of YAxis that this `ISCIRenderableSeries` is associated with.
 * @warning Make sure that axis with given ID attached to `SCIChartSurface`.
 */
@property (copy, nonatomic) NSString *yAxisId;

/**
 * Gets the `X-Axis` that this `ISCIRenderableSeries` is associated with.
 */
@property (weak, nonatomic, readonly, nullable) id<ISCIAxis> xAxis;

/**
 * Gets the `Y-Axis` that this `ISCIRenderableSeries` is associated with.
 */
@property (weak, nonatomic, readonly, nullable) id<ISCIAxis> yAxis;

/**
 * Defines the `SCIResamplingMode` used when drawing this series.
 */
@property (nonatomic) SCIResamplingMode resamplingMode;

/**
 * Provides the current `ISCISeriesRenderPassData` instance which is used for render pass.
 */
@property (strong, nonatomic, readonly) id<ISCISeriesRenderPassData> currentRenderPassData;

/**
 * Defines the `ISCIPointMarker` for this renderable series.
 */
@property (strong, nonatomic, nullable) id<ISCIPointMarker> pointMarker;

/**
 * Defines the `ISCISeriesInfoProvider` instance associated with this series.
 */
@property (strong, nonatomic) id<ISCISeriesInfoProvider> seriesInfoProvider;

/**
 * Defines the `ISCIRenderPassDataTransformation` instance associated with this series.
 */
@property (strong, nonatomic, nullable) id<ISCIRenderPassDataTransformation> renderPassDataTransformation;

/**
 * Defines the `ISCIPaletteProvider` instance associated with this series.
 */
@property (strong, nonatomic, nullable) id<ISCIPaletteProvider> paletteProvider;

/**
 * Defines the `ISCIDataSeries` associated with this series.
 * @warning Make sure that data series type is suitable for specific given renderable series. Check in documentation for specific renderable series.
 */
@property (strong, nonatomic, nullable) id<ISCIDataSeries> dataSeries;

/**
 * Gets whether this renderable series has data series to draw. YES - if has data series to draw.
 */
@property (nonatomic, readonly) BOOL hasDataSeries;

/**
 * Gets the `ISCIReadWriteLock` instance to lock render pass data
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> renderPassDataLock;

/**
 * Gets the `ISCIReadWriteLock` instance to lock data series
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> dataSeriesLock;

/**
 * Returns the data range of the `ISCIRenderableSeries` on X direction by querying the associated data series.
 * Individual RenderableSeries implementations may override this method to provide custom ranging on per-series basis.
 * @return The XRange of this series.
 */
- (id<ISCIRange>)getXRange;

/**
 * Sets the category data range (range of indices used by `SCICategoryAxisBase` of the `ISCIRenderableSeries`) on X direction by querying the associated data series.
 * Individual RenderableSeries implementations may override this method to provide custom ranging on per-series basis.
 * @param categoryXRange The category XRange instance to set based on value of this series
 */
 - (void)getCategoryXRange:(id<ISCIRange>)categoryXRange;

/**
 * Returns the data range of the `ISCIRenderableSeries` on Y direction by querying the associated data series.
 * Individual RenderableSeries implementations may override this method to provide custom ranging on per-series basis.
 * @return The `Y-Range` of this series.
 */
- (id<ISCIRange>)getYRange;

/**
 * Returns the data range of the `ISCIRenderableSeries` on Y direction by querying the associated data series.
 * @param xCoordCalc The XAxis coordinate calculator currently used.
 * @param getPositiveRange Indicates whether to return positive YRange only.
 * @return The YRange of this series.
 */
- (id<ISCIRange>)getYRange:(id<ISCICoordinateCalculator>)xCoordCalc positive:(BOOL)getPositiveRange;

/**
 * Performs a hit-test at the specific point `(x,y coordinate)` on the parent renderableSeries area.
 * @param hitTestResult The `SCIHitTestInfo` instance where result of hit-test should be stored.
 * @param point The x-y coordinates in pixels relative to parent renderableSeries area.
 */
- (void)hitTest:(SCIHitTestInfo *)hitTestResult at:(CGPoint)point;

/**
 * Performs a hit-test at the specific point `(x,y coordinate)` on the parent renderableSeries area.
 * @param hitTestResult The `SCIHitTestInfo` instance where result of hit-test should be stored.
 * @param point The `x-y coordinates` in pixels relative to parent renderableSeries area.
 * @param hitTestRadius The radius in pixels to determine whether hit point is over a data point.
 */
- (void)hitTest:(SCIHitTestInfo *)hitTestResult at:(CGPoint)point withHitTestRadius:(float)hitTestRadius;

/**
 * Performs a hit-test at the specific point with zero `hit-test` radius. Method consider only X values and returns the closes X value.
 * @param hitTestResult The `SCIHitTestInfo` instance where result of hit-test should be stored.
 * @param point The `x-y coordinates` in pixels relative to parent renderableSeries area.
 */
- (void)verticalSliceHitTest:(SCIHitTestInfo *)hitTestResult at:(CGPoint)point;

/**
 * Called during render pass and updates current render pass data.
 * @param xAxis The `X-Axis` instance that this `ISCIRenderableSeries` is associated with.
 * @param yAxis The `Y-Axis` instance that this `ISCIRenderableSeries` is associated with.
 * @param renderPassState The current render pass state.
 */
- (void)updateRenderPassDataWithXAxis:(id<ISCIAxis>)xAxis yAxis:(id<ISCIAxis>)yAxis renderPassState:(SCIRenderPassState *)renderPassState;

/**
 * Asynchronously requests invalidate of renderPassData provided by `ISCISeriesRenderPassData` and then invalidates this renderable series.
 */
- (void)invalidateRenderPassData;

@end

NS_ASSUME_NONNULL_END
