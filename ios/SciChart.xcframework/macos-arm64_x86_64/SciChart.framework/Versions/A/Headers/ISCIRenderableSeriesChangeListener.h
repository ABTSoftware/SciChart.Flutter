//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderableSeriesChangeListener.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIRenderableSeriesCore.h"

/**
 * Defines the protocol with methods which are used for notification about changes in `SCIChartSurface` renderableSeries collections.
 * @see `ISCIChartSurface.renderableSeries`.
 * @see `ISCIChartSurface.selectedRenderableSeries`.
 */
@protocol ISCIRenderableSeriesChangeListener <NSObject>

/**
 * Called when `ISCIChartSurface.renderableSeries` collection drastically changed.
 */
- (void)onRenderableSeriesDrasticallyChanged;

/**
 * Called when `ISCIChartSurface.renderableSeries` collection changes.
 * @param args The collection changed event args.
 */
- (void)onRenderableSeriesCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIRenderableSeriesCore>> *)args;

/**
 * Called when `ISCIChartSurface.selectedRenderableSeries` collection changes.
 * @param args The collection changed event args.
 */
- (void)onSelectedSeriesCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIRenderableSeriesCore>> *)args;

@end
