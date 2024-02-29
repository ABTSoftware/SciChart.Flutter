//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIXyyDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIXyyDataSeriesValues.h"
#import "ISCIXDataSeries.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to an Xyy DataSeries, a series containing `X`, `Y` and `Y1` data-points.
 */
@protocol ISCIXyyDataSeries <ISCIXyyDataSeriesValues, ISCIXDataSeries>

#pragma mark - Append

/**
 * Appends X, Y and Y1 value to this series.
 * @param x The X value.
 * @param y The Y value.
 * @param y1 The Y1 value.
 */
- (void)appendX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y y1:(id<ISCIComparable>)y1 NS_REFINED_FOR_SWIFT;

/**
 * Appends X, Y and Y1 values to this series.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param y1Array The Y1 values.
 */
- (void)appendArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray y1:(NSArray<id<ISCIComparable>> *)y1Array NS_REFINED_FOR_SWIFT;

/**
 * Appends X, Y and Y1 values to this series.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param y1Values The Y1 values.
 */
- (void)appendValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues y1:(id<ISCIValues>)y1Values NS_SWIFT_NAME(append(x:y:y1:));


#pragma mark - Insert

/**
 * Inserts X, Y and Y1 value at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param y1 The Y1 value.
 * @param index The index to insert point at.
 */
- (void)insertX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y y1:(id<ISCIComparable>)y1 at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Y and Y1 values at specified index.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param y1Array The Y1 values.
 * @param index The index to insert points at.
 */
- (void)insertArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray y1:(NSArray<id<ISCIComparable>> *)y1Array at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Y and Y1 values at specified index.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param y1Values The Y1 values.
 * @param index The index to insert points at.
 */
- (void)insertValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues y1:(id<ISCIValues>)y1Values at:(NSInteger)index NS_SWIFT_NAME(insert(x:y:y1:at:));

#pragma mark - Update

/**
 * Updates X value at specified index.
 * @param x The X value.
 * @param index The index of point to update.
 */
- (void)updateX:(id<ISCIComparable>)x at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Y value at specified index.
 * @param y The Y value.
 * @param index The index of point to update.
 */
- (void)updateY:(id<ISCIComparable>)y at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Y1 value at specified index.
 * @param y1 The Y1 value.
 * @param index The index of point to update.
 */
- (void)updateY1:(id<ISCIComparable>)y1 at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X, Y and Y1 value at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param y1 The Y1 value.
 * @param index The index of point to update.
 */
- (void)updateX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y y1:(id<ISCIComparable>)y1 at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X values at specified index.
 * @param xArray The X values.
 * @param index The index of points to start update from.
 */
- (void)updateArrayX:(NSArray<id<ISCIComparable>> *)xArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Y values at specified index.
 * @param yArray The Y values.
 * @param index The index of points to start update from.
 */
- (void)updateArrayY:(NSArray<id<ISCIComparable>> *)yArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Y1 values at specified index.
 * @param y1Array The Y1 values.
 * @param index The index of points to start update from.
 */
- (void)updateArrayY1:(NSArray<id<ISCIComparable>> *)y1Array at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X, Y and Y1 values at specified index.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param y1Array The Y1 values.
 * @param index The index of point to start update from.
 */
- (void)updateArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray y1:(NSArray<id<ISCIComparable>> *)y1Array at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X values at specified index.
 * @param xValues The X values.
 * @param index The index of points to start update from.
 */
- (void)updateValuesX:(id<ISCIValues>)xValues at:(NSInteger)index NS_SWIFT_NAME(update(x:at:));

/**
 * Updates Y values at specified index.
 * @param yValues The Y values.
 * @param index The index of points to start update from.
 */
- (void)updateValuesY:(id<ISCIValues>)yValues at:(NSInteger)index NS_SWIFT_NAME(update(y:at:));

/**
 * Updates Y1 values at specified index.
 * @param y1Values The Y1 values.
 * @param index The index of points to start update from.
 */
- (void)updateValuesY1:(id<ISCIValues>)y1Values at:(NSInteger)index NS_SWIFT_NAME(update(y1:at:));

/**
 * Updates X, Y and Y1 values at specified index.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param y1Values The Y1 values.
 * @param index The index of point to start update from.
 */
- (void)updateValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues y1:(id<ISCIValues>)y1Values at:(NSInteger)index NS_SWIFT_NAME(update(x:y:y1:at:));

@end

NS_ASSUME_NONNULL_END
