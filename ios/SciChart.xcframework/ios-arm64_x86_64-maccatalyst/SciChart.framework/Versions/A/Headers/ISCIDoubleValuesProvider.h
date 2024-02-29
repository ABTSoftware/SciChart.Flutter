//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDoubleValuesProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDoubleValues.h"
#import "SCIIntegerValues.h"
#import "SCISearchMode.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a collection which can represented as sequence of double values.
 */
@protocol ISCIDoubleValuesProvider <NSObject>

/**
 * Returns the number of elements in this provider.
 */
@property (nonatomic, readonly) NSInteger count;

/**
 * Gets the double representation of item at specified index
 * @param index The index to get item at
 */
- (double)getDoubleValueAt:(NSInteger)index;

/**
 * Gets the items of list at specified indices and sets them as double values.
 * @param doubleValues The target collection to add item to.
 * @param indices The collection of indices to get items at.
 */
- (void)getDoubleValues:(SCIDoubleValues *)doubleValues indices:(SCIIntegerValues *)indices;

/**
 * Gets the items of list at specified start index and sets them as double values.
 * @param doubleValues The target collection to add item to.
 * @param startIndex The index to start at.
 * @param count The amount of items to be retrieved.
 */
- (void)getDoubleValues:(SCIDoubleValues *)doubleValues startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds value by its double representation with specified search mode in this list.
 * @param doubleValue The double representation of value to find
 * @param searchMode The search mode.
 * @return The index of item in list.
 */
- (NSInteger)findIndexOfDoubleValue:(double)doubleValue searchMode:(SCISearchMode)searchMode isSorted:(BOOL)isSorted;

@end

NS_ASSUME_NONNULL_END
