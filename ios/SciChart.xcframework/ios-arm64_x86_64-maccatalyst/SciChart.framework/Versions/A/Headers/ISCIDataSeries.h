//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDataSeriesCore.h"
#import "ISCIComparable.h"
#import "ISCIMath.h"
#import "ISCICoordinateCalculator.h"
#import "SCIIndexRange.h"
#import "ISCIMath.h"
#import "SCIDataSeriesType.h"
#import "ISCIDataDistributionProvider.h"
#import "ISCIReadWriteLock.h"

@protocol ISCIRange;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base interface to a DataSeries which provides a data-source for `ISCIRenderableSeries`.
 * @see `ISCIXDataSeries`
 * @see `ISCIXyDataSeries`
 * @see `ISCIXyyDataSeries`
 * @see `ISCIXyzDataSeries`
 * @see `ISCIHlDataSeries`
 * @see `ISCIOhlcDataSeries`
 * @see `ISCIUniformHeatmapDataSeries`
 * @see `ISCIRenderableSeries.dataSeries`.
 */
@protocol ISCIDataSeries <ISCIDataSeriesCore, ISCIDataDistributionProvider>

/**
 * Gets the total extents of the `ISCIDataSeries` in the Y direction.
 */
@property (strong, nonatomic, readonly) id<ISCIRange> xRange;

/**
 * Gets the total extents of the `ISCIDataSeries` in the Y direction.
 */
@property (strong, nonatomic, readonly) id<ISCIRange> yRange;

/**
 * Gets the `SCIDataSeriesType` for this DataSeries.
 */
@property (nonatomic, readonly) SCIDataSeriesType dataSeriesType;

/**
 * Gets the computed Minimum value in X for this series.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> xMin;

/**
 * Gets the computed Maximum value in X for this series.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> xMax;

/**
 * Gets the computed Minimum value in Y for this series.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> yMin;

/**
 * Gets the computed Maximum value in Y for this series.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> yMax;

/**
 * Gets whether the series behaves as a FIFO.
 * @note If YES - when the FifoCapacity is reached, old points will be discarded in favour of new points, resulting in a scrolling chart.
 */
@property (nonatomic, readonly) BOOL isFifo;

/**
 * Defines the size of the FIFO buffer.
 * @note If `fifoCapacity = 0` - then the series is unlimited. If a value is set, when the point count reaches this value, older points will be discarded.
 */
@property (nonatomic) NSInteger fifoCapacity;

/**
 * Defines the value indicating whether this series accepts unsorted data.
 * @warning If it is NO, the DataSeries will throw exception is unsorted data is appended. Unintentional unsorted data can result in much slower performance.
 * To disable this check - set this property to YES;
 */
@property (nonatomic) BOOL acceptsUnsortedData;

/**
 * Gets the type of the X-Data.
 */
@property (nonatomic, readonly) SCIDataType xType;

/**
 * Gets the type of the Y-Data.
 */
@property (nonatomic, readonly) SCIDataType yType;

/**
 * Gets the `ISCIMath` instance for operations with X-Data.
 */
@property (strong, nonatomic, readonly) id<ISCIMath> xMath;

/**
 * Gets the `ISCIMath` instance for operations with Y-Data.
 */
@property (strong, nonatomic, readonly) id<ISCIMath> yMath;

/**
 * Gets a synchronization object used to lock this data-series. Also locked on append, update, remove or clear.
 */
@property (strong, nonatomic, readonly) id<ISCIReadWriteLock> lock;

/**
 * Gets the YRange of the data (min, max of the series) in the input visible range point range, where the input range is the `ISCIAxisCore.visibleRange`.
 * @param xCoordCalc The X CoordinateCalculator currently used by corresponding XAxis.
 * @param getPositiveRange If YES, returns the `ISCIRange` which has positive values, e.g., when viewing a logarithmic chart this value might be set.
 * @return The windowed yRange for specified xRange.
 */
- (id<ISCIRange>)getWindowYRangeWithXCoordCalc:(id<ISCICoordinateCalculator>)xCoordCalc getPositiveRange:(BOOL)getPositiveRange;

/**
 * Gets the YRange of the data (min, max of the series) in the input IndexRange, where indices are point-indices on the DataSeries columns.
 * @param xIndexRange The XAxis indices currently in view.
 * @param getPositiveRange If YES, returns the `ISCIRange` which has positive values, e.g., when viewing a logarithmic chart this value might be set.
 * @return The windowed yRange for specified xIndexRange.
 */
- (id<ISCIRange>)getWindowYRangeWithIndexRange:(SCIIndexRange *)xIndexRange getPositiveRange:(BOOL)getPositiveRange;

/**
 * Sets the integer indices of the XValues array that are currently in the range passed in with xCoordinateCalculator, and an indefinite range otherwise.
 * @param xIndicesRange The index range to set.
 * @param xCoordinateCalculator The current `ISCICoordinateCalculator` of XAxis.
 */
- (void)getIndicesXRange:(SCIIndexRange *)xIndicesRange xCoordinateCalculator:(id<ISCICoordinateCalculator>)xCoordinateCalculator;

/**
 * Sets the integer indices of the YValues array that are currently in the range passed in with yCoordinateCalculator, and an indefinite range otherwise.
 * @param yIndicesRange The index range to set.
 * @param yCoordinateCalculator The current `ISCICoordinateCalculator` of YAxis.
 */
- (void)getIndicesYRange:(SCIIndexRange *)yIndicesRange yCoordinateCalculator:(id<ISCICoordinateCalculator>)yCoordinateCalculator;

@end

NS_ASSUME_NONNULL_END
