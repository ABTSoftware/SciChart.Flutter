//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateTickProvider+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDeltaTickProvider+Protected.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCIDateTickProvider`.
 */
@interface SCIDateTickProvider (Protected)

/**
 * When overridden in a derived class, Rounds up the current `value` to the nearest one specified by `delta` value.
 * @param value The current value.
 * @param delta The delta.
 * @return The rounded value.
 */
- (double)roundUp:(double)value withDelta:(double)delta;

/**
 * When overridden in a derived class, Adds the `value` value to the nearest one specified by `delta` value.
 * @param value The current value.
 * @param delta The delta.
 * @return The addition result.
 */
- (double)addDelta:(double)delta toValue:(double)value;

/**
 * When overridden in a derived class, Determines whether the `date` value is divisible by `delta` value.
 * @param date The current date value.
 * @param delta The delta.
 * @return True if `date` value is divisible by `delta` value.
 */
- (BOOL)isDate:(double)date divisibleBy:(double)delta;

@end
