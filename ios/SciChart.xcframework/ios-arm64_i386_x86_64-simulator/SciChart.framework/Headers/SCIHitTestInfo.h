//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIHitTestInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import <CoreGraphics/CGGeometry.h>

@protocol ISCIRenderableSeries;

/**
 * Defines a hit test info class which provides information on a series `hit-test` operation.
 * @see `-[ISCIRenderableSeries hitTest:at:]`.
 * @see `-[ISCIRenderableSeries hitTest:at:withHitTestRadius:]`.
 * @see `-[ISCIRenderableSeries verticalSliceHitTest:at:]`.
 */
@interface SCIHitTestInfo : NSObject<ISCICleanable>

/**
 * The point where hit test is performed in pixels.
 */
@property (nonatomic) CGPoint hitTestPoint;

/**
 * The hit test radius in pixels.
 */
@property (nonatomic) float hitTestRadius;

/**
 * The index of hit test point in associated `ISCIDataSeries`.
 */
@property (nonatomic) NSInteger dataSeriesIndex;

/**
 * The index of hit test point in associated `ISCISeriesRenderPassData`.
 */
@property (nonatomic) NSInteger pointSeriesIndex;

/**
 * The value indicating whether the `Hit-Test` operation was a hit or not.
 */
@property (nonatomic) BOOL isHit;

/**
 * The value indicating whether the input point is between first and last series point or not.
 */
@property (nonatomic) BOOL isWithinDataBounds;

/**
 * The renderable series which was hit.
 */
@property (weak, nonatomic, nullable) id<ISCIRenderableSeries> hitRenderableSeries;

/**
 * Gets the value indicating whether this `SCIHitTestInfo` is empty or not.
 */
@property (nonatomic) BOOL isEmpty;

/**
 * Sets the hit test info values.
 * @param x The `x coordinate` of hit test point.
 * @param y The `y coordinate` of hit test point.
 * @param hitTestRadius The hit test radius.
 * @param dataSeriesIndex The index of hit test point in associated `ISCIDataSeries`.
 * @param pointSeriesIndex The index of hit test point in associated `ISCISeriesRenderPassData`.
 */
- (void)setX:(float)x y:(float)y hitTestRadius:(float)hitTestRadius dataSeriesIndex:(NSInteger)dataSeriesIndex pointSeriesIndex:(NSInteger)pointSeriesIndex;

@end
