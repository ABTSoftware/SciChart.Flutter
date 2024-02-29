//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieDonutRenderableSeriesBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPieRenderableSeries.h"
#import "SCIRenderableSeriesCore.h"
#import "ISCIPieDonutRenderPassData.h"
#import "ISCIPieChartHitProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the Base class for for renderable series which are used within `SCIPieChartSurface`.
 */
@interface SCIPieDonutRenderableSeriesBase : SCIRenderableSeriesCore<ISCIPieRenderableSeries>

/**
 * Gets the collection of `ISCIPieSegment` that this instance of `ISCIPieRenderableSeries` draws.
 */
@property (strong, nonatomic) SCIPieSegmentCollection *segmentsCollection;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Constructor for `SCIPieDonutRenderableSeriesBase`.
 * @param currentRenderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 */
- (instancetype)initWithCurrentRenderPassData:(id<ISCIPieDonutRenderPassData>)currentRenderPassData andHitProvider:(id<ISCIPieChartHitProvider>)hitProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
