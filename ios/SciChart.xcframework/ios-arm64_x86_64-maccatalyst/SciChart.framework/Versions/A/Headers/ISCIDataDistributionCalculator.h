//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDataDistributionCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIBaseDataDistributionCalculator.h"
#import "ISCIList.h"
#import "ISCIValues.h"
#import "ISCIComparable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol to a `SCIBaseDataDistributionCalculator`.
 */
@protocol ISCIDataDistributionCalculator <ISCIBaseDataDistributionCalculator>

#pragma mark - Append

/**
 * Called when X and Y Values are appended.
 * @note Should update the Data Distribution flags.
 * @param xValues The X values which were appended.
 * @param yValues The Y values which were appended.
 * @param appendedCount The amount of points which where appended
 * @param acceptUnsortedData if set to YES - the series accepts unsorted data.
 */
- (void)onAppendXValues:(id<ISCIList>)xValues yValues:(id<ISCIList>)yValues appendedCount:(NSInteger)appendedCount acceptUnsortedData:(BOOL)acceptUnsortedData;

#pragma mark - Insert

/**
 * Called when X and Y Values are inserted.
 * @note Should update the Data Distribution flags.
 * @param xValues The X values which were inserted.
 * @param yValues The Y values which were inserted.
 * @param indexWhereInserted The index where new values inserted.
 * @param insertedCount The amount of points which where inserted
 * @param acceptUnsortedData if set to YES - the series accepts unsorted data.
 */
- (void)onInsertXValues:(id<ISCIList>)xValues yValues:(id<ISCIList>)yValues indexWhereInserted:(NSInteger)indexWhereInserted insertedCount:(NSInteger) insertedCount acceptUnsortedData:(BOOL)acceptUnsortedData;

#pragma mark - Update

/**
 * Called when X and Y Values are updated.
 * @note Should update the Data Distribution flags.
 * @param xValues The X values which were updated.
 * @param yValues The Y values which were updated.
 * @param indexWhereUpdate The index where points were updated.
 * @param updatedCount The amount of points which where updated
 * @param acceptUnsortedData if set to YES - the series accepts unsorted data.
 */
- (void)onUpdateXValues:(id<ISCIList>)xValues yValues:(id<ISCIList>)yValues indexWhereUpdate:(NSInteger)indexWhereUpdate updatedCount:(NSInteger)updatedCount acceptUnsortedData:(BOOL)acceptUnsortedData;

/**
 * Called when X Values are updated.
 * @note Should update the Data Distribution flags.
 * @param xValues The X values which were updated.
 * @param indexWhereUpdate The index where points were updated.
 * @param updatedCount The amount of points which where updated
 * @param acceptUnsortedData if set to YES - the series accepts unsorted data.
 */
- (void)onUpdateXValues:(id<ISCIList>)xValues indexWhereUpdate:(NSInteger)indexWhereUpdate updatedCount:(NSInteger)updatedCount acceptUnsortedData:(BOOL)acceptUnsortedData;

/**
 * Called when Y Values are updated.
 * @note Should update the Data Distribution flags.
 * @param yValues The Y values which were updated.
 * @param indexWhereUpdate The index where points were updated.
 * @param updatedCount The amount of points which where updated
 * @param acceptUnsortedData if set to YES - the series accepts unsorted data.
 */
- (void)onUpdateYValues:(id<ISCIList>)yValues indexWhereUpdate:(NSInteger)indexWhereUpdate updatedCount:(NSInteger)updatedCount acceptUnsortedData:(BOOL)acceptUnsortedData;

#pragma mark - Remove

/**
 * Called when X and Y Values are removed.
 * @note Should update the Data Distribution flags.
 * @param xValues The X values which were removed.
 * @param yValues The Y values which were removed.
 * @param acceptUnsortedData if set to YES - the series accepts unsorted data.
 */
- (void)onRemoveXValues:(id<ISCIList>)xValues yValues:(id<ISCIList>)yValues acceptUnsortedData:(BOOL)acceptUnsortedData;

@end

NS_ASSUME_NONNULL_END
