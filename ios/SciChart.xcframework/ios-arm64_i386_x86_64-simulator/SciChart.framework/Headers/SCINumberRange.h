//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCINumberRange.h is part of SCICHART®, High Performance Scientific Charts
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
#import "NSNumber+ISCIComparable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class for all numeric ranges.
 */
@interface SCINumberRange : SCIRangeBase

/**
 * Gets or sets the min value of this range.
 */
@property (strong, nonatomic) NSNumber *min;

/**
 * Gets or sets the max value of this range.
 */
@property (strong, nonatomic) NSNumber *max;

/**
 * Gets the difference (max - min) of this range.
 */
@property (readonly, nonatomic) NSNumber *diff;

/**
 * Sets the min, max values on the `ISCIRange`.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setMinTo:(NSNumber *)min maxTo:(NSNumber *)max;

/**
 * Sets the min, max values on the `ISCIRange` without equals checks.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setForcedMinTo:(NSNumber *)min maxTo:(NSNumber *)max;

/**
 * Performs the union of two `ISCIRange` instances.
 * @param min The min value.
 * @param max The max value.
 */
- (void)unionWithMin:(NSNumber *)min max:(NSNumber *)max;

@end

NS_ASSUME_NONNULL_END
