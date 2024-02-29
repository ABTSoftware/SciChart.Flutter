//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPoint2DSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import "SCIDoubleValues.h"
#import "SCIIntegerValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a strongly typed PointSeries of `Point2D` items, a subset of `X, Y` data used to resample points.
 */
@interface SCIPoint2DSeries : NSObject<ISCICleanable>

/**
 * Gets the collection of `X-Values`.
 */
@property (strong, nonatomic, readonly) SCIDoubleValues *xValues;

/**
 * Gets the collection of `Y-Values`.
 */
@property (strong, nonatomic, readonly) SCIDoubleValues *yValues;

/**
 * Defines the collection of `indices`.
 */
@property (strong, nonatomic, readonly) SCIIntegerValues *indices;

/**
 * Gets or sets the current count of this point series instance.
 */
@property (nonatomic) NSInteger count;

/**
 * Creates a new instance of `SCIPoint2DSeries`.
 * @param size The initial capacity of this `SCIPoint2DSeries` instance.
 */
- (instancetype)initWithSize:(NSInteger)size;

/**
 * Creates a new instance of `SCIPoint2DSeries`.
 * @param xValues The collection of `x-values`.
 * @param yValues The collection of `y-values`.
 * @param indices The collection of `indices`.
 */
- (instancetype)initWithXValues:(SCIDoubleValues *)xValues yValues:(SCIDoubleValues *)yValues indices:(SCIIntegerValues *)indices;

/**
 * Clears and disposes allocated memory
 */
- (void)disposeItems;

@end

NS_ASSUME_NONNULL_END
