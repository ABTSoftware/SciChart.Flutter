//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SciChart.Charting.h is part of SCICHART®, High Performance Scientific Charts
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

#import <SciChart/SciChart.Core.h>
#import <SciChart/SciChart.Data.h>
#import <SciChart/SciChart.Drawing.h>

// MARK: - <--- SciChart.Charting ---> -

// MARK: Platform Specific
#import <SciChart/SCIButton.h>
#import <SciChart/SCISelectableButton.h>
#import <SciChart/SCICollectionView.h>
#import <SciChart/SCICurrentCGContext.h>
#import <SciChart/SCIEvent.h>
#import <SciChart/NSBundle+NibLoading.h>
#import <SciChart/NSNib+UINib.h>

// MARK: Dynamic color providers
#import <SciChart/ISCICandlestickDynamicPathColorProvider.h>
#import <SciChart/ISCIDynamicPathColorProvider.h>
// MARK: Bezier Points
#import <SciChart/ISCIBezierControlPointsProvider.h>
#import <SciChart/SCIDefaultBezierControlPointsProvider.h>
#import <SciChart/SCICosineInterpolationControlPointsProvider.h>
#import <SciChart/SCIBezierCurveInterpolator.h>

// MARK: Listeners and Property Helpers
#import <SciChart/ISCIChartListener.h>
#import <SciChart/ISCIChartListenerService.h>
#import <SciChart/SCIChartChangeServiceBase.h>
#import <SciChart/ISCIPropertyHolder.h>
#import <SciChart/SCIAttachableCollectionPropertyHelper.h>
#import <SciChart/SCICollectionPropertyHelper.h>

// MARK: Themeable
#import <SciChart/ISCIThemeable.h>
#import <SciChart/ISCIThemeProvider.h>
#import <SciChart/SCIThemeColorProvider.h>
#import <SciChart/SCIChartTheme.h>
#import <SciChart/SCIThemeManager.h>

// MARK: Pie Chart
#import <SciChart/SCIPieRenderableSeriesCollection.h>
#import <SciChart/SCIPieSegmentCollection.h>
#import <SciChart/SCIPieHitTestInfo.h>
#import <SciChart/SCIPieHitProvider.h>
#import <SciChart/SCIPieSeriesInfo.h>
#import <SciChart/SCIPieDonutRenderableSeriesBase.h>
#import <SciChart/SCIPieSegment.h>
#import <SciChart/SCIPieChartSurface.h>
#import <SciChart/ISCIPieRenderableSeries.h>
#import <SciChart/SCIPieRenderableSeries.h>
#import <SciChart/SCIDonutRenderableSeries.h>
#import <SciChart/SCIPieChartLayoutState.h>
#import <SciChart/SCIPieRenderPassData.h>
#import <SciChart/SCIDonutRenderPassData.h>
#import <SciChart/SCIPieSegmentRenderPassData.h>
#import <SciChart/ISCIPieDonutRenderPassData.h>
#import <SciChart/SCIPieDonutRenderPassData.h>
#import <SciChart/SCIPieDonutRenderPassDataBase.h>
#import <SciChart/SCIPieSegmentSelectionModifier.h>
#import <SciChart/SCIPieChartGestureModifierBase.h>
#import <SciChart/SCIPieChartTooltipModifier.h>
#import <SciChart/SCIPieChartLegendModifier.h>
#import <SciChart/SCIPieSegmentsLegendDataSource.h>
#import <SciChart/SCIDefaultPieLegendItem.h>
#import <SciChart/SCIPieSeriesTooltip.h>
#import <SciChart/SCIPieSegmentLabelFormatterBase.h>
#import <SciChart/ISCIDonutDrawingManager.h>
#import <SciChart/ISCIPieDonutDrawingManagerBase.h>
#import <SciChart/ISCIPieDrawingManager.h>
#import <SciChart/ISCIPieSegmentLabelFormatter.h>
#import <SciChart/SCIDonutDrawingManager.h>
#import <SciChart/SCIPieDonutDrawingManagerBase.h>
#import <SciChart/SCIPieDrawingManager.h>
#import <SciChart/SCIDefaultPieChartSeriesInfoProvider.h>
#import <SciChart/SCIDefaultPieSegmentLabelFormatter.h>

