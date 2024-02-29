//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICursorModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipModifierWithAxisLabelsBase.h"
#import "SCIPlacement.h"
#import "SCITooltipPosition.h"
#import "ISCITooltipContainer.h"

@class SCICursorTooltipBehavior;
@class SCIAxisTooltipsBehaviorBase;
@class SCICursorCrosshairDrawableBehavior;

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCICursorModifier` provides a cross-hairs (cursor) plus tooltip with `X, Y` data values under the finger as the touch moves.
 * Add to a `SCIChartSurface` and set `ISCIChartModifier.isEnabled` to `YES` to enable this behaviour.
 * @see `SCIRolloverModifier`.
 * @see `SCITooltipModifier`.
 */
@interface SCICursorModifier : SCITooltipModifierWithAxisLabelsBase

/**
 * Defines the offset on which tooltip and the marker will be shifted in x and y directions.
 */
@property (nonatomic) CGFloat offset;

/**
 * Gets the `CGPoint` value which will replace `offset` property and will be used to shift tooltip and the marker in custom x and y directions.
 */
@property (nonatomic) CGPoint customPointOffset;

/**
 * Gets the `SCIPlacement` mode, to determine where to place tooltip and the marker relatively to the Hit-test point.
 */
@property (nonatomic) SCIPlacement markerPlacement;

/**
 * Gets the `SCITooltipPosition mode, to determine where to place tooltip relatively to the marker.
 */
@property (nonatomic) SCITooltipPosition tooltipPosition;

/**
 * Gets the `SCIPenStyle` instance which will be used by `SCICursorCrosshairDrawableBehavior` to draw the crosshair.
 */
@property (strong, nonatomic) SCIPenStyle *crosshairPenStyle;

/// :nodoc:
- (instancetype)initWithTooltipBehavior:(SCITooltipBehaviorBase *)tooltipBehavior andAxisTooltipsBehavior:(SCIAxisTooltipsBehaviorBase *)axisTooltipsBehavior NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCICursorModifier` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCICursorModifier` class.
 * @param tooltipContainer The tooltip container.
 */
- (instancetype)initWithTooltipContainer:(id<ISCITooltipContainer>)tooltipContainer;

/**
 * Creates a new instance of `SCICursorModifier` class.
 * @param cursorTooltipBehavior `SCICursorTooltipBehavior` which will be associated with this modifier.
 * @param axisTooltipsBehavior  `SCIAxisTooltipsBehavior` which will be associated with this modifier.
 * @param crosshairDrawableBehavior `SCICursorCrosshairDrawableBehavior` which will be associated with this modifier.
 */
- (instancetype)initWithCursorBehavior:(SCICursorTooltipBehavior *)cursorTooltipBehavior axisTooltipsBehavior:(SCIAxisTooltipsBehaviorBase *)axisTooltipsBehavior andCrosshairDrawableBehavior:(SCICursorCrosshairDrawableBehavior *)crosshairDrawableBehavior NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
