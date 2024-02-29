//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2022. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeriesIndexDataProvider+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDataSeriesIndexDataProvider.h"
#import "SCIDoubleValueIndexProvider+Protected.h"
#import "SCIDoubleValues.h"
#import "ISCIXDataSeriesValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIDataSeriesIndexDataProvider`.
 */
@interface SCIDataSeriesIndexDataProvider (Protected)

/**
 * Tries to update `indexValues` based on data provided by `baseDataSeries` instance.
 * @param baseDataSeries The data series instance to get index data from.
 * @param indexValues The target index values that should be updated.
 */
- (void)tryUpdateIndexValues:(SCIDoubleValues *)indexValues withBaseDataSeries:(id<ISCIXDataSeriesValues>)baseDataSeries;

@end

NS_ASSUME_NONNULL_END