// MARK: - SciChartSurface -
#import <SciChart/ISCIChartSurface.h>
#import <SciChart/SCIChartSurface.h>
#import <SciChart/SCIChartVerticalGroup.h>
#import <SciChart/ISCISeriesDrawingManager.h>
#import <SciChart/SCISeriesDrawingManager.h>

// MARK: Chart Collections
#import <SciChart/SCIAxisCollection.h>
#import <SciChart/SCIRenderableSeriesCollection.h>
#import <SciChart/SCIChartModifierCollectionBase.h>
#import <SciChart/SCIChartModifierCollection.h>

// MARK: Layout Managers
#import <SciChart/ISCILayoutable.h>
#import <SciChart/SCIChartLayoutState.h>
#import <SciChart/ISCIAxisLayoutChangeListener.h>
#import <SciChart/ISCIAxisLayoutManager.h>
#import <SciChart/ISCILayoutManager.h>
#import <SciChart/SCILayoutManagerBase.h>
#import <SciChart/SCIDefaultLayoutManager.h>
#import <SciChart/SCILayoutableView.h>
#import <SciChart/SCIViewContainer.h>
#import <SciChart/SCILayoutableViewContainer.h>
#import <SciChart/ISCIRenderableSeriesArea.h>
#import <SciChart/SCIRenderableSeriesArea.h>
#import <SciChart/ISCIChartModifierSurface.h>
#import <SciChart/SCIChartModifierSurface.h>
#import <SciChart/SCIAdornerLayer.h>

// MARK: Viewport Manager
#import <SciChart/ISCIViewportManager.h>
#import <SciChart/SCIViewportManagerBase.h>
#import <SciChart/SCIDefaultViewportManager.h>

// MARK: - Series -

// MARK: Data Series
#import <SciChart/SCIDataSeriesObserver.h>
#import <SciChart/SCIDataSeriesType.h>
#import <SciChart/SCIDataSeriesUpdateCore.h>
#import <SciChart/SCIDataSeriesUpdate.h>
#import <SciChart/SCIRenderableSeriesChangeListener.h>
#import <SciChart/SCIDataRangeChangeListener.h>
#import <SciChart/SCIVisibleRangeChangeListener.h>

#import <SciChart/SCIDataSeries.h>
#import <SciChart/ISCIDataSeries.h>
#import <SciChart/ISCIDataSeriesCore.h>
#import <SciChart/ISCIXDataSeries.h>
#import <SciChart/ISCIXDataSeriesValues.h>
#import <SciChart/SCIXDataSeries.h>
#import <SciChart/ISCIXyDataSeries.h>
#import <SciChart/ISCIXyDataSeriesValues.h>
#import <SciChart/SCIXyDataSeries.h>
#import <SciChart/ISCIXyyDataSeries.h>
#import <SciChart/ISCIXyyDataSeriesValues.h>
#import <SciChart/SCIXyyDataSeries.h>
#import <SciChart/ISCIXyzDataSeries.h>
#import <SciChart/ISCIXyzDataSeriesValues.h>
#import <SciChart/SCIXyzDataSeries.h>
#import <SciChart/ISCIHlDataSeries.h>
#import <SciChart/ISCIHlDataSeriesValues.h>
#import <SciChart/SCIHlDataSeries.h>
#import <SciChart/ISCIOhlcDataSeries.h>
#import <SciChart/ISCIOhlcDataSeriesValues.h>
#import <SciChart/SCIOhlcDataSeries.h>
#import <SciChart/ISCIUniformHeatmapDataSeries.h>
#import <SciChart/ISCIUniformHeatmapDataSeriesValues.h>
#import <SciChart/SCIUniformHeatmapDataSeries.h>

// MARK: Renderable Series
#import <SciChart/SCIErrorDirection.h>
#import <SciChart/SCIErrorMode.h>
#import <SciChart/SCIErrorType.h>
#import <SciChart/SCITextureMappingMode.h>
#import <SciChart/SCISpacingMode.h>

