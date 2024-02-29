//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifierBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIMasterSlaveTouchModifierBase.h"
#import "SCISourceMode.h"
#import "SCITooltipBehaviorBase.h"

@class SCITooltipBehaviorBase;

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCITooltipModifierBase` is part of the `ChartModifier API`, which factors out handling of Axis and Chart Label templates,
 * and provides a touch-over templated tooltip, provided by the output of the `Hit-Test` operation on a `ISCIRenderableSeries`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCITooltipModifierBase : SCIMasterSlaveTouchModifierBase

/**
 * Defines whether the interaction should use interpolation.
 */
@property (nonatomic) BOOL useInterpolation;

/**
 * Defines the `SCISourceMode` type of series on which interaction is performed.
 */
@property (nonatomic) SCISourceMode sourceMode;

/**
 * Defines a value indicating whether to show tooltip or not.
 */
@property (nonatomic) BOOL showTooltip;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCITooltipModifierBase` class.
 * @param tooltipBehavior The `SCITooltipBehavior` which will be associated with this modifier.
 */
- (instancetype)initWithTooltipBehavior:(SCITooltipBehaviorBase *)tooltipBehavior NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
