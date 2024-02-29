//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGradientBrushStyle.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIUnsignedIntegerValues.h"
#import "SCIFloatValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * An abstract base class that describes a gradient, composed of gradient stops. Classes that inherit from `SCIGradientBrushStyle` describe different ways of interpreting gradient stops.
 * @see `SCILinearGradientBrushStyle`.
 * @see `SCIRadialGradientBrushStyle`.
 */
@interface SCIGradientBrushStyle : SCIBrushStyle

/**
 * Gets the `SCIUnsignedIntegerValues` with gradient colors.
 */
@property (nonatomic, readonly) SCIUnsignedIntegerValues *colors;

/**
 * Gets the `SCIFloatValues` with gradient stops.
 */
@property (nonatomic, readonly) SCIFloatValues *stops;

/**
 * Gets the `CGGradientRef` created from this `SCIGradientBrushStyle` instance.
 */
@property (nonatomic, readonly) CGGradientRef cgGradient;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIGradientBrushStyle`.
 * @param colors The `SCIUnsignedIntegerValues` with gradient colors.
 * @param stops The `SCIFloatValues` with gradient stops.
 */
- (instancetype)initWithColorValues:(SCIUnsignedIntegerValues *)colors stopValues:(SCIFloatValues *)stops NS_DESIGNATED_INITIALIZER;

/**
 * Returns a Boolean value that indicates whether the receiver and a given object are equal.
 * @param brushStyle The brush style to be compared to the receiver. May be `nil`, in which case this method returns NO.
 * @return YES if the receiver and anObject are equal, otherwise - NO.
 */
- (BOOL)isEqualToBrushStyle:(nullable SCIGradientBrushStyle *)brushStyle;

@end

NS_ASSUME_NONNULL_END
