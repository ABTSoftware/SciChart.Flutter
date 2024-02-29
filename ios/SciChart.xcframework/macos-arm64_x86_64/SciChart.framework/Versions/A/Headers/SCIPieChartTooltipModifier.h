//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartTooltipModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPieChartTooltipModifierBase.h"
#import "ISCITooltipContainer.h"
#import "SCIPlacement.h"
#import "SCITooltipPosition.h"

@class SCIPieChartTooltipBehavior;
@class SCIPieChartCrossDrawableBehavior;

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCIPieChartTooltipModifier` provides a touch-over tooltip to a pie chart, outputting a single `SCIPieSeriesInfo` object to bind to which updates as the touch moves over segments.
 * Add to a `SCIPieChartSurface` and set `SCIPieChartTooltipModifier.isEnabled` to YES to enable this behaviour.
 */
@interface SCIPieChartTooltipModifier : SCIPieChartTooltipModifierBase

/**
 * Gets or sets the offset on which tooltip and the marker will be shifted in x and y directions.
 */
@property (nonatomic) float offset;

/**
 * Gets or sets the `CGPoint` value which will replace `SCIPieChartTooltipModifier.offset` and will be used to shift tooltip and the marker in custom x and y directions.
 */
@property (nonatomic) CGPoint customPointOffset;

/**
 * Gets or sets the `SCIPlacement` mode, to determine where to place tooltip and the marker relatively to the Hit-test point.
 */
@property (nonatomic) SCIPlacement markerPlacement;

/**
 * Gets or sets the `SCITooltipPosition` mode, to determine where to place tooltip relatively to the marker.
 */
@property (nonatomic) SCITooltipPosition tooltipPosition;

/**
 * Gets the `SCIPenStyle` instance which will be used by `SCIPieChartCrossDrawableBehavior` to tooltip marker.
 */
@property (nonatomic, readonly) SCIPenStyle *tooltipPointMarkerPaintStyle;

/// :nodoc:
- (instancetype)initWithTooltipBehavior:(SCIPieChartTooltipBehavior *)tooltipBehavior NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIPieChartTooltipModifier` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCIPieChartTooltipModifier` class.
 * @param crossDrawableBehavior The `SCIDrawableBehavior` instance which will be use to show marker which will identify what point will be Hit-tested.
 */
- (instancetype)initWithCrossDrawableBehavior:(SCIPieChartCrossDrawableBehavior *)crossDrawableBehavior;

/**
 * Creates a new instance of `SCIPieChartTooltipModifier` class.
 * @param crossDrawableBehavior The `SCIDrawableBehavior` instance which will be use to show marker which will identify what point will be Hit-tested.
 * @param tooltipContainer The tooltip container.
 */
- (instancetype)initWithCrossDrawableBehavior:(SCIPieChartCrossDrawableBehavior *)crossDrawableBehavior andTooltipContainer:(id<ISCITooltipContainer>)tooltipContainer;
    
/**
 * Creates a new instance of `SCIPieChartTooltipModifier` class.
 * @param tooltipBehavior The `SCIPieChartTooltipBehavior` which will be associated with this modifier.
 * @param crossDrawableBehavior The `SCIPieChartCrossDrawableBehavior` instance which will be use to show marker which will identify what point will be Hit-tested.
 */
- (instancetype)initWithTooltipBehavior:(SCIPieChartTooltipBehavior *)tooltipBehavior crossDrawableBehavior:(SCIPieChartCrossDrawableBehavior *)crossDrawableBehavior NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
