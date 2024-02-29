//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartSurface.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartSurfaceBase.h"
#import "ISCIChartSurface.h"

/**
 * Provides a high performance chart surface with a single `ISCIRenderSurface` viewport for rendering multiple `ISCIRenderableSeries`,
 * `X` and `Y` `ISCIAxis` instances, and where each `ISCIRenderableSeries` may have a `ISCIDataSeries` data source.
 * The `SCIChartSurface` may have zero or many `ISCIAnnotation` and may have `ISCIChartModifier` to enable interaction with the chart.
 * @note Where many `ISCIChartModifier` are used, you may use a `SCIModifierGroup` to group them.
 */
@interface SCIChartSurface : SCIChartSurfaceBase<ISCIChartSurface>

/**
 * Defines a flag indicating whether SciChart should output rendering exceptions and `Why Scichart Doesn't Render` reasons to the `Debug Console`. Default is `YES`.
 */
@property (nonatomic) BOOL debugWhySciChartDoesntRender;

/**
 * Apply the runtime license key.
 * @param key The license key.
 */
+ (void)setRuntimeLicenseKey:(nonnull NSString *)key;

@end
