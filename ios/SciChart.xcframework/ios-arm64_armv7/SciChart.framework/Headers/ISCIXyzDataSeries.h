//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIXyzDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIXyzDataSeriesValues.h"
#import "ISCIXDataSeries.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to an Xyz DataSeries, a series containing `X`, `Y` and `Z` data-points.
 */
@protocol ISCIXyzDataSeries <ISCIXyzDataSeriesValues, ISCIXDataSeries>

/**
 * Gets the type of the Z-Data.
 */
@property (nonatomic, readonly) SCIDataType zType;

#pragma mark - Append

/**
 * Appends X, Y and Z value to this series.
 * @param x The X value.
 * @param y The Y value.
 * @param z The Z value.
 */
- (void)appendX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y z:(id<ISCIComparable>)z NS_REFINED_FOR_SWIFT;

/**
 * Appends X, Y and Z values to this series.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param zArray The Z values.
 */
- (void)appendArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray z:(NSArray<id<ISCIComparable>> *)zArray NS_REFINED_FOR_SWIFT;

/**
 * Appends X, Y and Z values to this series.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param zValues The Z values.
 */
- (void)appendValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues z:(id<ISCIValues>)zValues NS_SWIFT_NAME(append(x:y:z:));

#pragma mark - Insert

/**
 * Inserts X, Y and Z value at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param z The Z value.
 * @param index The index to insert point at.
 */
- (void)insertX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y z:(id<ISCIComparable>)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Y and Z values at specified index.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param zArray The Z values.
 * @param startIndex The index to insert points at.
 */
- (void)insertArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray z:(NSArray<id<ISCIComparable>> *)zArray at:(NSInteger)startIndex NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Y and Z values at specified index.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param zValues The Z values.
 * @param startIndex The index to insert points at.
 */
- (void)insertValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues z:(id<ISCIValues>)zValues at:(NSInteger)startIndex NS_SWIFT_NAME(insert(x:y:z:at:));

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
 * Updates Z value at specified index.
 * @param z The Z value.
 * @param index The index of point to update.
 */
- (void)updateZ:(id<ISCIComparable>)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X, Y and Z value at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param z The Z value.
 * @param index The index of point to update.
 */
- (void)updateX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y z:(id<ISCIComparable>)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

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
 * Updates Z values at specified index.
 * @param zArray The Z values.
 * @param index The index of points to start update from.
 */
- (void)updateArrayZ:(NSArray<id<ISCIComparable>> *)zArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X, Y and Z values at specified index.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param zArray The Z values.
 * @param index The index of point to start update from.
 */
- (void)updateArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray z:(NSArray<id<ISCIComparable>> *)zArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

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
 * Updates Z values at specified index.
 * @param zValues The Z values.
 * @param index The index of points to start update from.
 */
- (void)updateValuesZ:(id<ISCIValues>)zValues at:(NSInteger)index NS_SWIFT_NAME(update(z:at:));

/**
 * Updates X, Y and Z values at specified index.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param zValues The Z values.
 * @param index The index of point to start update from.
 */
- (void)updateValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues z:(id<ISCIValues>)zValues at:(NSInteger)index NS_SWIFT_NAME(update(x:y:z:at:));

@end

NS_ASSUME_NONNULL_END
