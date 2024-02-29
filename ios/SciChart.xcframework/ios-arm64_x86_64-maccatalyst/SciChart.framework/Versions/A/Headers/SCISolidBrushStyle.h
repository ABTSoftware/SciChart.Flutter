//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISolidBrushStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBrushStyle.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines brush style which allows to fill shapes with solid color.
 */
@interface SCISolidBrushStyle : SCIBrushStyle

/**
 * Provides default instance of `SCISolidBrushStyle`.
 */
@property (class, nonatomic, readonly) SCISolidBrushStyle *defaultBrushStyle __deprecated_msg("SCISolidBrushStyle.defaultBrushStyle is deprecated. Please use SCIBrushStyle.DEFAULT instead");

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new `SCISolidBrushStyle` instance.
 * @param colorCode The fill color `ARGB` code for this brush style.
 */
- (instancetype)initWithColorCode:(unsigned int)colorCode NS_REFINED_FOR_SWIFT;//NS_SWIFT_NAME(init(color:)) NS_DESIGNATED_INITIALIZER;

/**
 * Creates a new `SCISolidBrushStyle` instance.
 * @param color The fill color for this brush style.
 */
- (instancetype)initWithColor:(SCIColor *)color NS_REFINED_FOR_SWIFT;

@end

NS_ASSUME_NONNULL_END
