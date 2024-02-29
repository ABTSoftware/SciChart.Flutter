//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGridData.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIList.h"
#import "ISCIRange.h"
#import "SCIIndexCalculator.h"
#import "SCIDataType.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A Data Structure which stores a 2D uniform array of elements.
 */
@interface SCIGridData<T: id<ISCIComparable>> : NSObject<ISCIDoubleValuesProvider>

/**
 * Gets the `SCIIndexCalculator` which is used to map indices.
 */
@property (nonatomic, readonly) id<ISCIList> items;

/**
 * Gets the `SCIIndexCalculator` which is used to map indices.
 */
@property (nonatomic, readonly) SCIIndexCalculator *indexCalculator;

/**
 * Creates a new instance of the `SCIGridData` class.
 * @param itemsType The types of underlying data.
 * @param calculator The `SCIIndexCalculator` instance.
 */
- (instancetype)initWithItemsClass:(SCIDataType)itemsType indexCalculator:(SCIIndexCalculator *)calculator;

/**
 * Gets the Min and Max values stored in this grid data.
 * @param range The range to set.
 */
- (void)getMinMax:(id<ISCIRange>)range;

/**
 * Gets the value with specified z and x index.
 * @param xIndex The xIndex to use.
 * @param zIndex The zIndex to use.
 * @return The value at specified index.
 */
- (T)valueAtXIndex:(NSInteger)xIndex zIndex:(NSInteger)zIndex;

/**
 * Sets the value with specified z and x index.
 * @param xIndex The xIndex to use.
 * @param zIndex The zIndex to use.
 * @param value The value to set.
 */
- (void)setValue:(T)value atX:(NSInteger)xIndex andZ:(NSInteger)zIndex;

/**
 * Pushes a row into the array, which discards one old row in a First In First Out fashion. use this method to scroll the GridData in the Z-direction.
 * @param array The array with new values.
 */
- (void)pushArrayRow:(NSArray<T> *)array;

/**
 * Pushes a row into the array, which discards one old row in a First In First Out fashion. use this method to scroll the GridData in the Z-direction.
 * @param values The row with new values.
 */
- (void)pushValuesRow:(id<ISCIValues>)values;

/**
 * Sets the row at the specified Z index.
 * @param index The z-index to use.
 * @param row The row with new values.
 */
- (void)setArrayRow:(NSArray<T> *)row at:(NSInteger)index;

/**
 * Sets the row at the specified Z index.
 * @param index The z-index to use.
 * @param row The row with new values.
 */
- (void)setValuesRow:(id<ISCIValues>)row at:(NSInteger)index;

/**
 * Copies values to this instance.
 * @param array Array to copy from.
 */
- (void)copyFromArray:(NSArray<T> *)array;

/**
 * Copies values to this instance.
 * @param values Values to copy from.
 */
- (void)copyFromValues:(id<ISCIValues>)values;

@end

NS_ASSUME_NONNULL_END
