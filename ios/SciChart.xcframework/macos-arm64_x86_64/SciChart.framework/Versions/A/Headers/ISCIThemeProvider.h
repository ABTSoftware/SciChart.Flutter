//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIThemeProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartTheme.h"

@protocol ISCIResizingGrip;
@class SCIFontStyle;
@class SCIPenStyle;
@class SCIBrushStyle;
@class SCILegendCellStyle;

/**
 * Defines the interface to a SciChart Theme, which provides theme colors for `SCIChartSurface`.
 * @note You may implement `ISCIThemeProvider` yourself and pass it to `SCIThemeManager` to set the global theme for all `SCIChartSurface` views.
 */
@protocol ISCIThemeProvider <NSObject>

#pragma mark - SCIChartSurface Areas

/**
 * Gets the id of the current theme.
 */
@property (strong, nonatomic, readonly, nonnull) NSString *themeId __deprecated_msg("Please use `theme:` instead");

/**
 * Gets the current theme.
 */
@property (strong, nonatomic, readonly, nonnull) SCIChartTheme theme;

/**
 * Gets the `SCIBrushStyle` which will be used as background of `SCIChartSurface`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *sciChartSurfaceBackground;

/**
 * Gets the `NSDictionary` of the params which will be used as background of `SCILegendModifier`
 */
@property (strong, nonatomic, readonly, nonnull) NSDictionary *legendBackground;

/**
 * Gets the `SCIBrushStyle` which will be used as style for `ISCIChartSurface.renderableSeriesArea` background.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *renderableSeriesAreaFillStyle;

/**
 * Gets the `SCIPenStyle` which will be used as style for for `ISCIChartSurface.renderableSeriesArea` border.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *renderableSeriesAreaBorderStyle;

#pragma mark - Axes

/**
 * Gets the `SCIFontStyle` which will be used for rendering of `SCIAxisBase` tick labels.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *tickTextStyle;

/**
 * Gets the `SCIFontStyle` which will be used for rendering of `SCIAxisBase` title.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *axisTitleTextStyle;

/**
 * Gets the `SCIBrushStyle` which will be used for rendering of `SCIAxisBase` major bands.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *axisBandsStyle;

/**
 * Gets the `SCIPenStyle` which will be used for rendering of `SCIAxisBase` major grid lines.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *majorGridLinesStyle __deprecated_msg("Please use majorGridLineStyle instead");

/**
 * Gets the `SCIPenStyle` which will be used for rendering of `SCIAxisBase` major grid lines.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *majorGridLineStyle;

/**
 * Gets the `SCIPenStyle` which will be used for rendering of `SCIAxisBase` minor grid lines.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *minorGridLinesStyle __deprecated_msg("Please use minorGridLineStyle instead");

/**
 * Gets the `SCIPenStyle` which will be used for rendering of `SCIAxisBase` minor grid lines.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *minorGridLineStyle;

/**
 * Gets the length of major tick lines which are rendered by `SCIAxisBase` instance.
 */
@property (nonatomic, readonly) float majorTickLineLength;

/**
 * Gets the length of minor tick lines which are rendered by `SCIAxisBase` instance.
 */
@property (nonatomic, readonly) float minorTickLineLength;

/**
 * Gets the default background for `SCIAxisBase` tooltips.
 */
@property (strong, nonatomic, readonly, nonnull) NSDictionary *axisTooltipBackground;

#pragma mark - Renderable Series

/**
 * Gets the default `ISCIRenderableSeries.strokeStyle` for `SCIFastLineRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultLineSeriesStyle;

/**
 * Gets the default `ISCIRenderableSeries.strokeStyle` for `SCIBaseMountainRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultMountainLineStyle;

/**
 * Gets the default `SCIBaseMountainRenderableSeries.areaStyle` for `SCIBaseMountainRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultMountainFillStyle;

/**
 * Gets the default `ISCIRenderableSeries.strokeStyle` for `SCIFastColumnRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultColumnLineStyle;

/**
 * Gets the default `SCIFastColumnRenderableSeries.fillBrushStyle` for `SCIFastColumnRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultColumnFillStyle;

/**
 * Gets the default `SCIOhlcRenderableSeriesBase.strokeUpStyle` for `SCIOhlcRenderableSeriesBase`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultCandleStrokeUpStyle;

/**
 * Gets the default `SCIOhlcRenderableSeriesBase.strokeDownStyle` for `SCIOhlcRenderableSeriesBase`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultCandleStrokeDownStyle;

/**
 * Gets the default `SCIFastCandlestickRenderableSeries.fillUpBrushStyle` for `SCIFastCandlestickRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultCandleFillUpStyle;

/**
 * Gets the default `SCIFastCandlestickRenderableSeries.fillDownBrushStyle` for `SCIFastCandlestickRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultCandleFillDownStyle;

/**
 * Gets the default `SCIFastBandRenderableSeries.strokeY1Style` for `SCIFastBandRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultUpBandLineStyle;

/**
 * Gets the default `ISCIRenderableSeries.strokeStyle` for `SCIFastBandRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultDownBandLineStyle;

/**
 * Gets the default `SCIFastBandRenderableSeries.fillY1BrushStyle` for `SCIFastBandRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultUpBandFillStyle;

/**
 * Gets the default `SCIFastBandRenderableSeries.fillBrushStyle` for `SCIFastBandRenderableSeries`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultDownBandFillStyle;

#pragma mark - Modifiers

/**
 * Gets the `SCIPenStyle` which will be used for rendering of `SCIRolloverModifier` vertical line.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *rolloverLineStyle;

/**
 * Gets the `SCIPenStyle` which will be used for rendering of cross pointer provided by `SCITooltipModifier`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *crossPointerLineStyle;

/**
 * Gets the `SCIPenStyle` which will be used for rendering of `SCICursorModifier` cross.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *cursorLineStyle;

/**
 * Gets the `SCIBrushStyle` which will be used for rendering of `SCICursorModifier` tooltip background.
 */
@property (strong, nonatomic, readonly, nonnull) NSDictionary *labelBackground;

/**
 * Gets the `SCIBrushStyle` which will be used to fill `SCIRubberBandXyZoomModifier` reticule.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *rubberBandFillStyle;

/**
 * Gets the `SCIPenStyle` which will be used to renderer border of `SCIRubberBandXyZoomModifier` reticule.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *rubberBandStrokeStyle;

#pragma mark - Annotations

/**
 * Gets the default line style for `SCILineAnnotation`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIPenStyle *defaultLineAnnotationStyle;

/**
 * Gets the default text style for `SCITextAnnotation`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *defaultTextAnnotationStyle;

/**
 * Gets the default background for `SCITextAnnotation`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIBrushStyle *defaultTextAnnotationBackgroundStyle;

/**
 * Gets the default `ISCIResizingGrip` which will be used for drawing of resizing grips for all `SCIAnnotationBase`.
 */
@property (strong, nonatomic, readonly, nonnull) id<ISCIResizingGrip> defaultAnnotationGrip;

/**
 * Gets the default text style for `SCIAxisMarkerAnnotation`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *defaultAxisMarkerAnnotationStyle;

#pragma mark - Fonts

/**
 * Gets the default font style for `SCIAxisBase` tooltips.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *axisTooltipTextStyle;

/**
 * Gets the default font style for `SCILegendModifier` and `SCIChartHeatmapColourMap`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *defaultLabelTextStyle;

/**
 * Gets the default font style for `ISCIIPieSegment.titleStyle`.
 */
@property (strong, nonatomic, readonly, nonnull) SCIFontStyle *defaultPieSegmentTitleStyle;

@end