#import <SciChart/ISCIRenderableSeriesCore.h>
#import <SciChart/SCIRenderableSeriesCore.h>
#import <SciChart/ISCIRenderableSeries.h>
#import <SciChart/SCIRenderableSeriesBase.h>
#import <SciChart/SCIXyRenderableSeriesBase.h>
#import <SciChart/SCIFastFixedErrorBarsRenderableSeries.h>
#import <SciChart/SCIBaseColumnRenderableSeries.h>
#import <SciChart/SCIFastColumnRenderableSeries.h>
#import <SciChart/SCIFastLineRenderableSeries.h>
#import <SciChart/SCIFastImpulseRenderableSeries.h>
#import <SciChart/SCIBaseMountainRenderableSeries.h>
#import <SciChart/SCIFastMountainRenderableSeries.h>
#import <SciChart/SCIXyScatterRenderableSeries.h>
#import <SciChart/SCIXyyRenderableSeriesBase.h>
#import <SciChart/SCIFastBandRenderableSeries.h>
#import <SciChart/SCIXyzRenderableSeriesBase.h>
#import <SciChart/SCIFastBubbleRenderableSeries.h>
#import <SciChart/SCIHlRenderableSeriesBase.h>
#import <SciChart/SCIFastErrorBarsRenderableSeries.h>
#import <SciChart/SCIOhlcRenderableSeriesBase.h>
#import <SciChart/SCIFastOhlcRenderableSeries.h>
#import <SciChart/SCIFastCandlestickRenderableSeries.h>
#import <SciChart/SCIFastUniformHeatmapRenderableSeries.h>
#import <SciChart/SCIChartHeatmapColourMap.h>
#import <SciChart/SCISplineLineRenderableSeries.h>
#import <SciChart/SCISplineMountainRenderableSeries.h>
#import <SciChart/SCISplineBandRenderableSeries.h>

// MARK: Stacked Renderable Series
#import <SciChart/ISCIStackedRenderableSeries.h>
#import <SciChart/ISCIStackedColumnRenderableSeries.h>
#import <SciChart/SCIStackedColumnRenderableSeries.h>
#import <SciChart/SCIStackedMountainRenderableSeries.h>
#import <SciChart/SCIStackedSeriesCollectionBase.h>
#import <SciChart/SCIHorizontallyStackedColumnsCollection.h>
#import <SciChart/SCIVerticallyStackedSeriesCollection.h>
#import <SciChart/SCIVerticallyStackedColumnsCollection.h>
#import <SciChart/SCIVerticallyStackedMountainsCollection.h>

// MARK: Render Pass Data
#import <SciChart/ISCISeriesRenderPassData.h>
#import <SciChart/SCISeriesRenderPassData.h>
#import <SciChart/SCIUniformHeatmapRenderPassData.h>
#import <SciChart/SCIXSeriesRenderPassData.h>
#import <SciChart/SCIOhlcRenderPassData.h>
#import <SciChart/SCIXyRenderPassData.h>
#import <SciChart/SCIColumnRenderPassData.h>
#import <SciChart/SCIXyyRenderPassData.h>
#import <SciChart/SCIBandRenderPassData.h>
#import <SciChart/SCIXyzRenderPassData.h>
#import <SciChart/SCIBubbleRenderPassData.h>
#import <SciChart/SCILineRenderPassData.h>
#import <SciChart/SCIMountainRenderPassData.h>
#import <SciChart/SCIStackedSeriesRenderPassData.h>
#import <SciChart/SCIStackedColumnRenderPassData.h>
#import <SciChart/SCIStackedMountainRenderPassData.h>
#import <SciChart/SCIHlRenderPassData.h>
#import <SciChart/SCIErrorBarsRenderPassData.h>
#import <SciChart/SCIFixedErrorBarsRenderPassData.h>
#import <SciChart/SCIImpulseRenderPassData.h>
#import <SciChart/SCISplineXyRenderPassData.h>
#import <SciChart/SCISplineLineRenderPassData.h>
#import <SciChart/SCISplineMountainRenderPassData.h>
#import <SciChart/SCISplineXyyRenderPassData.h>
#import <SciChart/SCISplineBandRenderPassData.h>

// MARK: Point Markers
#import <SciChart/ISCIPointMarker.h>
#import <SciChart/ISCISpritePointMarkerDrawer.h>
#import <SciChart/SCIPointMarkerBase.h>
#import <SciChart/SCISpritePointMarker.h>
#import <SciChart/SCITrianglePointMarker.h>
#import <SciChart/SCICrossPointMarker.h>
#import <SciChart/SCIEllipsePointMarker.h>
#import <SciChart/SCISquarePointMarker.h>
#import <SciChart/SCIDrawablePointMarker.h>

// MARK: - Animations -

#import <SciChart/SCIAnimations.h>
#import <SciChart/SCIValueAnimator.h>
#import <SciChart/ISCIAnimatorListener.h>

