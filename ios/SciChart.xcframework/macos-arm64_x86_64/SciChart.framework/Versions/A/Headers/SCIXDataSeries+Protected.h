//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXDataSeries+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIXDataSeries`.
 */
@interface SCIXDataSeries (SCIXDataSeriesProtected)

/**
 * Creates internal lists.
 */
- (void)initColumns;

/**
 * Creates internal list as FIFO.
 * @param fifoCapacity The FIFO capacity of lists.
 */
- (void)initColumnsAsFifo:(NSInteger)fifoCapacity;

/**
 * Clears content of series without recreation of internal lists.
 */
- (void)clearColumns;

/**
 * Sets the integer indices of the XValues array that are currently in the range passed in with xCoordinateCalculator, and an indefinite range otherwise.
 * @param indicesRange   The index range to set
 * @param xMinAsDouble   The min value of XAxis visible range
 * @param xMaxAsDouble   The max value of XAxis visible range
 * @param isCategoryAxis If true XAxis is a category axis
 */
- (void)getIndicesXRange:(SCIIndexRange *)indicesRange xMinAsDouble:(double)xMinAsDouble xMaxAsDouble:(double)xMaxAsDouble isCategoryAxis:(BOOL)isCategoryAxis;

 /**
  * Computes the actual amount of points which were appended based on size of values which were appended
  * @param appendedCount The size of values which were appended into this data series
  * @return The actual amount of points which were appended
  */
- (NSInteger)computeAppendedCount:(NSInteger)appendedCount;

@end

NS_ASSUME_NONNULL_END
