//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIColorMap.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIColor.h"
#import "SCIUnsignedIntegerValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a color map for `SCIFastUniformHeatmapRenderableSeries`.
 */
@interface SCIColorMap : NSObject

/**
 * The color map colors.
 */
@property (strong, nonatomic, readonly) NSArray<SCIColor *> *colors;

/**
 * The color map stop points.
 */
@property (strong, nonatomic, readonly) NSArray<NSNumber *> *stops;

/**
 * Creates a new instance of `SCIColorMap` class.
 * @param colors The colors used by this color map.
 * @param stops The stops used by this color map.
 */
- (instancetype)initWithColors:(NSArray<SCIColor *> *)colors andStops:(NSArray<NSNumber *> *)stops;

/**
 * Creates a new instance of `SCIColorMap` class.
 * @param startColor The start color.
 * @param endColor The end color.
 */
- (instancetype)initWithStartColor:(SCIColor *)startColor endColor:(SCIColor *)endColor;

/**
 * Interpolates a data-value in a `SCIColorMap`.
 * @param value The value to interpolate color for.
 * @return A linear interpolated color.
 */
- (SCIColor *)lerpColorForValue:(double)value;

/**
 * Helper method which creates `SCIIntegerValues` bitmap data from `SCIColorMap` instance.
 * @param colorMap The color map.
 * @param width The width of bitmap.
 * @param height The height of bitmap.
 * @return The `SCIUnsignedIntegerValues` bitmap data.
 */
+ (SCIUnsignedIntegerValues *)createColorMapBitmap:(SCIColorMap *)colorMap width:(int)width height:(int)height;

@end

NS_ASSUME_NONNULL_END
