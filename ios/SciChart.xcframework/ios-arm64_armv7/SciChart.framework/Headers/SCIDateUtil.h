//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateUtil.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/// Provides date minimum seconds value
FOUNDATION_EXTERN const double DateMinSecondsValue;
/// Provides date maximum seconds value.
FOUNDATION_EXTERN const double DateMaxSecondsValue;

/// Provides date minimum ticks value
FOUNDATION_EXTERN const long DateMinTicksValue;
/// Provides date maximum ticks value.
FOUNDATION_EXTERN const long DateMaxTicksValue;

#define DATE_MIN_VALUE [NSDate dateWithTimeIntervalSince1970:DateMinSecondsValue]
#define DATE_MAX_VALUE [NSDate dateWithTimeIntervalSince1970:DateMaxSecondsValue]

/**
 * Helper class for work with `NSDate` values
 */
@interface SCIDateUtil : NSObject

/**
 * Checks if addition is valid for specified value.
 * @param current The current value to add to.
 * @param delta   The delta value to add.
 * @return YES - if addition is valid for current value.
 */
- (BOOL)isAdditionValid:(double)current delta:(double)delta;

/**
 * Adds the delta to specified value.
 * @param value The current value.
 * @param delta The delta value.
 * @return The new value.
 */
- (double)addDelta:(double)delta toValue:(double)value;

/**
 * Checks if specified value is divisible by passed interval.
 * @param date The value to check.
 * @param dateInterval The divider.
 * @return YES - if value is divisible by date interval.
 */
- (BOOL)isDate:(double)date divisibleBy:(double)dateInterval;

/**
 * Rounds up specified value to date interval.
 * @param value The value to round up.
 * @param dateInterval The date interval for rounding operation.
 * @return The rounded value.
 */
- (double)roundUp:(double)value withDateInterval:(double)dateInterval;

@end
