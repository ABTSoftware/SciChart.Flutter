//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipBehaviorBase3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIModifierBehavior.h"
#import "ISCIChartModifier3D.h"
#import "SCIObservableCollection.h"
#import "SCISourceMode.h"
#import "ISCIRenderableSeries3D.h"
#import "ISCISeriesTooltip3D.h"
#import "SCITooltipModifier3D.h"

/**
 * Defines a base class with tooltip behavior for `ISCIChartModifier3D` implementors.
 * @note `T` is the type of modifier to which this behavior will be attached.
 */
@interface SCITooltipBehaviorBase3D<__covariant T : id<ISCIChartModifier3D>> : SCIModifierBehavior<T>

/// Provides default cursor offset in x-y direction.
@property (class, nonatomic, readonly) float CursorXyOffset;

/**
 * Defines the `SCIObservableCollection` of renderable series which will take part in interaction.
 */
@property (strong, nonatomic, nullable) SCIObservableCollection<id<ISCIRenderableSeries3D>> *observableSeries;

/**
 * Gets or sets the `SCISourceMode` type of series on which interaction is performed.
 */
@property (nonatomic) SCISourceMode sourceMode;

@end
