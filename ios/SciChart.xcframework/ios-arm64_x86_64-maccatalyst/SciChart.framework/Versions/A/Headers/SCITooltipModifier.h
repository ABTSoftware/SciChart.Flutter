//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipModifierBase.h"
#import "SCIPlacement.h"
#import "SCITooltipPosition.h"
#import "ISCITooltipContainer.h"

@class SCICrossDrawableBehavior;

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCITooltipModifier` provides a touch-over tooltip to a chart, outputting a single `SCISeriesInfo` object to bind to which updates as the touch moves over data-points.
 * @note Add to a `SCIChartSurface` and set `ISCIChartModifier.isEnabled` to` YES` to enable this behaviour.
 * @see `SCICursorModifier`.
 * @see `SCIRolloverModifier`.
 */
@interface SCITooltipModifier : SCITooltipModifierBase

/**
 * Defines the offset on which tooltip and the marker will be shifted in x and y directions.
 */
@property (nonatomic) CGFloat offset;

/**
 * Gets the `CGPoint` value which will replace `offset` property and will be used to shift tooltip and the marker in custom x and y directions.
 */
@property (nonatomic) CGPoint customPointOffset;

/**
 * Gets the `SCIPlacement` mode, to determine where to place tooltip and the marker relatively to the `Hit-test` point.
 */
@property (nonatomic) SCIPlacement markerPlacement;

/**
 * Gets the `SCITooltipPosition` mode, to determine where to place tooltip relatively to the marker.
 */
@property (nonatomic) SCITooltipPosition tooltipPosition;

/**
 * Gets the `SCIPenStyle` instance which will be used by `SCICrossDrawableBehavior` to tooltip marker.
 */
@property (strong, nonatomic) SCIPenStyle *tooltipPointMarkerPaintStyle;

/// :nodoc:
- (instancetype)initWithTooltipBehavior:(SCITooltipBehaviorBase *)tooltipBehavior NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCITooltipModifier` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCITooltipModifier` class.
 * @param crossDrawableBehavior The `SCIDrawableBehavior` instance which will be use to show marker which will identify what point will be Hit-tested.
 */
- (instancetype)initWithCrossDrawableBehavior:(SCICrossDrawableBehavior *)crossDrawableBehavior;

/**
 * Creates a new instance of `SCITooltipModifier` class.
 * @param crossDrawableBehavior The `SCIDrawableBehavior` instance which will be use to show marker which will identify what point will be Hit-tested.
 * @param tooltipContainer The tooltip container.
 */
- (instancetype)initWithCrossDrawableBehavior:(SCICrossDrawableBehavior *)crossDrawableBehavior andTooltipContainer:(id<ISCITooltipContainer>)tooltipContainer;

/**
 * Creates a new instance of `SCITooltipModifier` class.
 * @param tooltipBehavior The `SCITooltipBehavior` which will be associated with this modifier.
 * @param crossDrawableBehavior The `SCIDrawableBehavior` instance which will be use to show marker which will identify what point will be Hit-tested.
 */
- (instancetype)initWithTooltipBehavior:(SCITooltipBehaviorBase *)tooltipBehavior crossDrawableBehavior:(SCICrossDrawableBehavior *)crossDrawableBehavior NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
