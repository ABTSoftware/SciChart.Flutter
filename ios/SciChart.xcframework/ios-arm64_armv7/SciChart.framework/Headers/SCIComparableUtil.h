//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIComparableUtil.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIDataType.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines helper class for works with `ISCIComparable`.
 */
@interface SCIComparableUtil : NSObject

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedByte:(char)arg;

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedShort:(short)arg;

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedInt:(int)arg;

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedLong:(long)arg;

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedFloat:(float)arg;

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedDouble:(double)arg;

/**
 * Checks if specified argument is defined.
 * @param arg The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefinedDate:(NSDate *)arg;

/**
 * Checks if specified double value can be converted to byte.
 * @param value The value to check.
 * @return YES if value can be converted to byte.
 */
+ (BOOL)canConvertToByte:(double)value;

/**
 * Checks if specified double value can be converted to short.
 * @param value The value to check.
 * @return YES if value can be converted to short.
 */
+ (BOOL)canConvertToShort:(double)value;

/**
 * Checks if specified double value can be converted to int.
 * @param value The value to check.
 * @return YES if value can be converted to int.
 */
+ (BOOL)canConvertToInt:(double)value;

/**
 * Checks if specified double value can be converted to long.
 * @param value The value to check.
 * @return YES if value can be converted to long.
 */
+ (BOOL)canConvertToLong:(double)value;

/**
 * Checks if specified double value can be converted to float.
 * @param value The value to check.
 * @return YES if value can be converted to float.
 */
+ (BOOL)canConvertToFloat:(double)value;

/**
 * Checks if specified double value can be converted to `NSDate`.
 * @param value The value to check.
 * @return YES if value can be converted to `NSDate`.
 */
+ (BOOL)canConvertToDate:(double)value;

/**
 * Converts comparable to its double representation.
 * @param comparable The comparable to convert.
 * @return The double representation of the value.
 */
+ (double)toDouble:(id<ISCIComparable>)comparable;

/**
 * Converts comparable to its `NSDate` representation.
 * @param comparable The comparable to convert.
 * @return The Date representation of the value.
 */
+ (NSDate *)toDate:(nullable id<ISCIComparable>)comparable;

/**
 * Checks if specified argument is defined.
 * @param comparable The argument to check.
 * @return YES if argument value is defined.
 */
+ (BOOL)isDefined:(nullable id<ISCIComparable>)comparable;

/**
 * Converts double value to specified Comparable type.
 * @param rawDataValue The double value to convert.
 * @param type The type of target to convert to.
 * @return The converted value.
 */
+ (nullable id<ISCIComparable>)fromDouble:(double)rawDataValue type:(SCIDataType)type;

/**
 * Gets smaller of two `ISCIComparable` values.
 * @param value1 The first argument.
 * @param value2 The second argument.
 * @return The min value.
 */
+ (id<ISCIComparable>)min:(id<ISCIComparable>)value1 and:(id<ISCIComparable>)value2;

/**
 * Gets bigger of two `ISCIComparable` values.
 * @param value1 The first argument.
 * @param value2 The second argument.
 * @return The max value.
 */
+ (id<ISCIComparable>)max:(id<ISCIComparable>)value1 and:(id<ISCIComparable>)value2;

/**
 * Compares two `ISCIComparable` values.
 * @param a The first argument.
 * @param b The second argument.
 * @return `NSOrderedAscending` if the value of aNumber is greater than the number object’s, `NSOrderedSame` if they’re equal, and `NSOrderedDescending` if the value of `obj` is less than the number object’s.
 */
+ (NSComparisonResult)compare:(id<ISCIComparable>)a and:(id<ISCIComparable>)b;

@end

NS_ASSUME_NONNULL_END
