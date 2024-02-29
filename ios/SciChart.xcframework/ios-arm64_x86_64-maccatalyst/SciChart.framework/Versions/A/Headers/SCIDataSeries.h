//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDataSeries.h"
#import "SCIDataSeriesCore.h"
#import "SCIDataType.h"
#import "ISCIMath.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A generic abstract base class which defines a generic DataSeries.
 * @see `ISCIXyDataSeries`.
 * @see `SCIXyDataSeries`.
 * @see `ISCIXyyDataSeries`.
 * @see `SCIXyyDataSeries`.
 * @see `ISCIXyzDataSeries`.
 * @see `SCIXyzDataSeries`.
 * @see `ISCIHlDataSeries`.
 * @see `SCIHlDataSeries`.
 * @see `ISCIOhlcDataSeries`.
 * @see `SCIOhlcDataSeries`.
 * @see `ISCIUniformHeatmapDataSeries`.
 * @see `SCIUniformHeatmapDataSeries`.
 * @see `ISCIRenderableSeries.dataSeries`.
 */
@interface SCIDataSeries : SCIDataSeriesCore<ISCIDataSeries> {
@protected
    /// Defines the type of the X-Data.
    SCIDataType _xType;
    /// Defines the type of the Y-Data.
    SCIDataType _yType;
    /// Provides the `ISCIMath` instance for operations with X-Data.
    id<ISCIMath> _xMath;
    /// Provides the `ISCIMath` instance for operations with Y-Data.
    id<ISCIMath> _yMath;
}

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new `SCIDataSeries` instance.
 * @param xType The type of X-Data.
 * @param yType The type of Y-Data.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
