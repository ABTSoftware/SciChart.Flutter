//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCICoordinateCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRange.h"
#import <CoreGraphics/CGBase.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Using pre-computed constants, types which implement `ISCICoordinateCalculator` can convert from `pixel coordinate` to `data value` and back.
 */
@protocol ISCICoordinateCalculator <NSObject>

/**
 * Transforms a data value into a pixel coordinate.
 * @param dataValue The data value to transform.
 * @return The pixel coordinate.
 */
- (float)getCoordinateFrom:(double)dataValue NS_SWIFT_NAME(getCoordinate(_:));;

/**
 * Transforms a pixel coordinate into a data value.
 * @param coordinate The pixel coordinate to transform.
 * @return The data value.
 */
- (double)getDataValueFrom:(float)coordinate NS_SWIFT_NAME(getDataValue(_:));

/**
 * Transforms data values into a pixel coordinates.
 * @param coordinates The target array for pixel coordinates.
 * @param dataValues The data value to transform.
 * @param count Amount of points to transform.
 */
- (void)getCoordinates:(float *)coordinates fromDataValues:(double *)dataValues count:(NSInteger)count;

/**
 * Transforms pixel coordinates into a data values.
 * @param dataValues The target array for data values.
 * @param coordinates pixel coordinates to transform.
 * @param count Amount of points to transform.
 */
- (void)getDataValues:(double *)dataValues fromCoordinates:(float *)coordinates count:(NSInteger)count;

/**
 * Gets the axis min value of visible range.
 */
@property (nonatomic, readonly) double minAsDouble;

/**
 * Gets the axis max value of visible range.
 */
@property (nonatomic, readonly) double maxAsDouble;

/**
 * Gets the axis viewport size.
 * @note Provided size is in user space coordinates.
 */
@property (nonatomic, readonly) CGFloat viewportDimension;

/**
 * Gets a value indicating whether this is a category axis coordinate calculator.
 * @note YES -  if this is a category axis coordinate calculator.
 */
@property (nonatomic, readonly) BOOL isCategoryAxisCalculator;

/**
 * Gets a value indicating whether this is a logarithmic axis coordinate calculator.
 * @note YES - if this is a logarithmic axis coordinate calculator.
 */
@property (nonatomic, readonly) BOOL isLogarithmicAxisCalculator;

/**
 * Gets a value indicating whether this is a horizontal axis coordinate calculator.
 * @note YES - if this is a horizontal axis coordinate calculator.
 */
@property (nonatomic, readonly) BOOL isHorizontalAxisCalculator;

/**
 * Gets a value indicating whether this coordinate calculator belongs by `X-Axis`.
 * @note YES - if this coordinate calculator belongs by `X-Axis`.
 */
@property (nonatomic, readonly) BOOL isXAxisCalculator;

/**
 * Gets a value indicating whether coordinates are flipped.
 * @note YES - if coordinate are flipped.
 */
@property (nonatomic, readonly) BOOL hasFlippedCoordinates;

/**
 * Gets a coordinate offset in pixels.
 */
@property (nonatomic, readonly) CGFloat coordinatesOffset;

/**
 * Translates the min and max of the input range by the specified data value.
 * @param range The range to translate.
 * @param pixels The number of pixels to translate by.
 */
- (void)translateRange:(id<ISCIRange>)range byPixels:(CGFloat)pixels;

@end

NS_ASSUME_NONNULL_END
