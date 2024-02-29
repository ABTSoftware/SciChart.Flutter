//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIComparable.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Provides a protocol that can be compared. The `ISCIComparable` is used for types that have inherent orter, such as `NSNumber` and `NSDate`.
 */
@protocol ISCIComparable <NSObject>

/**
 * Returns an NSComparisonResult value that indicates whether the number object’s value is greater than, equal to, or less than a given `ISCIComparable`.
 * @return `NSOrderedAscending` if the value of aNumber is greater than the number object’s, `NSOrderedSame` if they’re equal, and `NSOrderedDescending` if the value of `obj` is less than the number object’s.
 */
- (NSComparisonResult)compareTo:(nonnull NSObject *)obj;

/**
 * Converts this comparable iinstalce to primitive `double` value.
 * @return Unboxed primitive value of the this `ISCIComparable` instance.
 */
- (double)toDouble;

/**
 * Converts this comparable instance to `NSDate`
 * @return The converted `NSDate` instance.
 */
- (nonnull NSDate *)toDate;

/**
 * Needed to be able to cast implementors to `ISCIComparable` on Xamarin.iOS side, since it's impossible there.
 */
- (nonnull id<ISCIComparable>)toComparable;

/**
 * Checks whether this `ISCIComparable` instance is defined.
 */
@property (nonatomic, readonly) BOOL isDefined;

@end
