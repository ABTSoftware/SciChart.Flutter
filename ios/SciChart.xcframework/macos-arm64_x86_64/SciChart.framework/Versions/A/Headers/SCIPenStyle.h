//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPenStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIStyle.h"
#import "ISCIStrokePaint.h"
#import "SCIColor.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class for specifying of 2D line style used to draw lines on the `ISCIRenderSurface`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 * @see `SCISolidPenStyle`.
 * @see `SCILinearGradientPenStyle`.
 * @see `SCIRadialGradientPenStyle`.
 * @see `SCITexturePenStyle`.
 */
@interface SCIPenStyle : SCIStyle<NSCopying>

/**
 * Provides default instance of `SCISolidPenStyle`.
 */
@property (class, nonatomic, readonly) SCIPenStyle *DEFAULT;

/**
 * Provides transparent (clear) instance of `SCISolidPenStyle`.
 */
@property (class, nonatomic, readonly) SCIPenStyle *TRANSPARENT;

/**
 * Gets the `ARGB` color code.
 */
@property (nonatomic, readonly) unsigned int colorCode;

/**
 * Gets the `ARGB` color.
 */
@property (nonatomic, readonly) SCIColor *color;

/**
 * Gets the stroke dash pattern.
 */
@property (strong, nonatomic, readonly, nullable) NSArray<NSNumber *> *strokeDashArray;

/**
 * Gets the value indicating whether the pen should use antialiased or no.
 */
@property (nonatomic, readonly) BOOL antiAliasing;

/**
 * Gets the stroke thickness in pixels.
 */
@property (nonatomic, readonly) float thickness;

/**
 * Gets the `ISCIStrokePaint` which might be used to draw this Pen on `CGContextRef`.
 */
@property (nonatomic, readonly) id<ISCIStrokePaint> paint;
/**
 * Creates a new `SCIPenStyle` instance.
 * @param antiAliasing The value indicating whether the pen should use antialiasing or no.
 * @param thickness The stroke thickness in pixels.
 * @param strokeDashArray The stroke dash pattern.
 */
- (instancetype)initWithThickness:(float)thickness antiAliasing:(BOOL)antiAliasing strokeDashArray:(nullable NSArray<NSNumber *> *)strokeDashArray NS_DESIGNATED_INITIALIZER;

/**
 * Returns a Boolean value that indicates whether the receiver and a given object are equal.
 * @param penStyle The pen style to be compared to the receiver. May be `nil`, in which case this method returns NO.
 * @return YES if the receiver and anObject are equal, otherwise - NO.
 */
- (BOOL)isEqualToPenStyle:(nullable SCIPenStyle *)penStyle;

@end

NS_ASSUME_NONNULL_END
