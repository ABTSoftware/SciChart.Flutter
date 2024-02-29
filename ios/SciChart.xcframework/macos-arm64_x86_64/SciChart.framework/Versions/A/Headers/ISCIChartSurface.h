//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartSurface.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartSurfaceBase.h"
#import "ISCIChartController.h"
#import "SCIAnnotationCollection.h"
#import "SCIAxisCollection.h"
#import "SCIRenderableSeriesCollection.h"
#import "ISCIRenderSurface.h"
#import "ISCIViewportManager.h"
#import "ISCILayoutManager.h"
#import "ISCIRenderableSeriesArea.h"
#import "ISCIAxisModifierSurface.h"
#import "ISCIAdornerLayer.h"
#import "SCIChartSurfaceRenderedListener.h"

NS_ASSUME_NONNULL_BEGIN

@class SCIChartModifierCollection;

/**
 * Defines the interface to the `SCIChartSurface`, which contains a single `ISCIRenderSurface` viewport for rendering
 * multiple `ISCIRenderableSeries`, X and Y `ISCIAxis` instances, and where each `ISCIRenderableSeries` may have a `ISCIDataSeries` data source.
 * The `SCIChartSurface` may have zero or many `ISCIAnnotation` as well as `ISCIChartModifier`s to enable interaction with the chart.
 * Where many `ISCIChartModifier` are used, you may use a `SCIModifierGroup` to group them.
 * @see `SCIChartSurface`.
 * @see `ISCIDataSeries`.
 * @see `ISCIRenderableSeries`.
 * @see `ISCIAxis`.
 * @see `ISCIChartModifier`.
 * @see `ISCIAnnotation`.
 */
@protocol ISCIChartSurface <ISCIChartSurfaceBase, ISCIChartController>

/**
 * Gets the collection of `ISCIAnnotation` that this `SCIChartSurface` draws.
 */
@property (strong, nonatomic) SCIAnnotationCollection *annotations;

/**
 * Gets the collection of XAxes `ISCIAxis` that this `SCIChartSurface` draws.
 */
@property (strong, nonatomic) SCIAxisCollection *xAxes;

/**
 * Gets the collection of YAxes `ISCIAxis` that this `SCIChartSurface` draws.
 */
@property (strong, nonatomic) SCIAxisCollection *yAxes;

/**
 * Gets the collection of `ISCIRenderableSeries` that this `SCIChartSurface` draws.
 */
@property (strong, nonatomic) SCIRenderableSeriesCollection *renderableSeries;

/**
 * Gets the collection of `ISCIRenderableSeries` that are selected.
 */
@property (strong, nonatomic, readonly) SCIRenderableSeriesCollection *selectedRenderableSeries;

/**
 * Gets the collection of `ISCIChartModifier` that this `SCIChartSurface` uses.
 */
@property (strong, nonatomic) SCIChartModifierCollection *chartModifiers;

/**
 * Gets or sets the `ISCIRenderSurface` instance for this `SCIChartSurface`
 */
@property (strong, nonatomic) id<ISCIRenderSurface> renderSurface;

/**
 * Gets or sets the `ISCIViewportManager` instance for this `SCIChartSurface`.
 */
@property (strong, nonatomic) id<ISCIViewportManager> viewportManager;

/**
 * Gets or sets the `ISCILayoutManager` instance for this `SCIChartSurface`.
 */
@property (strong, nonatomic) id<ISCILayoutManager> layoutManager;

/**
 * Gets the `ISCIRenderableSeriesArea` instance for this `SCIChartSurface`.
 */
@property (strong, nonatomic, readonly) id<ISCIRenderableSeriesArea> renderableSeriesArea;

/**
 * Gets the `ISCIAdornerLayer` instance for this `SCIChartSurface`.
 */
@property (strong, nonatomic, readonly) id<ISCIAdornerLayer> adornerLayer;

/**
 * Gets the border style for `SCIChartSurface.renderableSeriesArea`.
 */
@property (strong, nonatomic) SCIPenStyle *renderableSeriesAreaBorderStyle;

/**
 * Gets the fill style for `SCIChartSurface.renderableSeriesArea`.
 */
@property (strong, nonatomic) SCIBrushStyle *renderableSeriesAreaFillStyle;

/**
 * Used internally to add `ISCIAxisModifierSurface` into this `SCIChartSurface`.
 * @param axisModifierSurface The axis modifier surface to add.
 */
- (void)addAxisModifierSurface:(id<ISCIAxisModifierSurface>)axisModifierSurface;

/**
 * Used internally to remove `ISCIAxisModifierSurface` from this `SCIChartSurface`.
 * @param axisModifierSurface The axis modifier surface to remove.
 */
- (void)removeAxisModifierSurface:(id<ISCIAxisModifierSurface>)axisModifierSurface;

/**
 * Processes `SCIRenderedMessage` which is raised at at the end of render pass.
 * @param renderedMessage The `SCIRenderedMessage` instance.
 */
- (void)onSciChartRendered:(SCIRenderedMessage *)renderedMessage;

/**
 * Sets the `ISCIChartSurfaceRenderedListener` instance for this surface.
 * @param listener The listener to set.
 */
- (void)setRenderedListener:(nullable SCIChartSurfaceRenderedListener)listener;

@end

NS_ASSUME_NONNULL_END