// MARK: RenderPassData Transformations
#import <SciChart/ISCIRenderPassDataTransformation.h>
#import <SciChart/SCIBaseRenderPassDataTransformation.h>
#import <SciChart/SCICompositeTransformation.h>
#import <SciChart/SCITransformationHelpers.h>

// MARK: Scale Transformation
#import <SciChart/SCIScaleTransformationBase.h>
#import <SciChart/SCIScaleXyTransformation.h>
#import <SciChart/SCIScaleXyyTransformation.h>
#import <SciChart/SCIScaleXyzTransformation.h>
#import <SciChart/SCIScaleHlTransformation.h>
#import <SciChart/SCIScaleOhlcTransformation.h>
#import <SciChart/SCIScaleStackedXyTransformation.h>
#import <SciChart/SCISplineScaleXyTransformation.h>
#import <SciChart/SCISplineScaleXyyTransformation.h>

// MARK: Sweep Transformation
#import <SciChart/SCISweepXyTransformation.h>
#import <SciChart/SCISweepXyyTransformation.h>
#import <SciChart/SCISplineSweepXyTransformation.h>
#import <SciChart/SCISplineSweepXyyTransformation.h>

// MARK: Translate Transformation
#import <SciChart/SCITranslateXTransformation.h>
#import <SciChart/SCITranslateXyTransformationBase.h>
#import <SciChart/SCITranslateXyTransformation.h>
#import <SciChart/SCITranslateXyyTransformation.h>
#import <SciChart/SCITranslateHlTransformation.h>
#import <SciChart/SCITranslateOhlcTransformation.h>
#import <SciChart/SCITranslateStackedXyTransformation.h>
#import <SciChart/SCISplineXyTranslateXTransformation.h>
#import <SciChart/SCISplineXyTranslateYTransformation.h>
#import <SciChart/SCISplineXyyTranslateXTransformation.h>
#import <SciChart/SCISplineXyyTranslateYTransformation.h>

// MARK: Wave Transformation
#import <SciChart/SCIWaveTransformationBase.h>
#import <SciChart/SCIWaveXyTransformation.h>
#import <SciChart/SCIWaveXyyTransformation.h>
#import <SciChart/SCIWaveHlTransformation.h>
#import <SciChart/SCIWaveOhlcTransformation.h>
#import <SciChart/SCIWaveStackedXyTransformation.h>
#import <SciChart/SCISplineWaveXyTransformation.h>
#import <SciChart/SCISplineWaveXyyTransformation.h>

// MARK: Easing Functions
#import <SciChart/SCIEasingMode.h>
#import <SciChart/ISCIEasingFunction.h>
#import <SciChart/SCIEasingFunctionBase.h>
#import <SciChart/SCIQuadraticEase.h>
#import <SciChart/SCICubicEase.h>
#import <SciChart/SCIElasticEase.h>
#import <SciChart/SCISineEase.h>
#import <SciChart/SCIExponentialEase.h>
#import <SciChart/SCIBackEase.h>
#import <SciChart/SCIBounceEase.h>

// MARK: - Providers -

// MARK: SeriesInfo's
#import <SciChart/SCISeriesInfoCore.h>
#import <SciChart/SCISeriesInfo.h>
#import <SciChart/SCIXySeriesInfo.h>
#import <SciChart/SCILerpXySeriesInfo.h>
#import <SciChart/SCISplineXySeriesInfo.h>
#import <SciChart/SCISplineBandSeriesInfo.h>
#import <SciChart/SCIBandSeriesInfo.h>
#import <SciChart/SCILerpBandSeriesInfo.h>
#import <SciChart/SCIXyzSeriesInfo.h>
#import <SciChart/SCIHlSeriesInfo.h>
#import <SciChart/SCIErrorBarsSeriesInfo.h>
#import <SciChart/SCIFixedErrorBarsSeriesInfo.h>
#import <SciChart/SCIOhlcSeriesInfo.h>
#import <SciChart/SCIStackedSeriesInfo.h>
#import <SciChart/SCIUniformHeatmapSeriesInfo.h>

