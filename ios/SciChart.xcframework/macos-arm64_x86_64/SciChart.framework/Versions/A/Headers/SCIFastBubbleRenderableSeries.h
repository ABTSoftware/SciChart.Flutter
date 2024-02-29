//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFastBubbleRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzRenderableSeriesBase.h"
#import "SCIBubbleRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a Bubble-chart renderable series, supporting rendering of bubbles using Z data, positioned using X-Y data.
 * @note Bubbles are defined using the `SCIFastBubbleRenderableSeries.bubbleBrushStyle` property, but rendered as a soft-edged circle which fades to transparent in the centre.
 */
@interface SCIFastBubbleRenderableSeries : SCIXyzRenderableSeriesBase

/// :nodoc:
@property (class, nonatomic, readonly) int maxBubbleSizeInPixels;

/**
 * Defines whether `Z-range` should be automatically scaled.
 * @note If YES - then depending on the `X, Y, Z` points in the viewport, the size of bubbles will be scaled to fit. Else, the size of bubbles will be absolute.
 */
@property (nonatomic) BOOL autoZRange;

/**
 * Gets or sets the style which is used to fill bubbles.
 */
@property (strong, nonatomic) SCIBrushStyle *bubbleBrushStyle;

/**
 * Defines a `Z-scaling` factor, equal to Pixels divided by `Z-Unit`.
 * @note If `autoZrange` is NO, `Z-value` is multiplied by `zScale` is bubble radius in pixels.
 */
@property (nonatomic) double zScaleFactor;

/**
 * Creates a new instance of `SCIFastBubbleRenderableSeries` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCIFastBubbleRenderableSeries` class.
 * @param renderPassData The render pass data instance.
 * @param hitProvider The hit provider instance.
 * @param nearestPointProvider The nearest point provider instance.
 */
- (instancetype)initWithRenderPassData:(SCIBubbleRenderPassData *)renderPassData hitProvider:(id<ISCIHitProvider>)hitProvider nearestPointProvider:(id<ISCINearestPointProvider>)nearestPointProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
