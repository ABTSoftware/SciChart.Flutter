//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIListUtilProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISearchMode.h"
#import "ISCIRange.h"

#pragma mark - !!! this file is autogenerated !!!

/**
 * Defines interface with SciListUtil methods.
 */
@protocol ISCIListUtilProvider

#pragma mark - < --- ISCIListUtilProvider methods for Char --- >

/**
 * Finds the maximum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The maximum value of array.
 */
- (char)maxChar:(const char *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The minimum value of array.
 */
- (char)minChar:(const char *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxChar:(const char *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Finds the positive minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxCharPositive:(const char *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Copies elements of the srcArray at specified indices to the dstArray.
 * @param srcArray  The source array to copy from.
 * @param baseIndex The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray The destination array to copy to.
 * @param indices   The collection of indices to get items at.
 * @param count     The amount of values to copy.
 */
- (void)getCharValues:(const char *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray indices:(const int *)indices count:(NSInteger)count;

/**
 * Copies batch elements of the srcArray to the dstArray.
 * @param srcArray   The source array to copy from.
 * @param baseIndex  The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray  The destination array to copy to.
 * @param startIndex The startIndex to start copy from.
 * @param count      The amount of values to copy.
 */
- (void)getCharValues:(const char *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds the index of the item in the array according to desired `SCISearchMode`.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param count The amount of items to search in.
 * @param isSorted If true will use fast binary search.
 * @param value The value to search.
 * @param searchMode The search mode options.
 * @return The index of value, or -1 if not found.
 */
- (NSInteger)findIndexInCharArray:(const char *)array startIndex:(NSInteger)startIndex count:(NSInteger)count isSorted:(BOOL)isSorted value:(char)value searchMode:(SCISearchMode)searchMode;

/**
 * Checks whether the array is sorted ascending in specified range.
 * @param array The array to check.
 * @param startIndex The start index of sequences to check.
 * @param count The amount of point in sequence to check.
 * @return True if items in sequence is sorted in ascending order.
 */
- (BOOL)isCharArraySortedAscending:(const char *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks whether data in the array region is evenly spaced and calculated space between data if it true.
 * @param array The array to process.
 * @param startIndex The start index index of sequence to process.
 * @param count The size of data sequence to processs.
 * @param epsilon The epsilon value.
 * @return If data is evenly spaced returns positive value with calculated space, otherwise returns negative value.
 */
- (double)calculateIsCharArrayEvenlySpaced:(const char *)array startIndex:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

/**
 * Checks wheter data in array region contains NaN values
 * @param array The array to use
 * @param startIndex The start index of sequence to process
 * @param count The size of data sequence to process
 * @return If data sequence contains NaN value returns true, otherwise returns false
 */ 
- (BOOL)containsNaNCharArray:(const char *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

#pragma mark - < --- ISCIListUtilProvider methods for Short --- >

/**
 * Finds the maximum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The maximum value of array.
 */
- (short)maxShort:(const short *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The minimum value of array.
 */
- (short)minShort:(const short *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxShort:(const short *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Finds the positive minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxShortPositive:(const short *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Copies elements of the srcArray at specified indices to the dstArray.
 * @param srcArray  The source array to copy from.
 * @param baseIndex The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray The destination array to copy to.
 * @param indices   The collection of indices to get items at.
 * @param count     The amount of values to copy.
 */
- (void)getShortValues:(const short *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray indices:(const int *)indices count:(NSInteger)count;

/**
 * Copies batch elements of the srcArray to the dstArray.
 * @param srcArray   The source array to copy from.
 * @param baseIndex  The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray  The destination array to copy to.
 * @param startIndex The startIndex to start copy from.
 * @param count      The amount of values to copy.
 */
- (void)getShortValues:(const short *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds the index of the item in the array according to desired `SCISearchMode`.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param count The amount of items to search in.
 * @param isSorted If true will use fast binary search.
 * @param value The value to search.
 * @param searchMode The search mode options.
 * @return The index of value, or -1 if not found.
 */
- (NSInteger)findIndexInShortArray:(const short *)array startIndex:(NSInteger)startIndex count:(NSInteger)count isSorted:(BOOL)isSorted value:(short)value searchMode:(SCISearchMode)searchMode;

/**
 * Checks whether the array is sorted ascending in specified range.
 * @param array The array to check.
 * @param startIndex The start index of sequences to check.
 * @param count The amount of point in sequence to check.
 * @return True if items in sequence is sorted in ascending order.
 */
- (BOOL)isShortArraySortedAscending:(const short *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks whether data in the array region is evenly spaced and calculated space between data if it true.
 * @param array The array to process.
 * @param startIndex The start index index of sequence to process.
 * @param count The size of data sequence to processs.
 * @param epsilon The epsilon value.
 * @return If data is evenly spaced returns positive value with calculated space, otherwise returns negative value.
 */
- (double)calculateIsShortArrayEvenlySpaced:(const short *)array startIndex:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

/**
 * Checks wheter data in array region contains NaN values
 * @param array The array to use
 * @param startIndex The start index of sequence to process
 * @param count The size of data sequence to process
 * @return If data sequence contains NaN value returns true, otherwise returns false
 */ 
- (BOOL)containsNaNShortArray:(const short *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

#pragma mark - < --- ISCIListUtilProvider methods for Int --- >

/**
 * Finds the maximum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The maximum value of array.
 */
- (int)maxInt:(const int *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The minimum value of array.
 */
- (int)minInt:(const int *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxInt:(const int *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Finds the positive minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxIntPositive:(const int *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Copies elements of the srcArray at specified indices to the dstArray.
 * @param srcArray  The source array to copy from.
 * @param baseIndex The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray The destination array to copy to.
 * @param indices   The collection of indices to get items at.
 * @param count     The amount of values to copy.
 */
- (void)getIntValues:(const int *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray indices:(const int *)indices count:(NSInteger)count;

/**
 * Copies batch elements of the srcArray to the dstArray.
 * @param srcArray   The source array to copy from.
 * @param baseIndex  The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray  The destination array to copy to.
 * @param startIndex The startIndex to start copy from.
 * @param count      The amount of values to copy.
 */
- (void)getIntValues:(const int *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds the index of the item in the array according to desired `SCISearchMode`.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param count The amount of items to search in.
 * @param isSorted If true will use fast binary search.
 * @param value The value to search.
 * @param searchMode The search mode options.
 * @return The index of value, or -1 if not found.
 */
- (NSInteger)findIndexInIntArray:(const int *)array startIndex:(NSInteger)startIndex count:(NSInteger)count isSorted:(BOOL)isSorted value:(int)value searchMode:(SCISearchMode)searchMode;

/**
 * Checks whether the array is sorted ascending in specified range.
 * @param array The array to check.
 * @param startIndex The start index of sequences to check.
 * @param count The amount of point in sequence to check.
 * @return True if items in sequence is sorted in ascending order.
 */
- (BOOL)isIntArraySortedAscending:(const int *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks whether data in the array region is evenly spaced and calculated space between data if it true.
 * @param array The array to process.
 * @param startIndex The start index index of sequence to process.
 * @param count The size of data sequence to processs.
 * @param epsilon The epsilon value.
 * @return If data is evenly spaced returns positive value with calculated space, otherwise returns negative value.
 */
- (double)calculateIsIntArrayEvenlySpaced:(const int *)array startIndex:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

/**
 * Checks wheter data in array region contains NaN values
 * @param array The array to use
 * @param startIndex The start index of sequence to process
 * @param count The size of data sequence to process
 * @return If data sequence contains NaN value returns true, otherwise returns false
 */ 
- (BOOL)containsNaNIntArray:(const int *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

#pragma mark - < --- ISCIListUtilProvider methods for Long --- >

/**
 * Finds the maximum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The maximum value of array.
 */
- (long long)maxLong:(const long long *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The minimum value of array.
 */
- (long long)minLong:(const long long *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxLong:(const long long *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Finds the positive minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxLongPositive:(const long long *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Copies elements of the srcArray at specified indices to the dstArray.
 * @param srcArray  The source array to copy from.
 * @param baseIndex The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray The destination array to copy to.
 * @param indices   The collection of indices to get items at.
 * @param count     The amount of values to copy.
 */
- (void)getLongValues:(const long long *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray indices:(const int *)indices count:(NSInteger)count;

/**
 * Copies batch elements of the srcArray to the dstArray.
 * @param srcArray   The source array to copy from.
 * @param baseIndex  The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray  The destination array to copy to.
 * @param startIndex The startIndex to start copy from.
 * @param count      The amount of values to copy.
 */
- (void)getLongValues:(const long long *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds the index of the item in the array according to desired `SCISearchMode`.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param count The amount of items to search in.
 * @param isSorted If true will use fast binary search.
 * @param value The value to search.
 * @param searchMode The search mode options.
 * @return The index of value, or -1 if not found.
 */
- (NSInteger)findIndexInLongArray:(const long long *)array startIndex:(NSInteger)startIndex count:(NSInteger)count isSorted:(BOOL)isSorted value:(long long)value searchMode:(SCISearchMode)searchMode;

/**
 * Checks whether the array is sorted ascending in specified range.
 * @param array The array to check.
 * @param startIndex The start index of sequences to check.
 * @param count The amount of point in sequence to check.
 * @return True if items in sequence is sorted in ascending order.
 */
- (BOOL)isLongArraySortedAscending:(const long long *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks whether data in the array region is evenly spaced and calculated space between data if it true.
 * @param array The array to process.
 * @param startIndex The start index index of sequence to process.
 * @param count The size of data sequence to processs.
 * @param epsilon The epsilon value.
 * @return If data is evenly spaced returns positive value with calculated space, otherwise returns negative value.
 */
- (double)calculateIsLongArrayEvenlySpaced:(const long long *)array startIndex:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

/**
 * Checks wheter data in array region contains NaN values
 * @param array The array to use
 * @param startIndex The start index of sequence to process
 * @param count The size of data sequence to process
 * @return If data sequence contains NaN value returns true, otherwise returns false
 */ 
- (BOOL)containsNaNLongArray:(const long long *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

#pragma mark - < --- ISCIListUtilProvider methods for Float --- >

/**
 * Finds the maximum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The maximum value of array.
 */
- (float)maxFloat:(const float *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The minimum value of array.
 */
- (float)minFloat:(const float *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxFloat:(const float *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Finds the positive minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxFloatPositive:(const float *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Copies elements of the srcArray at specified indices to the dstArray.
 * @param srcArray  The source array to copy from.
 * @param baseIndex The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray The destination array to copy to.
 * @param indices   The collection of indices to get items at.
 * @param count     The amount of values to copy.
 */
- (void)getFloatValues:(const float *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray indices:(const int *)indices count:(NSInteger)count;

/**
 * Copies batch elements of the srcArray to the dstArray.
 * @param srcArray   The source array to copy from.
 * @param baseIndex  The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray  The destination array to copy to.
 * @param startIndex The startIndex to start copy from.
 * @param count      The amount of values to copy.
 */
- (void)getFloatValues:(const float *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds the index of the item in the array according to desired `SCISearchMode`.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param count The amount of items to search in.
 * @param isSorted If true will use fast binary search.
 * @param value The value to search.
 * @param searchMode The search mode options.
 * @return The index of value, or -1 if not found.
 */
- (NSInteger)findIndexInFloatArray:(const float *)array startIndex:(NSInteger)startIndex count:(NSInteger)count isSorted:(BOOL)isSorted value:(float)value searchMode:(SCISearchMode)searchMode;

/**
 * Checks whether the array is sorted ascending in specified range.
 * @param array The array to check.
 * @param startIndex The start index of sequences to check.
 * @param count The amount of point in sequence to check.
 * @return True if items in sequence is sorted in ascending order.
 */
- (BOOL)isFloatArraySortedAscending:(const float *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks whether data in the array region is evenly spaced and calculated space between data if it true.
 * @param array The array to process.
 * @param startIndex The start index index of sequence to process.
 * @param count The size of data sequence to processs.
 * @param epsilon The epsilon value.
 * @return If data is evenly spaced returns positive value with calculated space, otherwise returns negative value.
 */
- (double)calculateIsFloatArrayEvenlySpaced:(const float *)array startIndex:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

/**
 * Checks wheter data in array region contains NaN values
 * @param array The array to use
 * @param startIndex The start index of sequence to process
 * @param count The size of data sequence to process
 * @return If data sequence contains NaN value returns true, otherwise returns false
 */ 
- (BOOL)containsNaNFloatArray:(const float *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

#pragma mark - < --- ISCIListUtilProvider methods for Double --- >

/**
 * Finds the maximum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The maximum value of array.
 */
- (double)maxDouble:(const double *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum value of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @return The minimum value of array.
 */
- (double)minDouble:(const double *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex;

 /**
 * Finds the minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxDouble:(const double *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Finds the positive minimum and maximum of the array in specified bounds.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param endIndex The startIndex to end search at.
 * @param range The range which holds the result of search.
 */
- (void)minMaxDoublePositive:(const double *)array startIndex:(NSInteger)startIndex endIndex:(NSInteger)endIndex range:(id<ISCIRange>)range;

/**
 * Copies elements of the srcArray at specified indices to the dstArray.
 * @param srcArray  The source array to copy from.
 * @param baseIndex The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray The destination array to copy to.
 * @param indices   The collection of indices to get items at.
 * @param count     The amount of values to copy.
 */
- (void)getDoubleValues:(const double *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray indices:(const int *)indices count:(NSInteger)count;

/**
 * Copies batch elements of the srcArray to the dstArray.
 * @param srcArray   The source array to copy from.
 * @param baseIndex  The baseIndex which is used in {@link FifoBufferFactory}. Otherwise it's {@link FifoBufferFactory#NORMALIZED_BASE_INDEX}.
 * @param dstArray  The destination array to copy to.
 * @param startIndex The startIndex to start copy from.
 * @param count      The amount of values to copy.
 */
- (void)getDoubleValues:(const double *)srcArray srcArrayCount:(NSInteger)srcArrayCount baseIndex:(NSInteger)baseIndex dstArray:(double *)dstArray startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Finds the index of the item in the array according to desired `SCISearchMode`.
 * @param array The array to search.
 * @param startIndex The startIndex to start search from.
 * @param count The amount of items to search in.
 * @param isSorted If true will use fast binary search.
 * @param value The value to search.
 * @param searchMode The search mode options.
 * @return The index of value, or -1 if not found.
 */
- (NSInteger)findIndexInDoubleArray:(const double *)array startIndex:(NSInteger)startIndex count:(NSInteger)count isSorted:(BOOL)isSorted value:(double)value searchMode:(SCISearchMode)searchMode;

/**
 * Checks whether the array is sorted ascending in specified range.
 * @param array The array to check.
 * @param startIndex The start index of sequences to check.
 * @param count The amount of point in sequence to check.
 * @return True if items in sequence is sorted in ascending order.
 */
- (BOOL)isDoubleArraySortedAscending:(const double *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

/**
 * Checks whether data in the array region is evenly spaced and calculated space between data if it true.
 * @param array The array to process.
 * @param startIndex The start index index of sequence to process.
 * @param count The size of data sequence to processs.
 * @param epsilon The epsilon value.
 * @return If data is evenly spaced returns positive value with calculated space, otherwise returns negative value.
 */
- (double)calculateIsDoubleArrayEvenlySpaced:(const double *)array startIndex:(NSInteger)startIndex count:(NSInteger)count epsilon:(double)epsilon;

/**
 * Checks wheter data in array region contains NaN values
 * @param array The array to use
 * @param startIndex The start index of sequence to process
 * @param count The size of data sequence to process
 * @return If data sequence contains NaN value returns true, otherwise returns false
 */ 
- (BOOL)containsNaNDoubleArray:(const double *)array startIndex:(NSInteger)startIndex count:(NSInteger)count;

@end