// MARK: SeriesInfo Providers
#import <SciChart/ISCISeriesInfoProvider.h>
#import <SciChart/SCIDefaultBandSeriesInfoProvider.h>
#import <SciChart/SCIDefaultErrorBarsSeriesInfoProvider.h>
#import <SciChart/SCIDefaultFixedErrorBarsSeriesInfoProvider.h>
#import <SciChart/SCIDefaultOhlcSeriesInfoProvider.h>
#import <SciChart/SCIDefaultUniformHeatmapSeriesInfoProvider.h>
#import <SciChart/SCIDefaultXySeriesInfoProvider.h>
#import <SciChart/SCIDefaultXyzSeriesInfoProvider.h>
#import <SciChart/SCIHorizontallyStackedSeriesCollectionInfoProvider.h>
#import <SciChart/SCILerpBandSeriesInfoProvider.h>
#import <SciChart/SCILerpXySeriesInfoProvider.h>
#import <SciChart/SCISplineXySeriesInfoProvider.h>
#import <SciChart/SCISplineBandSeriesInfoProvider.h>
#import <SciChart/SCISeriesInfoProviderBase.h>
#import <SciChart/SCIStackedSeriesCollectionInfoProviderBase.h>
#import <SciChart/SCIVerticallyStackedSeriesCollectionInfoProvider.h>

// MARK: HitTest
#import <SciChart/SCIHitTestInfo.h>
#import <SciChart/ISCIHitTestInfoUpdatable.h>

// MARK: Hit Providers
#import <SciChart/ISCIHitProvider.h>
#import <SciChart/SCIBandHitProvider.h>
#import <SciChart/SCIBubbleHitProvider.h>
#import <SciChart/SCICandlestickHitProvider.h>
#import <SciChart/SCIColumnHitProvider.h>
#import <SciChart/SCICompositeHitProvider.h>
#import <SciChart/SCIErrorBarsHitProvider.h>
#import <SciChart/SCIHitProviderBase.h>
#import <SciChart/SCIImpulseHitProvider.h>
#import <SciChart/SCILineHitProvider.h>
#import <SciChart/SCIMountainHitProvider.h>
#import <SciChart/SCIPointMarkerHitProvider.h>
#import <SciChart/SCIStackedColumnHitProvider.h>
#import <SciChart/SCIStackedMountainHitProvider.h>
#import <SciChart/SCIUniformHeatmapHitProvider.h>
#import <SciChart/SCISplineLineHitProvider.h>
#import <SciChart/SCISplineMountainHitProvider.h>
#import <SciChart/SCISplineBandHitProvider.h>

// MARK: Nearest Point Providers
#import <SciChart/ISCINearestPointProvider.h>
#import <SciChart/SCINearestBubblePointProvider.h>
#import <SciChart/SCINearestColumnPointProvider.h>
#import <SciChart/SCINearestHorizontalPointProvider.h>
#import <SciChart/SCINearestOhlcPointProvider.h>
#import <SciChart/SCINearestPointProviderBase.h>
#import <SciChart/SCINearestStackedColumnPointProvider.h>
#import <SciChart/SCINearestUniformHeatmapPointProvider.h>
#import <SciChart/SCINearestXPointProviderBase.h>
#import <SciChart/SCINearestXyPointProvider.h>
#import <SciChart/SCINearestXyyPointProvider.h>

// MARK: Palette providers
#import <SciChart/ISCIPaletteProvider.h>
#import <SciChart/ISCIStrokePaletteProvider.h>
#import <SciChart/ISCIFillPaletteProvider.h>
#import <SciChart/ISCIPointMarkerPaletteProvider.h>
#import <SciChart/ISCIUniformHeatmapPaletteProvider.h>
#import <SciChart/SCIPaletteProviderBase.h>

// MARK: LabelProviders
#import <SciChart/ISCILabelProvider.h>
#import <SciChart/SCILabelProviderBase.h>
#import <SciChart/ISCIDoubleLabelFormatter.h>
#import <SciChart/ISCICategoryLabelProvider.h>
#import <SciChart/SCICategoryLabelProviderBase.h>
#import <SciChart/SCIFormatterLabelProviderBase.h>
#import <SciChart/SCINumericLabelProvider.h>
#import <SciChart/SCILogarithmicNumericLabelProvider.h>
#import <SciChart/SCIDateLabelProvider.h>
#import <SciChart/SCITradeChartAxisLabelProvider.h>

