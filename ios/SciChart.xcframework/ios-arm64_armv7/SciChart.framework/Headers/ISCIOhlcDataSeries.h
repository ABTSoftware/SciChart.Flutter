//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIOhlcDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIOhlcDataSeriesValues.h"
#import "ISCIXDataSeries.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to an OHLC DataSeries, a series containing `Open`, `High`, `Low`, `Close` data-points.
 */
@protocol ISCIOhlcDataSeries <ISCIOhlcDataSeriesValues, ISCIXDataSeries>

#pragma mark - Append

/**
 * Append X, Open, High, Low and Close values to the series.
 * @param x The X value.
 * @param open The Open value.
 * @param high The High value.
 * @param low The Low value.
 * @param close The close value.
 */
- (void)appendX:(id<ISCIComparable>)x open:(id<ISCIComparable>)open high:(id<ISCIComparable>)high low:(id<ISCIComparable>)low close:(id<ISCIComparable>)close NS_REFINED_FOR_SWIFT;

/**
 * Append X, Open, High, Low and Close values to the series.
 * @param xArray The X values.
 * @param openArray The Open values.
 * @param highArray The High values.
 * @param lowArray The Low values.
 * @param closeArray The close values.
 */
- (void)appendArrayX:(NSArray<id<ISCIComparable>> *)xArray open:(NSArray<id<ISCIComparable>> *)openArray high:(NSArray<id<ISCIComparable>> *)highArray low:(NSArray<id<ISCIComparable>> *)lowArray close:(NSArray<id<ISCIComparable>> *)closeArray NS_REFINED_FOR_SWIFT;

/**
 * Append X, Open, High, Low and Close values to the series.
 * @param xValues The X values.
 * @param openValues The Open values.
 * @param highValues The High values.
 * @param lowValues The Low values.
 * @param closeValues The close values.
 */
- (void)appendValuesX:(id<ISCIValues>)xValues open:(id<ISCIValues>)openValues high:(id<ISCIValues>)highValues low:(id<ISCIValues>)lowValues close:(id<ISCIValues>)closeValues NS_SWIFT_NAME(append(x:open:high:low:close:));

#pragma mark - Insert

/**
 * Inserts X, Open, High, Low and Close value at specified index.
 * @param x The X value.
 * @param open The Open value.
 * @param high The High value.
 * @param low The Low value.
 * @param close The close value.
 * @param index The index to insert point at.
 */
- (void)insertX:(id<ISCIComparable>)x open:(id<ISCIComparable>)open high:(id<ISCIComparable>)high low:(id<ISCIComparable>)low close:(id<ISCIComparable>)close at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Open, High, Low and Close values at specified index.
 * @param xArray The X values.
 * @param openArray The Open values.
 * @param highArray The High values.
 * @param lowArray The Low values.
 * @param closeArray The close values.
 * @param index The index to insert points at.
 */
- (void)insertArrayX:(NSArray<id<ISCIComparable>> *)xArray open:(NSArray<id<ISCIComparable>> *)openArray high:(NSArray<id<ISCIComparable>> *)highArray low:(NSArray<id<ISCIComparable>> *)lowArray close:(NSArray<id<ISCIComparable>> *)closeArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Open, High, Low and Close values at specified index.
 * @param xValues The X values.
 * @param openValues The Open values.
 * @param highValues The High values.
 * @param lowValues The Low values.
 * @param closeValues The close values.
 * @param index The index to insert points at.
 */
- (void)insertValuesX:(id<ISCIValues>)xValues open:(id<ISCIValues>)openValues high:(id<ISCIValues>)highValues low:(id<ISCIValues>)lowValues close:(id<ISCIValues>)closeValues at:(NSInteger)index NS_SWIFT_NAME(insert(x:open:high:low:close:at:));

#pragma mark - Update

/**
 * Updates Open, High, Low and Close values at specified index.
 * @param open The Open value.
 * @param high The High value.
 * @param low The Low value.
 * @param close The close value.
 * @param index The index of point to update.
 */
- (void)updateOpen:(id<ISCIComparable>)open high:(id<ISCIComparable>)high low:(id<ISCIComparable>)low close:(id<ISCIComparable>)close at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Open, High, Low and Close values at specified index.
 * @param openArray The Open values.
 * @param highArray The High values.
 * @param lowArray The Low values.
 * @param closeArray The close values.
 * @param index The index of point to start update from.
 */
- (void)updateArrayOpen:(NSArray<id<ISCIComparable>> *)openArray high:(NSArray<id<ISCIComparable>> *)highArray low:(NSArray<id<ISCIComparable>> *)lowArray close:(NSArray<id<ISCIComparable>> *)closeArray at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Open, High, Low and Close values at specified index.
 * @param openValues The Open values.
 * @param highValues The High values.
 * @param lowValues The Low values.
 * @param closeValues The close values.
 * @param index The index of point to start update from.
 */
- (void)updateValuesOpen:(id<ISCIValues>)openValues high:(id<ISCIValues>)highValues low:(id<ISCIValues>)lowValues close:(id<ISCIValues>)closeValues at:(NSInteger)index NS_SWIFT_NAME(update(open:high:low:close:at:));

@end

NS_ASSUME_NONNULL_END
