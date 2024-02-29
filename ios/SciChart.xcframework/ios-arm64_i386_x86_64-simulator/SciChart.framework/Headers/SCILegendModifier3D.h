//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILegendModifier3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartModifier3DBase.h"
#import "ISCIThemeable.h"
#import "SCIChartLegend.h"
#import "SCILegendDataSource.h"
#import "SCISourceMode.h"
#import "SCIAlignment.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a custom chart modifier which shows a Legend on the `SCIChartSurface3D` and also can provide a data-source via `sourceMode` property.
 */
@interface SCILegendModifier3D : SCIChartModifier3DBase

/**
 * Defines the position of the current `SCILegendModifier3D` instance.
 */
@property (nonatomic) SCIAlignment position;

/**
 * Defines the orientation of the current `SCILegendModifier` instance.
 */
@property (nonatomic) SCIOrientation orientation;

/**
 * Defines the value indicating whether the legend should be displayed.
 */
@property (nonatomic) BOOL showLegend;

/**
 * Defines the value indicating whether the legend should display checkboxes.
 */
@property (nonatomic) BOOL showCheckBoxes;

/**
 * Defines the value indicating whether the legend should display series markers.
 */
@property (nonatomic) BOOL showSeriesMarkers;

/**
 * Defines the `SCISourceMode` value for legend.
 */
@property (nonatomic) SCISourceMode sourceMode;

/**
 * Creates a new instance of `SCILegendModifier3D` class.
 * @param legend The `SCIChartLegend` instance which should be used by this modifier.
 */
- (instancetype)initWithLegend:(SCIChartLegend *)legend;

/**
 * Creates a new instance of `SCILegendModifier3D` class.
 * @param legend The `SCIChartLegend` instance which should be used by this modifier.
 * @param dataSource The `SCILegendDataSource` instance which should be used by legend.
 * @param useAutoPlacement If true modifier will try to place legend inside chart, otherwise legend is already placed somewhere and shouldn't be moved.
 */
- (instancetype)initWithLegend:(SCIChartLegend *)legend dataSource:(SCILegendDataSource *)dataSource useAutoPlacement:(BOOL)useAutoPlacement NS_DESIGNATED_INITIALIZER;

/**
 * Refreshes content of the legend with up-to-date values
 */
- (void)updateLegend;

@end

NS_ASSUME_NONNULL_END
