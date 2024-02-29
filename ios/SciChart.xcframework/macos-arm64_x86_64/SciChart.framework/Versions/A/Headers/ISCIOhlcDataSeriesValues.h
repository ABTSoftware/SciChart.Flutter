//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIOhlcDataSeriesValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIXDataSeriesValues.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to an OHLC DataSeries values, a series containing `Open`, `High`, `Low`, `Close` data-points.
 */
@protocol ISCIOhlcDataSeriesValues <ISCIXDataSeriesValues>

/**
 * Gets the Open Values of this series.
 */
@property (strong, nonatomic, readonly) id<ISCIList> openValues;

/**
 * Gets the High Values of this series.
 */
@property (strong, nonatomic, readonly) id<ISCIList> highValues;

/**
 * Gets the Low Values of this series.
 */
@property (strong, nonatomic, readonly) id<ISCIList> lowValues;

/**
 * Gets the Close Values of this series.
 */
@property (strong, nonatomic, readonly) id<ISCIList> closeValues;

@end

NS_ASSUME_NONNULL_END
