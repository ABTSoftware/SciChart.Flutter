//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieChartSurface.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCISpacingMode.h"
#import "SCISizingMode.h"
#import "SCIPieRenderableSeriesCollection.h"
#import "SCIPieChartModifierCollection.h"
#import "SCIPieChartSurfaceRenderedListener.h"
#import "SCIPieChartRenderedMessage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to the `SCIPieChartSurface`, which contains a single `SCIPieChartRenderSurface` viewport
 * for rendering multiple `ISCIPieRenderableSeries` which may have a `ISCIPieSegment`
 * in the appropriate `SCIPieSegmentCollection` as a source.
 * <p>
 * The `SCIPieChartSurface` may have zero or many `ISCIPieChartModifier` to enable interaction with the chart.
 * @see SCIPieChartSurface
 * @see ISCIPieSegment
 * @see ISCIPieRenderableSeries
 * @see ISCIPieChartModifier
 */
@protocol ISCIPieChartSurface <ISCIChartSurfaceBase, ISCIView>

/**
 * Gets or sets size of hole for first donut series. Hole size in points
 */
@property (nonatomic) float holeRadius;

/**
 * Gets or sets the SpacingMode to use for computation of radius of the hole, which is used only for SCIDonutRenderableSeries
 * E.g. the default of Absolute requires that the spacing value is in pixels. The value of Relative requires relative spacing value
 * @see SCISizingMode
 */
@property (nonatomic) SCISizingMode holeRadiusSizingMode;

/**
 * Gets or sets the value which indicates spacing between series.
 */
@property (nonatomic) float seriesSpacing;

/**
 * Gets or sets the SpacingMode to use for computation of spacing.
 * E.g. the default of Absolute requires that the spacing value is in pixels. The value of Relative requires that the spacing value is a double value from 0.0 to 1.0.
 * @see SCISpacingMode
 */
@property (nonatomic) SCISpacingMode seriesSpacingMode;

/**
 * Gets the collection of ISCIPieRenderableSeries that this `SCIPieChartSurface` draws.
 * @see SCIPieRenderableSeriesCollection
 */
@property (strong, nonatomic, readonly) SCIPieRenderableSeriesCollection *renderableSeries;

/**
 * Gets the collection of ISCIPieRenderableSeries that are selected.
 * @see SCIPieRenderableSeriesCollection
 */
@property (strong, nonatomic, readonly) SCIPieRenderableSeriesCollection *selectedRenderableSeries;

/**
 * Gets the collection of `ISCIPieChartModifier` that this `SCIPieChartSurface` uses
 */
@property (strong, nonatomic, readonly) SCIPieChartModifierCollection *chartModifiers;

/**
 * Processes `SCIPieChartRenderedMessage` which is raised at at the end of render pass
 * @param renderedMessage The `SCIPieChartRenderedMessage` instance
 */
- (void)onSciChartRendered:(SCIPieChartRenderedMessage *)renderedMessage;

/**
 * Sets the `ISCIPieChartSurfaceRenderedListener` instance for this surface
 * @param listener The listener to set
 */
- (void)setRenderedListener:(nullable SCIPieChartSurfaceRenderedListener)listener;

/**
 * Asynchronously requests layout on this `ISCIPieChartSurface` instance.
 */
- (void)invalidateLayout;

@end

NS_ASSUME_NONNULL_END
