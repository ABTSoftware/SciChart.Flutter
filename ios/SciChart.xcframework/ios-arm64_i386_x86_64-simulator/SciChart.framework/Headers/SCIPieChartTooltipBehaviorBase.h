//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartTooltipBehaviorBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPieChartModifier.h"
#import "SCIModifierBehavior.h"
#import "SCIObservableCollection.h"
#import "ISCIPieRenderableSeries.h"
#import "SCISourceMode.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class with tooltip behavior for `ISCIPieChartModifier` implementors.
 * @note `T` is the type of modifier to which this behavior will be attached.
 */
@interface SCIPieChartTooltipBehaviorBase<T : id<ISCIPieChartModifier>> : SCIModifierBehavior<T>

/// Provides default cursor offset in x-y direction
+ (float)cursorXyOffset;

/**
 * Defines a value indicating whether to use interpolation during updating tooltip or not.
 */
@property (nonatomic) BOOL useInterpolation;

/**
 * Defines the `SCIRenderableSeriesCollection` from the parent `SCIChartSurface`.
 */
@property (weak, nonatomic, nullable) SCIObservableCollection<id<ISCIPieRenderableSeries>> *observableSeries;

/**
 * Gets the `SCISourceMode` type of series on which interaction is performed.
 */
@property (nonatomic) SCISourceMode sourceMode;

@end

NS_ASSUME_NONNULL_END
