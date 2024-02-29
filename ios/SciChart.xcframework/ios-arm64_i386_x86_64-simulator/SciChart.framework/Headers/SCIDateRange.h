//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateRange.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRangeBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a range of type `NSDate`.
 */
@interface SCIDateRange : SCIRangeBase

/**
 * Helper factory method for creating default `SCIDateRange` with non zero values.
 * @return new `SCIDateRange` instance where min - the day before current date, max - the day after current date.
 */
+ (instancetype)defaultNonZeroRange;

/**
 * Gets or sets the min value of this range.
 */
@property (strong, nonatomic) NSDate *min;

/**
 * Gets or sets the max value of this range.
 */
@property (strong, nonatomic) NSDate *max;

/**
 * Gets the difference (max - min) of this range.
 */
@property (nonatomic, readonly) NSDate * diff;

/**
 * Initializes a new instance of `SCIDateRange`.
 * @param min The min value to initialize range with.
 * @param max The max value to initialize range with.
 */
- (instancetype)initWithMin:(NSDate *)min max:(NSDate *)max;

/**
 * Initializes a new instance of `SCIDateRange`.
 * @param range The `SCIDateRange` instance to initialize new range with.
 */
- (instancetype)initWithRange:(SCIDateRange *)range;

/**
 * Sets the min, max values on the `ISCIRange`.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setMinTo:(NSDate *)min maxTo:(NSDate *)max;

/**
 * Sets the min, max values on the `ISCIRange` without equals checks.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setForcedMinTo:(NSDate *)min maxTo:(NSDate *)max;

/**
 * Performs the union of two `ISCIRange` instances.
 * @param min The min value.
 * @param max The max value.
 */
- (void)unionWithMin:(NSDate *)min max:(NSDate *)max;

@end

NS_ASSUME_NONNULL_END
