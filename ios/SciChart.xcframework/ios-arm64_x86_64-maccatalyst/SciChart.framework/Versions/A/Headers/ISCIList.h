//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIList.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDoubleValuesProvider.h"
#import "ISCIComparable.h"
#import "ISCIRange.h"
#import "ISCIValues.h"
#import "SCISearchMode.h"

/**
 * Defines the protocol for a high-performance array-backed list type.
 */
@protocol ISCIList <ISCIDoubleValuesProvider>

/**
 * Gets the start index in internal items array.
 */
@property (nonatomic, readonly) NSInteger startIndex;

/**
 * Defines the number of elements in this list.
 */
@property (nonatomic) NSInteger count;

#pragma mark - generic list Protocol

/**
 * Appends the specified element to the end of this list.
 * @param number The element to be added.
 */
- (void)add:(id<ISCIComparable>)number;

/**
 * Inserts the specified element at the specified position in this list.
 * @param number The element to be inserted.
 * @param index The index at which the specified element will be inserted.
 */
- (void)insert:(id<ISCIComparable>)number at:(NSInteger)index;

/**
 * Returns the element at the specified position in this list.
 * @param index The index of the element to return.
 * @return The element at the specified position in this list.
 */
- (id<ISCIComparable>)valueAt:(NSInteger)index;

/**
 * Replaces the element at the specified position in this list with the specified element.
 * @param value The element to be stored at the specified position.
 * @param index The index of the element to replace.
 */
- (void)setValue:(id<ISCIComparable>)value at:(NSInteger)index;

/**
 * Returns the index of the first occurrence of the specified element in this list, or -1 if this list does not contain the element.
 * @param value The element to search for.
 * @return The index of the first occurrence of the specified element in this list, or -1 if this list does not contain the element.
 */
- (NSInteger)indexOf:(id<ISCIComparable>)value;

/**
 * Removes the first occurrence of the specified element from this list, if it is present.
 * If this list does not contain the element, it is unchanged.
 * @param number The element to be removed from this list, if present.
 */
- (void)remove:(id<ISCIComparable>)number;

/**
 * Removes the element at the specified position in this list.
 * @param index The index of the element to be removed.
 */
- (void)removeAt:(NSInteger)index;

/**
 * Removes a range of items from list.
 * @param index The start location to remove items at.
 * @param count The amount of items to remove.
 */
- (void)removeRangeAt:(NSInteger)index count:(NSInteger)count;

/**
 * Removes all of the elements from this list. The list will be empty after this call returns.
 */
- (void)clear;

/**
 * Returns YES if, and only if, the count is 0.
 * @return YES if count is 0, otherwise - NO.
 */
- (BOOL)isEmpty;

#pragma mark - ISCIList

/**
 * Gets the minimum and maximum items of this list.
 * @param range Range to hold minimum and maximum items.
 */
- (void)getMinMax:(id<ISCIRange>)range;

/**
 * Gets the minimum and maximum items in specified range of this list.
 * @param startIndex Start index in this list to search min/max.
 * @param endIndex End index in this list to search min/max.
 * @param range Range to hold minimum and maximum items.
 */
- (void)getMinMax:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Gets the positive minimum and positive maximum items in specified range of this list.
 * @param startIndex Start index in this list to search min/max.
 * @param endIndex End index in this list to search min/max.
 * @param range Range to hold minimum and maximum items.
 */
- (void)getMinMaxPositive:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Adds a range of items to the list.
 * @param values The items to add.
 */
- (void)addValues:(id<ISCIValues>)values;

/**
 * Insert a range of items to the list at specified location.
 * @param values The items to insert.
 * @param index The location to insert items at.
 */
- (void)insertValues:(id<ISCIValues>)values at:(NSInteger)index;

/**
 * Adds a range of items to the list.
 * @param array The items to add.
 */
- (void)addArray:(NSArray<id<ISCIComparable>> *)array;

/**
 * Insert a range of items to the list at specified location.
 * @param array The items to insert.
 * @param index The location to insert items at.
 */
- (void)insertArray:(NSArray<id<ISCIComparable>> *)array at:(NSInteger)index;

/**
 * Replaces items at specified location on provided items.
 * @param array The items to set.
 * @param index The location to set items at.
 */
- (void)setArray:(NSArray<id<ISCIComparable>> *)array at:(NSInteger)index;

/**
 * Replaces items at specified location on provided items.
 * @param values The items to set.
 * @param index The location to set items at.
 */
- (void)setValues:(id<ISCIValues>)values at:(NSInteger)index;

/**
 * Returns an `NSArray` containing all of the elements in this list in propersequence.
 */
- (NSArray<id<ISCIComparable>> *)toArray;

/**
 * Checks if specified list contains NaN in specified range
 * @param startIndex The start index of range to check
 * @param count The amount of values to check in range
 * @return True if contains NaN, otherwise false
 */
- (BOOL)containsNaNFrom:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks if specified list is sorted in ascending order in specified range
 * @param startIndex The start index of range to check
 * @param count The amount of values to check in range
 * @return True if sorted ascending, otherwise false
 */
- (BOOL)isSortedAscendingFrom:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Calculates spacing for specified list in specified range
 * @param startIndex The start index of range to check
 * @param count The amount of values to check in range
 * @param epsilon The presion during calculation
 * @return If value is greater than 0 data then returned value is calculated spacing, otherwise data isn't evenly spaced
 */
- (double)isEvenlySpacedFrom:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

#pragma mark - Smart List

/**
 * Finds value with specified search mode in this list.
 * @param value The value to find.
 * @param searchMode The search mode.
 * @param isSorted The flag which specified whether of not list is sorted in ascending order
 * @return The index of item in list.
 */
- (NSInteger)findIndexOf:(id<ISCIComparable>)value searchMode:(SCISearchMode)searchMode isSorted:(BOOL)isSorted;

@end
