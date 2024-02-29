//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXyzDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXDataSeries.h"
#import "ISCIXyzDataSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A DataSeries to store Xyz data-points, containing `X`, `Y` and `Z` values.
 */
@interface SCIXyzDataSeries : SCIXDataSeries<ISCIXyzDataSeries> {
@protected
    /// Defines the type of the Z-Data.
    SCIDataType _zType;
}

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType NS_UNAVAILABLE;

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType dataDistributionCalculator:(id<ISCIDataDistributionCalculator>)dataDistributionCalculator NS_UNAVAILABLE;

/**
 * Creates a new `SCIXyzDataSeries` instance.
 * @param xType The Type of X Data.
 * @param yType The Type of Y Data.
 * @param zType The type of Z-Data.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType;

/**
 * Creates a new `SCIXyzDataSeries` instance.
 * @param xType The type of X-Data.
 * @param yType The type of Y-Data.
 * @param zType The type of Z-Data.
 * @param dataDistributionCalculator The `ISCIDataDistributionCalculator` instance for this series.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType dataDistributionCalculator:(id<ISCIDataDistributionCalculator>)dataDistributionCalculator NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
