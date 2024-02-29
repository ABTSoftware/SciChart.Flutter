//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIHlDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIHlDataSeriesValues.h"
#import "ISCIXDataSeries.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a HL DataSeries, which contains columns of `X-Values` and `Y-Values`, `High-Values` and `Low-Values`.
 */
@protocol ISCIHlDataSeries <ISCIHlDataSeriesValues, ISCIXDataSeries>

#pragma mark - Append

/**
 * Appends the X, Y, High and Low point to the series.
 * @param x The X value.
 * @param y The Y value.
 * @param high The high value.
 * @param low The low value.
 */
- (void)appendX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y high:(id<ISCIComparable>)high low:(id<ISCIComparable>)low NS_REFINED_FOR_SWIFT;

/**
 * Appends the X, Y, High and Low point to the series.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param highArray The high values.
 * @param lowArray The low values.
 */
- (void)appendArrayX:(NSArray<id<ISCIComparable>> *)xArray y:(NSArray<id<ISCIComparable>> *)yArray high:(NSArray<id<ISCIComparable>> *)highArray low:(NSArray<id<ISCIComparable>> *)lowArray NS_REFINED_FOR_SWIFT;

/**
 * Appends an X, Y, High and Low points to the series.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param highValues The high values.
 * @param lowValues The low values.
 */
- (void)appendValuesX:(id<ISCIValues>)xValues y:(id<ISCIValues>)yValues high:(id<ISCIValues>)highValues low:(id<ISCIValues>)lowValues NS_SWIFT_NAME(append(x:y:high:low:));

#pragma mark - Insert

/**
 * Inserts the X and Y, High and Low point to the series at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param high The high value.
 * @param low The low value.
 * @param index The index to insert point at.
 */
- (void)insertX:(id<ISCIComparable>)x Y:(id<ISCIComparable>)y high:(id<ISCIComparable>)high low:(id<ISCIComparable>)low at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts the X and Y, High and Low points to the series at specified index.
 * @param xArray The X values.
 * @param yArray The Y values.
 * @param highArray The high values.
 * @param lowArray The low values.
 * @param index The index to insert points at.
 */
- (void)insertArrayX:(NSArray<id<ISCIComparable>> *)xArray Y:(NSArray<id<ISCIComparable>> *)yArray high:(NSArray<id<ISCIComparable>> *)highArray low:(NSArray<id<ISCIComparable>> *)lowArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts the X and Y, High and Low points to the series at specified index.
 * @param xValues The X values.
 * @param yValues The Y values.
 * @param highValues The high values.
 * @param lowValues The low values.
 * @param index The index to insert points at.
 */
- (void)insertValuesX:(id<ISCIValues>)xValues Y:(id<ISCIValues>)yValues high:(id<ISCIValues>)highValues low:(id<ISCIValues>)lowValues at:(NSInteger)index NS_SWIFT_NAME(insert(x:y:high:low:at:));

#pragma mark - Update

/**
 * Updates an Y, High and Low point to the series at specified index.
 * @param y The Y value.
 * @param high The high value.
 * @param low The low value.
 * @param index The index of point to update.
 */
- (void)updateY:(id<ISCIComparable>)y high:(id<ISCIComparable>)high low:(id<ISCIComparable>)low at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates the Y, High and Low points to the series at specified index.
 * @param yArray The Y values.
 * @param highArray The high values.
 * @param lowArray The low values.
 * @param index The index of point to start update from.
 */
- (void)updateArrayY:(NSArray<id<ISCIComparable>> *)yArray high:(NSArray<id<ISCIComparable>> *)highArray low:(NSArray<id<ISCIComparable>> *)lowArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates the Y, High and Low points to the series at specified index.
 * @param yValues The Y values.
 * @param highValues The high values.
 * @param lowValues The low values.
 * @param index The index of point to start update from.
 */
- (void)updateValuesY:(id<ISCIValues>)yValues high:(id<ISCIValues>)highValues low:(id<ISCIValues>)lowValues at:(NSInteger)index NS_SWIFT_NAME(update(y:high:low:at:));

@end

NS_ASSUME_NONNULL_END
