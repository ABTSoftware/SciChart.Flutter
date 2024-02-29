//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartSurfaceChangeListener.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIAxesChangeListener.h"
#import "ISCIChartResizeListener.h"
#import "SCIRenderedMessage.h"
#import "SCICollectionChangedEventArgs.h"
#import "ISCIAnnotation.h"

/**
 * Defines the protocol with methods which are used for notification about changes in `SCIChartSurface` instance.
 */
@protocol ISCIChartSurfaceChangeListener <ISCIRenderableSeriesChangeListener, ISCIAxesChangeListener, ISCIChartResizeListener>

/**
 * Called when parent `ISCIChartSurface.renderSurface` rendered.
 * @param renderedMessage The rendered message.
 */
- (void)onRenderSurfaceRendered:(SCIRenderedMessage *)renderedMessage;

/**
 * Called when parent `ISCIChartSurface.annotations` collection drastically changed.
 */
- (void)onAnnotationsDrasticallyChanged;

/**
 * Called when parent `ISCIChartSurface.annotations` collection changes.
 * @param args The collection changed event args.
 */
- (void)onAnnotationsCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIAnnotation>> *)args;

@end
