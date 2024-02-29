//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartLegend.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIThemeable.h"
#import "ISCILayoutable.h"
#import "SCIObservableCollection.h"
#import "SCIOrientation.h"
#import "SCIAlignment.h"
#import "SCIEdgeInsets.h"
#import "SCIChartTheme.h"

/// Provides reuse identifier for `ISCILegendItem`.
extern NSString * _Nonnull const LegendItemReuseIdentifier;

/**
 * Provides a protocol for `SCIChartLegend`, which is used to display series color and name.
 */
@protocol ISCIChartLegend <ISCIThemeable>

/**
 * Defines the theme id for this `SCIChartLegend` instance.
 */
@property (strong, nonatomic, nonnull) SCIChartTheme theme;

/**
 * Provides the legend margins which is default spacing to use when laying out content in the `ISCIChartLegend`.
 */
@property (nonatomic) SCIEdgeInsets legendMargins;

/**
 * Defines the position of the current `ISCIChartLegend` instance.
 */
@property (nonatomic) SCIAlignment legendPosition;

/**
 * Defines the orientation for this `SCIChartLegend` instance.
 */
@property (nonatomic) SCIOrientation legendOrientation;

/**
 * Defines a value indicating whether the legend should display checkboxes.
 */
@property (nonatomic) BOOL showCheckBoxes;

/**
 * Defines a value indicating whether the legend should display series markers.
 */
@property (nonatomic) BOOL showSeriesMarkers;

@end
