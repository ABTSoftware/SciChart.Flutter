//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import <CoreGraphics/CoreGraphics.h>
#import "ISCICoordinateCalculator.h"
#import "ISCICleanable.h"
#import "ISCIDataDistributionProvider.h"
#import "ISCIDisposable.h"
#import "ISCIDataSeries.h"
#import "ISCIReadWriteLock.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a `SCISeriesRenderPassData`, the data used in a single render pass by `SCIRenderableSeriesBase` derived types.
 */
@protocol ISCISeriesRenderPassData <ISCICleanable, ISCIDataDistributionProvider, ISCIDisposable>

/**
 * Gets the current `Y-Axis` coordinate calculator.
 */
@property (strong, nonatomic, readonly, nullable) id<ISCICoordinateCalculator> yCoordinateCalculator;

/**
 * Gets the current `X-Axis` coordinate calculator.
 */
@property (strong, nonatomic, readonly, nullable) id<ISCICoordinateCalculator> xCoordinateCalculator;

/**
 * Gets a synchronization object used to lock this render pass data
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> lock;

/**
 * Gets the current viewport size.
 */
@property (nonatomic, readonly) CGSize viewportSize;

/**
 * Gets a value, indicating whether current chart is vertical.
 */
@property (nonatomic, readonly) BOOL isVerticalChart;

/**
 * Gets a value, indicating whether current render pass data is valid.
 */
@property (nonatomic, readonly) BOOL isValid;

/**
 * Gets a value, indicating whether coordinates are sorted in ascending order.
 */
@property (nonatomic, readonly) BOOL isCoordinatesSortedAscending;
/**
 * Gets the amount of points in this render pass data.
 */
@property (nonatomic, readonly) NSInteger pointsCount;

/**
 * Checks whether the data is valid for update.
 * @param dataSeries The `ISCIDataSeries` to check.
 * @param xCoordCalc The current `ISCICoordinateCalculator` for XAxis.
 * @param yCoordCalc The current `ISCICoordinateCalculator` for YAxis.
 * @return YES - if data valid for update.
 */
- (BOOL)isValidForUpdate:(id<ISCIDataSeries>)dataSeries xCoordinateCalculator:(id<ISCICoordinateCalculator>)xCoordCalc yCoordinateCalculator:(id<ISCICoordinateCalculator>)yCoordCalc;

/**
 * Begins update of this render pass data.
 * @param xCoordCalc The `X-Axis` coordinate calculator for this render pass.
 * @param yCoordCalc The `Y-Axis` coordinate calculator for this render pass.
 * @param viewportSize The viewport size for this render pass.
 */
- (void)onBeginDataUpdate:(id<ISCICoordinateCalculator>)xCoordCalc yCoordinateCalculator:(id<ISCICoordinateCalculator>)yCoordCalc viewportSize:(CGSize)viewportSize;

/**
 * Ends update of this render pass data.
 * @param isDataSortedAscending The flag indicating whether the data is sorted in ascending order.
 * @param isDataEvenlySpaced The flag indicating whether the data is evenly spaced.
 */
- (void)onEndDataUpdate:(BOOL)isDataSortedAscending isDataEvenlySpaced:(BOOL)isDataEvenlySpaced;

@end

NS_ASSUME_NONNULL_END
