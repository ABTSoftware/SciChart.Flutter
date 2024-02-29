//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxesChangeListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICollectionChangedEventArgs.h"
#import "ISCIAxis.h"

/**
 * Defines the protocol with methods which are used for notification about changes in `SCIChartSurface` axes collections.
 * @see `ISCIChartSurface.xAxes`
 * @see `ISCIChartSurface.yAxes`
 */
@protocol ISCIAxesChangeListener <NSObject>

/**
 * Called when parent `ISCIChartSurface.xAxes` collection drastically changed.
 */
- (void)onXAxesDrasticallyChanged;

/**
 * Called when parent `ISCIChartSurface.yAxes` collection drastically changed.
 */
- (void)onYAxesDrasticallyChanged;

/**
 * Called when parent `ISCIChartSurface.xAxes` collection changes.
 * @param args The collection changed event args.
 */
- (void)onXAxesCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIAxis>> *)args;

/**
 * Called when parent `ISCIChartSurface.yAxes` collection changes.
 * @param args The collection changed event args.
 */
- (void)onYAxesCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIAxis>> *)args;

@end
