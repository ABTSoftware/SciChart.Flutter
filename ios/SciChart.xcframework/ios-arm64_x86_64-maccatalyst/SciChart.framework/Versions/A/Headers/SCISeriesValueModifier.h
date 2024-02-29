//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesValueModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartModifierBase.h"
#import "ISCISeriesValueMarkerFactory.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A custom ChartModifier which places an `SCIAxisMarkerAnnotation` on the YAxis for each RenderableSeries in the chart, showing the current `ISCIRenderableSeries` latest Y-value.
 * E.g. for each series, place one axis-marker with the latest Y-value of the series.
 */
@interface SCISeriesValueModifier : SCIChartModifierBase

/**
 * Creates new instance of `SCISeriesValueModifier`.
 * @param markerFactory The factory to use for creation of markers for renderable series.
 */
- (instancetype)initWithMarkerFactory:(id<ISCISeriesValueMarkerFactory>)markerFactory;

@end

NS_ASSUME_NONNULL_END
