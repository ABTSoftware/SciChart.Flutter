//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICoordinateCalculator.h"
#import "ISCIDataSeries3D.h"
#import "ISCICleanable.h"
#import "ISCIReadWriteLock.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a `SCISeriesRenderPassData3D`, the data used in a `single render pass` by `SCIBaseRenderableSeries3D` derived types.
 */
@protocol ISCISeriesRenderPassData3D <ISCICleanable>

/**
 * Gets the current `X-Axis` coordinate calculator.
 */
@property (nonatomic, readonly, nullable) id<ISCICoordinateCalculator> xCoordinateCalculator;

/**
 * Gets the current `Y-Axis` coordinate calculator.
 */
@property (nonatomic, readonly, nullable) id<ISCICoordinateCalculator> yCoordinateCalculator;

/**
 * Gets the current `Z-Axis` coordinate calculator.
 */
@property (nonatomic, readonly, nullable) id<ISCICoordinateCalculator> zCoordinateCalculator;

/**
 * Gets a synchronization object used to lock this render pass data
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> lock;

/**
 * Gets the amount of points in this render pass data.
 */
@property (nonatomic, readonly) NSInteger pointsCount;

/**
 * Gets a value, indicating whether current render pass data is valid.
 */
@property (nonatomic, readonly) BOOL isValid;

/**
 * Checks whether the data is valid for update.
 * @param dataSeries  The `ISCIDataSeries3D` to check
 * @param xCalculator The current `ISCICoordinateCalculator` for X-Axis.
 * @param yCalculator The current `ISCICoordinateCalculator` for Y-Axis.
 * @param zCalculator The current `ISCICoordinateCalculator` for Z-Axis.
 * @return YES  if data valid for update, otherwise - NO.
 */
- (BOOL)isValidForUpdate:(id<ISCIDataSeries3D>)dataSeries xCoordinateCalculator:(id<ISCICoordinateCalculator>)xCalculator yCoordinateCalculator:(id<ISCICoordinateCalculator>)yCalculator zCoordinateCalculator:(id<ISCICoordinateCalculator>)zCalculator;

/**
 * Begins update of this render pass data.
 * @param xCalculator The current `ISCICoordinateCalculator` for X-Axis.
 * @param yCalculator The current `ISCICoordinateCalculator` for Y-Axis.
 * @param zCalculator The current `ISCICoordinateCalculator` for Z-Axis.
 */
- (void)onBeginDataUpdateWithXCoordinateCalculator:(id<ISCICoordinateCalculator>)xCalculator yCoordinateCalculator:(id<ISCICoordinateCalculator>)yCalculator zCoordinateCalculator:(id<ISCICoordinateCalculator>)zCalculator;

/**
 * Ends update of this render pass data.
 */
- (void)onEndDataUpdate;

@end

NS_ASSUME_NONNULL_END
