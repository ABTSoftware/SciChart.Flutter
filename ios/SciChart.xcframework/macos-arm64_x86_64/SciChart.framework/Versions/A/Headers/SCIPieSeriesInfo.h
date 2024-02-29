//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieSeriesInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPieHitTestInfoUpdatable.h"
#import "ISCIPieRenderableSeries.h"
#import "ISCIComparable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which contains information about a series based on `SCIPieHitTestInfo` values.
 * TRenderableSeries - The type of parent renderable series
 */
@interface SCIPieSeriesInfo : NSObject<ISCIPieHitTestInfoUpdatable>

/**
 * The parent renderable series
 */
@property (weak, nonatomic, readonly) id<ISCIPieRenderableSeries> renderableSeries;

/**
 * A point snapped to the X-Y value of the series.
 */
@property (nonatomic, readonly) CGPoint xyCoordinate;

/**
 * The color of the renderable series associated with this series info.
 */
@property (nonatomic, readonly) SCIColor *segmentColor;

/**
 * The name of the `ISCIPieSegment` associated with this series info.
 */
@property (nonatomic, readonly) NSString *segmentTitle;

/**
 * The value of the `ISCIPieSegment` associated with this series info.
 */
@property (nonatomic, readonly) double segmentValue;

/**
 * The Segment Index at the hit-test site.
 */
@property (nonatomic, readonly) NSInteger segmentIndex;

/**
 * The value indicating whether the HitTest operation was a hit or not
 */
@property (nonatomic, readonly) BOOL isHit;

/**
 * Gets the value indicating whehter the parent renderable series is visible or not.
 */
@property (nonatomic, readonly) BOOL isVisible;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIPieSeriesInfo` class.
 * @param renderableSeries The parent renderable series.
*/
- (instancetype)initWithRenderableSeries:(id<ISCIPieRenderableSeries>)renderableSeries NS_DESIGNATED_INITIALIZER;

/**
 * Updates this series info with the latest values from renderable series.
 */
- (void)update;

@end

NS_ASSUME_NONNULL_END
