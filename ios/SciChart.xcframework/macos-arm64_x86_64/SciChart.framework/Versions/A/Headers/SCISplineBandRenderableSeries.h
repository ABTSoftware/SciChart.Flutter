//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISplineBandRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseBandRenderableSeries.h"
#import "SCISplineBandRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A raster RenderableSeries type which displays two lines and shaded bands between them, where band-colors depend on whether one line is greater than the other.
 */
@interface SCISplineBandRenderableSeries : SCIBaseBandRenderableSeries

/**
 * Creates a new instance of `SCISplineBandRenderableSeries` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCIFastBandRenderableSeries` class.
 * @param renderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 * @param nearestPointProvider The nearest point provider instance.
 */
- (instancetype)initWithRenderPassData:(SCISplineBandRenderPassData *)renderPassData hitProvider:(id<ISCIHitProvider>)hitProvider nearestPointProvider:(id<ISCINearestPointProvider>)nearestPointProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
