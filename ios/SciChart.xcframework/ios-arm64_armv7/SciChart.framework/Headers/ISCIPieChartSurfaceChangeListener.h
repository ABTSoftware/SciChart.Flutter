//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieChartSurfaceChangeListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderableSeriesChangeListener.h"
#import "ISCIChartResizeListener.h"
#import "SCIPieChartRenderedMessage.h"
#import "ISCIPieSegment.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface with methods which are used for notification about changes in `SCIPieChartSurface` instance.
 */
@protocol ISCIPieChartSurfaceChangeListener <ISCIRenderableSeriesChangeListener, ISCIChartResizeListener>

/**
 * Called when parent `SCIPieChartSurface` rendered.
 * @param renderedMessage The rendered message.
 */
- (void)onPieRenderSurfaceRendered:(SCIPieChartRenderedMessage *)renderedMessage;

/**
 * Called when segments collection drastically changed.
 */
- (void)onSegmentCollectionDrasticallyChanged;

/**
 * Called when segments collection changes.
 */
- (void)onSegmentsCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIPieSegment>> *)args;

/**
 * Called when selected segments collection changes.
 */
- (void)onSelectedSegmentsCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIPieSegment>> *)args;

@end

NS_ASSUME_NONNULL_END
