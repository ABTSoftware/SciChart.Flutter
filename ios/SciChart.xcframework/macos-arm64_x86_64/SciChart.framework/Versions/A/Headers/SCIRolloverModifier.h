//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRolloverModifier.h is part of SCICHART®, High Performance Scientific Charts
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

@class SCIRolloverBehavior;
@class SCIAxisTooltipsBehaviorBase;

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCIRolloverModifier` provides a touch-over hit-test to a chart, plus a collection of a `SCISeriesInfo` objects to bind to which updates as the touch moves.
 * Add to a `SCIChartSurface` and set `ISCIChartModifier.isEnabled` to `YES` to enable this behaviour.
 * @see `SCICursorModifier`.
 * @see `SCITooltipModifier`.
 */
@interface SCIRolloverModifier : SCITooltipModifierWithAxisLabelsBase

/**
 * Sets whether a Vertical Line should be drawn at the rollover location.
 */
@property (nonatomic) BOOL drawVerticalLine;

/**
 * Gets the `SCIPenStyle` instance which will be used by `SCIVerticalLineDrawableBehavior` to draw vertical rollover line.
 */
@property (strong, nonatomic) SCIPenStyle *verticalLineStyle;

/// :nodoc:
- (instancetype)initWithTooltipBehavior:(SCITooltipBehaviorBase *)tooltipBehavior andAxisTooltipsBehavior:(SCIAxisTooltipsBehaviorBase *)axisTooltipsBehavior NS_UNAVAILABLE;
    
/**
 * Creates a new instance of `SCIRolloverModifier` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCIRolloverModifier` class.
 * @param rolloverBehavior `SCIRolloverBehavior` which will be associated with this modifier.
 * @param axisTooltipsBehavior  `SCIAxisTooltipsBehavior` which will be associated with this modifier.
 */
- (instancetype)initWithRolloverBehavior:(SCIRolloverBehavior *)rolloverBehavior axisTooltipsBehavior:(SCIAxisTooltipsBehaviorBase *)axisTooltipsBehavior NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
