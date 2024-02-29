//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFastCandlestickRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIOhlcRenderableSeriesBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides Fast Candlestick series rendering, however makes the assumption that all `X-Data` is evenly spaced. Gaps in the data are collapsed.
 */
@interface SCIFastCandlestickRenderableSeries : SCIOhlcRenderableSeriesBase

/**
 * Defines the `SCIBrushStyle` used by candle body on up-candles, when `close > open`.
 */
@property (strong, nonatomic) SCIBrushStyle *fillUpBrushStyle;

/**
 * Defines the `SCIBrushStyle` used by candle body on down-candles, when `close < open`.
 */
@property (strong, nonatomic) SCIBrushStyle *fillDownBrushStyle;

/**
 * Creates a new instance of `SCIFastCandlestickRenderableSeries` class.
 */
- (instancetype)init;

@end

NS_ASSUME_NONNULL_END
