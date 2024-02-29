//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILegendDataSource.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICollectionViewDataSource.h"
#import "SCICollectionView.h"
#import "SCIObservableCollection.h"
#import "ISCIChartLegend.h"
#import "ISCILegendDataSourceObserver.h"
#import "ISCILegendItem.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the dataSource for `SCIChartLegend`.
 */
@interface SCILegendDataSource : NSObject<SCICollectionViewDataSource>

/**
 * Gets or sets the list of series info to display in `SCIChartLegend`.
 */
@property (strong, nonatomic) SCIObservableCollection *dataSet;

/**
 * Gets the xib name which is used to register nib for cell with reuse identifier, which later used to dequeue the legend items.
 */
@property (nonatomic, readonly, nullable) NSString *legendItemXibName;

/**
 * Gets the bundle which is used to load cell nib.
 */
@property (nonatomic, readonly, nullable) NSBundle *bundle;

/**
 * Gets the class which is used to register class for cell with reuse identifier, which later used to dequeue the legend items.
 */
@property (nonatomic, readonly, nullable) Class legendItemClass;

/**
 * Creates a new instance of the `SCILegendDataSource` class.
 * @param legend The `SCIChartLegend` whith which this data source is associated.
 * @param legendItemXibName The xib name which is used to register nib for cell with reuse identifier, which later used to dequeue the legend items.
 * Assosiated class of this view must conform to `ISCILegendItem`.
 */
- (instancetype)initWithLegend:(SCICollectionView<ISCIChartLegend> *)legend legendItemXibName:(nullable NSString *)legendItemXibName bundle:(NSBundle *)bundle;

/**
 * Creates a new instance of the `SCILegendDataSource` class.
 * @param legend The `SCIChartLegend` whith which this data source is associated.
 * @param cellClass The class name which is used to register class for cell with reuse identifier, which later used to dequeue the legend items.
 * Assosiated class of this view must conform to `ISCILegendItem`.
 */
- (instancetype)initWithLegend:(SCICollectionView<ISCIChartLegend> *)legend legendItemClass:(nullable Class)cellClass;

/**
 * Registers observer to listen for changes on this `SCILegendDataSource` instance.
 * @param dataSourceObserver The observer to deregister.
 */
- (void)registerDataSourceObserver:(id<ISCILegendDataSourceObserver>)dataSourceObserver NS_SWIFT_NAME(registerDataSourceObserver(_:));

/**
 * Deregisters observer from listening changes on this `SCILegendDataSource` instance.
 * @param dataSourceObserver The observer to deregister.
 */
- (void)unregisterDataSourceObserver:(id<ISCILegendDataSourceObserver>)dataSourceObserver;

@end

NS_ASSUME_NONNULL_END
