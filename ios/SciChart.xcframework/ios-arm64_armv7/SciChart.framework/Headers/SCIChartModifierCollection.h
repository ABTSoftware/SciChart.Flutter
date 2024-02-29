//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartModifierCollection.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartModifierCollectionBase.h"
#import "ISCIChartModifier.h"
#import "ISCIAnnotation.h"
#import "SCIRenderedMessage.h"
#import "SCIResizedMessage.h"
#import "SCICollectionChangedEventArgs.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Contains a collection of `ISCIChartModifier`.
 */
@interface SCIChartModifierCollection : SCIChartModifierCollectionBase<id<ISCIChartModifier>>

/**
 * Initializes a new instance of `SCIChartModifierCollection` class.
 * @param collection The array with items to add.
 */
- (instancetype)initWithCollection:(NSArray<id<ISCIChartModifier>> *)collection;

/**
 * Called when parent `SCIChartSurface` is resized.
 * @param message The resized message.
 */
- (void)onParentSurfaceResized:(SCIResizedMessage *)message;

/**
 * Called when parent `ISCIChartSurface.renderSurface` is rendered.
 * @param message The rendered message.
 */
- (void)onRenderSurfaceRendered:(SCIRenderedMessage *)message;

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

NS_ASSUME_NONNULL_END
