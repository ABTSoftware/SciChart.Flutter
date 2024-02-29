//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIHlDataSeriesValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIXyDataSeriesValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a HL DataSeries values which contains columns of `X-Values` and `Y-Values`, `High-Values` and `Low-Values`.
 */
 @protocol ISCIHlDataSeriesValues <ISCIXyDataSeriesValues>

/**
 * Gets the High Values of this series
 */
@property (strong, nonatomic, readonly) id<ISCIList> highValues;

/**
 * Gets the Low Values of this series
 */
@property (strong, nonatomic, readonly) id<ISCIList> lowValues;

@end

NS_ASSUME_NONNULL_END
