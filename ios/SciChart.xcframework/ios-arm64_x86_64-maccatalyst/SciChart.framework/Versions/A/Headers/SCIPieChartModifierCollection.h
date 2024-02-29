//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartModifierCollection.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIPieChartModifier.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Contains a collection of `ISCIPieChartModifier`.
 */
@interface SCIPieChartModifierCollection : SCIChartModifierCollectionBase<id<ISCIPieChartModifier>>

/**
 * Initializes a new instance of `SCIPieChartModifierCollection` class.
 * @param collection The array with items to add.
 */
- (instancetype)initWithCollection:(NSArray<id<ISCIPieChartModifier>> *)collection;

/**
 * Called when parent `ISCIChartSurface.renderSurface` is rendered.
 * @param message The rendered message.
 */
- (void)onPieRenderSurfaceRendered:(SCIPieChartRenderedMessage *)message;

/**
 * Called when segments collection drastically changed.
 */
- (void)onSegmentCollectionDrasticallyChanged;

/**
 * Called when segments collection changes.
 * @param args The collection changed event args.
 */
- (void)onSegmentsCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIPieSegment>> *)args;

/**
 * Called when selected segments collection changes.
 * @param args The collection changed event args.
 */
- (void)onSelectedSegmentsCollectionChanged:(SCICollectionChangedEventArgs<id<ISCIPieSegment>> *)args;

@end

NS_ASSUME_NONNULL_END
