//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIOhlcRenderableSeriesBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesBase.h"
#import "SCIOhlcRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * An abstract base class for `ISCIOhlcDataSeriesValues` based renderable series.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations. 
 */
@interface SCIOhlcRenderableSeriesBase : SCIRenderableSeriesBase

/**
 * Defines the `SCIPenStyle` used for wicks and outlines on up-candles, when `close > open`.
 */
@property (strong, nonatomic) SCIPenStyle *strokeUpStyle;

/**
 * Defines the `SCIPenStyle` used for wicks and outlines on down-candles, when `close < open`.
 */
@property (strong, nonatomic) SCIPenStyle *strokeDownStyle;

/**
 * Gets or sets a value between 0.0 and 1.0 which defines the fraction of available space each column should occupy.
 */
@property (nonatomic) double dataPointWidth;

/**
 * Creates a new instance of `SCIOhlcRenderableSeriesBase` class.
 * @param renderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 * @param nearestPointProvider The nearest point provider instance.
 */
- (instancetype)initWithRenderPassData:(SCIOhlcRenderPassData *)renderPassData hitProvider:(id<ISCIHitProvider>)hitProvider nearestPointProvider:(id<ISCINearestPointProvider>)nearestPointProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