#import <SciChart/ISCILabelFormatter.h>
#import <SciChart/SCISimpleNumericLabelFormatter.h>
#import <SciChart/SCIScientificNumericLabelFormatter.h>
#import <SciChart/SCINumericLabelFormatterBase.h>
#import <SciChart/SCINumericLabelFormatter.h>
#import <SciChart/SCILogBaseNumericLabelFormatter.h>
#import <SciChart/SCILogarithmicNumericLabelFormatter.h>
#import <SciChart/SCIDateLabelFormatter.h>
#import <SciChart/SCICalendarDateLabelFormatter.h>
#import <SciChart/SCITradeChartAxisLabelFormatter.h>
#import <SciChart/ISCICalendarUnitDateFormatter.h>
#import <SciChart/SCICalendarUnitDateFormatter.h>
#import <SciChart/SCICursorCalendarUnitDateFormatter.h>

// MARK: - Axes -

#import <SciChart/ISCIAxisCore.h>
#import <SciChart/SCIAxisCore.h>
#import <SciChart/ISCIAxis.h>
#import <SciChart/SCIAxisBase.h>
#import <SciChart/SCINumericAxis.h>
#import <SciChart/ISCILogarithmicNumericAxis.h>
#import <SciChart/SCILogarithmicNumericAxis.h>
#import <SciChart/ISCICategoryDateAxis.h>
#import <SciChart/SCICategoryAxisBase.h>
#import <SciChart/SCICategoryDateAxis.h>
#import <SciChart/SCIDateAxis.h>
#import <SciChart/SCIIndexDateAxis.h>

// MARK: IndexDataProvider
#import <SciChart/SCIEmptyIndexCalculator.h>
#import <SciChart/SCIDefaultIndexDataProvider.h>

// MARK: Axis Common
#import <SciChart/SCIScientificNotation.h>
#import <SciChart/SCIAutoRange.h>
#import <SciChart/SCIAxisAlignment.h>
#import <SciChart/SCIAxisTitlePlacement.h>
#import <SciChart/SCIAxisTitleOrientation.h>
#import <SciChart/SCIAxisParams.h>
#import <SciChart/SCIClipMode.h>
#import <SciChart/SCIClipModeTarget.h>
#import <SciChart/SCIAxisLayoutState.h>
#import <SciChart/SCIAxisTickLabelStyle.h>
#import <SciChart/ISCIAxisInteractivityHelper.h>
#import <SciChart/ISCIAxisModifierSurface.h>
#import <SciChart/SCIAxisModifierSurface.h>
#import <SciChart/SCIRenderOperationLayer.h>
#import <SciChart/SCIRenderOperationLayers.h>

// MARK: Axis Layout Strategies
#import <SciChart/ISCIAxisLayoutStrategy.h>
#import <SciChart/SCIAxisLayoutStrategyBase.h>
#import <SciChart/SCIHorizontalAxisLayoutStrategy.h>
#import <SciChart/SCIVerticalAxisLayoutStrategy.h>
#import <SciChart/SCILeftAlignmentInnerAxisLayoutStrategy.h>
#import <SciChart/SCILeftAlignmentOuterAxisLayoutStrategy.h>
#import <SciChart/SCITopAlignmentInnerAxisLayoutStrategy.h>
#import <SciChart/SCITopAlignmentOuterAxisLayoutStrategy.h>
#import <SciChart/SCIRightAlignmentInnerAxisLayoutStrategy.h>
#import <SciChart/SCIRightAlignmentOuterAxisLayoutStrategy.h>
#import <SciChart/SCIBottomAlignmentInnerAxisLayoutStrategy.h>
#import <SciChart/SCIBottomAlignmentOuterAxisLayoutStrategy.h>

// MARK: AxisInfo Providers
#import <SciChart/ISCIAxisInfoProvider.h>
#import <SciChart/ISCIAxisInfoUpdatable.h>
#import <SciChart/SCIAxisInfo.h>

// MARK: VisibleRange Animators
#import <SciChart/ISCIVisibleRangeAnimator.h>
#import <SciChart/SCIVisibleRangeAnimatorListener.h>
#import <SciChart/SCIVisibleRangeAnimator.h>
#import <SciChart/SCILogarithmicVisibleRangeAnimatorListener.h>
#import <SciChart/SCIIndexVisibleRangeAnimatorListener.h>

