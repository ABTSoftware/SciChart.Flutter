//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIRange.h"
#import "ISCIMath.h"
#import "ISCIReadWriteLock.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base protocol to a 3D DataSeries which provides a data-source for `ISCIRenderableSeries3D`.
 */
@protocol ISCIDataSeries3D <ISCIDataSeriesCore>

/**
 * Gets the total extents of the `ISCIDataSeries` in the X direction.
 */
@property (nonatomic, readonly) id<ISCIRange> xRange;

/**
 * Gets the total extents of the `ISCIDataSeries` in the Y direction.
 */
@property (nonatomic, readonly) id<ISCIRange> yRange;

/**
 * Gets the total extents of the `ISCIDataSeries` in the Z direction.
 */
@property (nonatomic, readonly) id<ISCIRange> zRange;

/**
 * Gets the `ISCIMath` instance for operations with X-Data.
 */
@property (nonatomic, readonly) id<ISCIMath> xMath;

/**
 * Gets the `ISCIMath` instance for operations with Y-Data.
 */
@property (nonatomic, readonly) id<ISCIMath> yMath;

/**
 * Gets the `ISCIMath` instance for operations with Z-Data.
 */
@property (nonatomic, readonly) id<ISCIMath> zMath;

/**
 * Gets a synchronization object used to lock this data-series. Also locked on append, update, remove or clear.
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> lock;

@end

NS_ASSUME_NONNULL_END
