//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartSurface.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILayoutableView.h"
#import "ISCIPieChartSurface.h"
#import "ISCIPropertyHolder.h"
#import "ISCIInvalidatableElement.h"
#import "SCIChartTheme.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides a chart surface which contains a single Pie Chart `RenderSurface` viewport.
 * for rendering multiple `ISCIPieRenderableSeries` and where each `ISCIPieRenderableSeries` may have
 * a `ISCIPieSegment` in the appropriate `SCIPieSegmentCollection` as a source.
 * <p>
 * The `SCIPieChartSurface` may have zero or many `ISCIPieChartModifier` to enable interaction with the chart.
 * @see ISCIPieChartSurface
 * @see ISCIPieSegment
 * @see ISCIPieRenderableSeries
 * @see ISCIPieChartModifier
 * @see SCIPieRenderableSeries
 * @see SCIDonutRenderableSeries
 */
@interface SCIPieChartSurface : SCILayoutableView<ISCIPieChartSurface, ISCIPropertyHolder, ISCIInvalidatableElement>

/**
 * Provides a way to set `backgroundColor` on this surface inistance.
 */
@property (strong, nonatomic, nullable) SCIColor *backgroundColor;

/**
 * Defines the current theme applied to this `SCIPieChartSurface`.
 */
@property (copy, nonatomic) NSString *themeId __deprecated_msg("Please use `theme:` instead");

/**
 * Defines the current theme applied to this `SCIPieChartSurface`.
 */
@property (copy, nonatomic) SCIChartTheme theme;

/**
 * Defines the collection of ISCIPieRenderableSeries that this `SCIPieChartSurface` draws.
 * @see SCIPieRenderableSeriesCollection
 */
@property (strong, nonatomic) SCIPieRenderableSeriesCollection *renderableSeries;

/**
 * Defines the collection of `ISCIPieChartModifier` that this `SCIPieChartSurface` uses
 */
@property (strong, nonatomic) SCIPieChartModifierCollection *chartModifiers;

@end

NS_ASSUME_NONNULL_END