// MARK: Axes delta's and DeltaCalculators
#import <SciChart/ISCIAxisDelta.h>
#import <SciChart/SCIAxisDelta.h>
#import <SciChart/ISCIDeltaCalculator.h>
#import <SciChart/SCIDateDeltaCalculatorBase.h>
#import <SciChart/SCIDateDeltaCalculator.h>
#import <SciChart/SCILogarithmicDeltaCalculator.h>
#import <SciChart/SCINumericDeltaCalculator.h>
#import <SciChart/SCINumericDeltaCalculatorBase.h>
#import <SciChart/SCIIndexDateTickProvider.h>
#import <SciChart/SCIDefaultIndexCalculator.h>

// MARK: Ticks and TickProviders
#import <SciChart/SCIAxisTicks.h>
#import <SciChart/SCITickCoordinates.h>
#import <SciChart/ISCITickCoordinatesProvider.h>
#import <SciChart/SCIDefaultTickCoordinatesProvider.h>
#import <SciChart/ISCITickProvider.h>
#import <SciChart/SCICategoryTickProvider.h>
#import <SciChart/SCIDateTickProvider.h>
#import <SciChart/SCIDeltaTickProvider.h>
#import <SciChart/SCILogarithmicNumericTickProvider.h>
#import <SciChart/SCINumericTickProvider.h>
#import <SciChart/SCINumericTickProviderBase.h>
#import <SciChart/SCIIndexDateTickProvider.h>
#import <SciChart/SCITickProvider.h>

// MARK: Range Calculation Helpers
#import <SciChart/ISCIRangeCalculationHelperBase.h>
#import <SciChart/SCIRangeCalculatorHelperBase.h>
#import <SciChart/SCIRangeCalculationHelper2DBase.h>
#import <SciChart/SCINumericRangeCalculationHelper.h>
#import <SciChart/SCIDateRangeCalculationHelper.h>
#import <SciChart/SCICategoryRangeCalculationHelper.h>
#import <SciChart/SCILogarithmicRangeCalculationHelper.h>
#import <SciChart/SCIIndexDateRangeCalculationHelper.h>

// MARK: Coordinate Calculators
#import <SciChart/SCICoordinateCalculatorFactory.h>
#import <SciChart/ISCICoordinateCalculator.h>
#import <SciChart/ISCILogarithmicCoordinateCalculator.h>

// MARK: Axis Renderers
#import <SciChart/ISCIAxisRendererCore.h>
#import <SciChart/ISCIAxisRenderer.h>
#import <SciChart/ISCIAxisGridLinesRenderer.h>

// MARK: - Chart Modifiers -

#import <SciChart/ISCIChartModifierCore.h>
#import <SciChart/ISCIChartModifier.h>
#import <SciChart/SCIChartModifierBase.h>
#import <SciChart/SCIModifierGroup.h>
#import <SciChart/SCILegendModifier.h>
// #import <SciChart/SCIAnnotationCreationModifier.h>
// #import <SciChart/SCICreationAnnotationFactory.h>

// MARK: Gesture Modifiers
#import <SciChart/SCIZoomExtentsModifier.h>
#import <SciChart/SCIZoomPanModifier.h>
#import <SciChart/SCIPinchZoomModifier.h>
#import <SciChart/SCIRubberBandXyZoomModifier.h>
#import <SciChart/SCIXAxisDragModifier.h>
#import <SciChart/SCIYAxisDragModifier.h>
#import <SciChart/SCISeriesSelectionModifier.h>

// MARK: Touch Modifiers
#import <SciChart/SCIMasterSlaveTouchModifierBase.h>
#import <SciChart/SCITooltipModifierBase.h>
#import <SciChart/SCITooltipModifier.h>
#import <SciChart/SCITooltipModifierWithAxisLabelsBase.h>
#import <SciChart/SCICursorModifier.h>
#import <SciChart/SCIRolloverModifier.h>

// MARK: Modifier Behaviors
#import <SciChart/SCIModifierBehavior.h>
#import <SciChart/SCITooltipBehaviorBase.h>
#import <SciChart/SCITooltipBehavior.h>
#import <SciChart/SCIAxisTooltipsBehaviorBase.h>
#import <SciChart/SCIAxisTooltipsBehavior.h>
#import <SciChart/SCICursorTooltipBehavior.h>
#import <SciChart/SCIVerticalSliceBehaviorBase.h>
#import <SciChart/SCIRolloverBehavior.h>

// MARK: Drawable Behaviors
#import <SciChart/SCIDrawableBehavior.h>
#import <SciChart/SCICrossDrawableBehavior.h>
#import <SciChart/SCIVerticalLineDrawableBehavior.h>
#import <SciChart/SCICursorCrosshairDrawableBehavior.h>

