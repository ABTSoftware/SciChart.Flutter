//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXyyDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIXyyDataSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A DataSeries to store Xyy data-points, containing `X` and `Y`, `Y1` values.
 */
@interface SCIXyyDataSeries : SCIXDataSeries<ISCIXyyDataSeries>

/**
 * Creates a new `SCIXyyDataSeries` instance.
 * @param xType The Type of X Data.
 * @param yType The Type of Y Data.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType;

/**
 * Creates a new `SCIXyyDataSeries` instance.
 * @param xType The type of X-Data.
 * @param yType The type of Y-Data.
 * @param dataDistributionCalculator The `ISCIDataDistributionCalculator` instance for this series.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType dataDistributionCalculator:(id<ISCIDataDistributionCalculator>)dataDistributionCalculator NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
