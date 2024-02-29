//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDataSeries.h"
#import "ISCIXDataSeriesValues.h"
#import "ISCIList.h"
#import "ISCIDataDistributionCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base data series class which contains `X` values.
 */
@interface SCIXDataSeries : SCIDataSeries<ISCIXDataSeriesValues> {
@protected
    /// Provides the `X-Values` of this series.
    id<ISCIList> _xColumn;
    /// Provides the `ISCIDataDistributionCalculator` instance for this series.
    id<ISCIDataDistributionCalculator> _dataDistributionCalculator;
}

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType NS_UNAVAILABLE;

/**
 * Creates a new `SCIXDataSeries` instance.
 * @param xType The type of X-Data.
 * @param yType The type of Y-Data.
 * @param dataDistributionCalculator The `ISCIDataDistributionCalculator` instance for this series.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType dataDistributionCalculator:(id<ISCIDataDistributionCalculator>)dataDistributionCalculator NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