// MARK: Legend Modifier
#import <SciChart/SCISourceMode.h>
#import <SciChart/SCIDefaultLegendItemBase.h>
#import <SciChart/SCIDefaultLegendItem.h>
#import <SciChart/SCILegendDataSource.h>
#import <SciChart/ISCILegendItem.h>
#import <SciChart/SCIChartLegend.h>
#import <SciChart/SCIChartLegendHorizontalLayout.h>
#import <SciChart/SCIChartLegendVerticalLayout.h>
#import <SciChart/SCISeriesInfoLegendDataSource.h>
#import <SciChart/ISCILegendDataSource.h>

// MARK: Series Value Modifier
#import <SciChart/ISCISeriesValueMarker.h>
#import <SciChart/ISCISeriesValueMarkerFactory.h>
#import <SciChart/SCIDefaultSeriesValueMarker.h>
#import <SciChart/SCIDefaultSeriesValueMarkerFactory.h>
#import <SciChart/SCISeriesValueMarkerAnnotation.h>
#import <SciChart/SCISeriesValueModifier.h>
#import <SciChart/SCISeriesValueMarkerAnnotationHelper.h>

// MARK: Modifier Tooltips
#import <SciChart/ISCITooltipContainer.h>
#import <SciChart/SCITooltipContainerBase.h>
#import <SciChart/SCITooltipModifierTooltip.h>
#import <SciChart/SCITooltipLayoutHelper.h>
#import <SciChart/SCIShiftTooltipHelper.h>
#import <SciChart/SCISlice.h>
#import <SciChart/SCISliceLayout.h>
#import <SciChart/SCIDefaultAxisInfoProvider.h>
#import <SciChart/SCIAxisTooltip.h>
#import <SciChart/SCICursorTooltipWrapper.h>
#import <SciChart/SCICursorModifierTooltip.h>

// MARK: SeriesTooltips
#import <SciChart/SCISeriesTooltipBase.h>
#import <SciChart/SCISeriesTooltipCore.h>
#import <SciChart/SCIXySeriesTooltip.h>
#import <SciChart/SCIXyzSeriesTooltip.h>
#import <SciChart/SCIBandSeriesRolloverTooltip.h>
#import <SciChart/SCIBandSeriesTooltip.h>
#import <SciChart/SCIFixedErrorBarSeriesTooltip.h>
#import <SciChart/SCIHlSeriesTooltip.h>
#import <SciChart/SCIOhlcSeriesTooltip.h>
#import <SciChart/SCIUniformHeatmapSeriesTooltip.h>
#import <SciChart/SCIStackedSeriesTooltipBase.h>
#import <SciChart/SCIStackedSeriesTooltip.h>
#import <SciChart/SCIHorizontallyStackedSeriesRolloverTooltip.h>
#import <SciChart/SCIVerticallyStackedSeriesRolloverTooltip.h>

// MARK: - Annotations -

#import <SciChart/SCIAnnotationSurfaceEnum.h>
#import <SciChart/ISCIResizingGrip.h>
#import <SciChart/SCIEllipseResizingGrip.h>
#import <SciChart/ISCIAnnotationAdornerAction.h>
#import <SciChart/ISCIAnnotation.h>
#import <SciChart/ISCIFormattedValueProvider.h>
#import <SciChart/SCIDefaultFormattedValueProvider.h>
#import <SciChart/SCIDefaultAnnotationSelectionDrawable.h>

#import <SciChart/SCIAnnotationBase.h>
#import <SciChart/SCILineAnnotationBase.h>
#import <SciChart/SCILineAnnotation.h>
#import <SciChart/SCILineArrowAnnotation.h>
#import <SciChart/SCIAnnotationLabel.h>
#import <SciChart/SCILineAnnotationWithLabelsBase.h>
#import <SciChart/SCIHorizontalLineAnnotation.h>
#import <SciChart/SCIVerticalLineAnnotation.h>
#import <SciChart/SCIAnchorPointAnnotation.h>
#import <SciChart/SCITextAnnotation.h>
#import <SciChart/SCIAxisMarkerAnnotation.h>
#import <SciChart/SCIAxisLabelAnnotation.h>
#import <SciChart/SCICustomAnnotation.h>
#import <SciChart/SCIBoxAnnotation.h>
