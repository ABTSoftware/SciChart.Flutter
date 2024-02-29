//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIStackedSeriesCollectionBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIObservableCollection.h"
#import "ISCIRenderableSeries.h"
#import "ISCIStackedRenderableSeries.h"
#import "ISCIChartSurfaceProvider.h"
#import "ISCISeriesInfoProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the Base class for all collections of the `ISCIStackedRenderableSeries` within SciChart.
 * @see `SCIVerticallyStackedSeriesCollection`.
 * @see `SCIVerticallyStackedMountainsCollection`.
 * @see `SCIVerticallyStackedColumnsCollection`.
 * @see `SCIHorizontallyStackedColumnsCollection`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations. 
 */
@interface SCIStackedSeriesCollectionBase<T : id<ISCIStackedRenderableSeries>> : SCIObservableCollection<T><ISCIRenderableSeries, ISCIChartSurfaceProvider>

/**
 * Creates a new instance of `SCIStackedSeriesCollectionBase` class.
 * @param seriesInfoProvider The `ISCISeriesInfoProvider instance associated with this series.
 */
- (instancetype)initWithSeriesInfoProvider:(id<ISCISeriesInfoProvider>)seriesInfoProvider;

/**
 * Creates a new instance of `SCIStackedSeriesCollectionBase` class.
 * @param collection The collection of stacked series to add.
 * @param seriesInfoProvider The `ISCISeriesInfoProvider instance associated with this series.
 */
- (instancetype)initWithCollection:(NSArray<T> *)collection andSeriesInfoProvider:(id<ISCISeriesInfoProvider>)seriesInfoProvider;

@end

NS_ASSUME_NONNULL_END
