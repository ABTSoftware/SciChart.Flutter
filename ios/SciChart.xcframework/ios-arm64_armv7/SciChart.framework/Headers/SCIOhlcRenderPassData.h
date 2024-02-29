//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIOhlcRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXSeriesRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIOhlcRenderableSeriesBase`.
 */
@interface SCIOhlcRenderPassData : SCIXSeriesRenderPassData

/**
 * Provides the collection of `open-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *openValues;

/**
 * Provides the collection of `high-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *highValues;

/**
 * Provides the collection of `low-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *lowValues;

/**
 * Provides the collection of `close-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *closeValues;

/**
 * Provides the collection of `open-values` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *openCoords;

/**
 * Provides the collection of `high-values` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *highCoords;

/**
 * Provides the collection of `low-values` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *lowCoords;

/**
 * Provides the collection of `close-values` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *closeCoords;

/**
 * Defines the value in pixels that determines each `Candlestick` width.
 */
@property (nonatomic) float dataPointWidthPx;

@end

NS_ASSUME_NONNULL_END
