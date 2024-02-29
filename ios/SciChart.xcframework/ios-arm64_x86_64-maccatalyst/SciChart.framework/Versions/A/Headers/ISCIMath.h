//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIMath.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIComparable.h"
#import "NSNumber+ISCIComparable.h"
#import "NSDate+ISCIComparable.h"
#import "SCIComparableUtil.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a generic math helper.
 */
@protocol ISCIMath <NSObject>

/**
 * Gets the min value.
 */
@property (nonatomic, readonly) id<ISCIComparable> minValue;

/**
 * Gets the max value.
 */
@property (nonatomic, readonly) id<ISCIComparable> maxValue;

/**
 * Gets zero value.
 */
@property (nonatomic, readonly) id<ISCIComparable> zeroValue;

/**
 * Gets maximum value of a and b.
 * @param a The first value to compare.
 * @param b The second value to compare.
 * @return The max value.
 */
- (id<ISCIComparable>)max:(id<ISCIComparable>)a and:(id<ISCIComparable>)b;
    
/**
 * Gets minimum value of a and b.
 * @param a The first value to compare.
 * @param b The second value to compare.
 * @return The min value.
 */
- (id<ISCIComparable>)min:(id<ISCIComparable>)a and:(id<ISCIComparable>)b;

/**
 * Checks whether specified value is NaN value.
 * @param value The value to check.
 * @return True if value is NaN.
 */
- (BOOL)isNan:(id<ISCIComparable>)value;

/**
 * Checks whether specified value is zero value.
 * @param value The value to check.
 * @return YES if value is zero in current math, otherwise - NO.
 */
- (BOOL)isZeroValue:(id<ISCIComparable>)value;

/**
 * Converts specified value to it's double equivalent.
 * @param value The value to convert.
 * @return The double representation.
 */
- (double)toDouble:(id<ISCIComparable>)value;

/**
 * Converts specified value from it's double equivalent.
 * @param value The double equivalent.
 * @return The value.
 */
- (id<ISCIComparable>)fromDouble:(double)value;

/**
 * Multiplies lhs * rhs.
 * @param lhs The first argument.
 * @param rhs The second argument.
 * @return The result of multiplication.
 */
- (id<ISCIComparable>)mult:(id<ISCIComparable>)lhs byDouble:(double)rhs;

/**
 * Multiplies lhs * rhs.
 * @param lhs The first argument.
 * @param rhs The second argument.
 * @return The result of multiplication.
 */
- (id<ISCIComparable>)mult:(id<ISCIComparable>)lhs byInt:(int)rhs;

/**
 * Adds lhs + rhs.
 * @param lhs The first argument.
 * @param rhs The second argument.
 * @return The result of addition.
 */
- (id<ISCIComparable>)add:(id<ISCIComparable>)lhs to:(id<ISCIComparable>)rhs;

/**
 * Subtracts lhs - rhs.
 * @param rhs The second argument.
 * @param lhs The first argument.
 * @return The result of subtraction.
 */
- (id<ISCIComparable>)subtract:(id<ISCIComparable>)rhs from:(id<ISCIComparable>)lhs;

/**
 * Increments value by 1.
 * @param value The value to increment.
 * @return The incremented value.
 */
- (id<ISCIComparable>)inc:(id<ISCIComparable>)value;

/**
 * Decrements value by 1.
 * @param value The value to decrement.
 * @return The decremented value.
 */
- (id<ISCIComparable>)dec:(id<ISCIComparable>)value;

/**
 * Compares lhs and rhs values.
 * @param lhs The first argument.
 * @param rhs The second argument.
 * @return `NSOrderedAscending`, `NSOrderedSame`, or `NSOrderedDescending` if lhs is less than, equal to, or greater than rhs.
 */
- (NSComparisonResult)compare:(id<ISCIComparable>)lhs to:(id<ISCIComparable>)rhs;

@end

NS_ASSUME_NONNULL_END
