//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILinearGradientBrushStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGradientBrushStyle.h"
#import "SCIUnsignedIntegerValues.h"
#import "SCIFloatValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines brush style which allows to fill shapes with linear gradient.
 */
@interface SCILinearGradientBrushStyle : SCIGradientBrushStyle

/**
 * Gets the start point for linear gradient.
 */
@property (nonatomic, readonly) CGPoint start;

/**
 * Gets the end point for linear gradient.
 */
@property (nonatomic, readonly) CGPoint end;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param startColor The start color of the gradient.
 * @param endColor The end color of the gradient.
 */
- (instancetype)initWithStartColor:(SCIColor *)startColor endColor:(SCIColor *)endColor NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param start The start point for linear gradient.
 * @param end The end point for linear gradient.
 * @param startColor The start color of the gradient.
 * @param endColor The end color of the gradient.
 */
- (instancetype)initWithStart:(CGPoint)start end:(CGPoint)end startColor:(SCIColor *)startColor endColor:(SCIColor *)endColor NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param startColor The start color code of the gradient.
 * @param endColor The end color code of the gradient.
 */
- (instancetype)initWithStartColorCode:(unsigned int)startColor endColorCode:(unsigned int)endColor NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param start The start point for linear gradient.
 * @param end The end point for linear gradient.
 * @param startColor The start color code of the gradient.
 * @param endColor The end color code of the gradient.
 */
- (instancetype)initWithStart:(CGPoint)start end:(CGPoint)end startColorCode:(unsigned int)startColor endColorCode:(unsigned int)endColor NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param colors The array with gradient colors.
 * @param stops The array with gradient stops.
 * @param count The count of color and stops.
 */
- (instancetype)initWithColors:(const unsigned int *)colors stops:(const float *)stops count:(int)count NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param start The start point for linear gradient.
 * @param end The end point for linear gradient.
 * @param colors The array with gradient colors.
 * @param stops The array with gradient stops.
 * @param count The count of color and stops.
 */
- (instancetype)initWithStart:(CGPoint)start end:(CGPoint)end colors:(const unsigned int *)colors stops:(const float *)stops count:(int)count NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCILinearGradientBrushStyle`.
 * @param start The start point for linear gradient.
 * @param end The end point for linear gradient.
 * @param colors The `SCIUnsignedIntegerValues` with gradient colors.
 * @param stops The `SCIFloatValues` with gradient stops.
 */
- (instancetype)initWithStart:(CGPoint)start end:(CGPoint)end colorValues:(SCIUnsignedIntegerValues *)colors stopValues:(SCIFloatValues *)stops NS_DESIGNATED_INITIALIZER;

/// :nodoc:
- (instancetype)initWithColorValues:(SCIUnsignedIntegerValues *)colors stopValues:(SCIFloatValues *)stops NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
