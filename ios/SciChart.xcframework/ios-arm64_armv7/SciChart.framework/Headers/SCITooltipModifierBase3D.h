//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifierBase3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIMasterSlaveTouchModifierBase3D.h"
#import "SCISourceMode.h"

/**
 * The `SCITooltipModifierBase3D` is part of the ChartModifier3D API which provides a touch-over templated tooltip, provided by the output of the `Hit-Test` operation on a `ISCIRenderableSeries3D`.
 */
@interface SCITooltipModifierBase3D : SCIMasterSlaveTouchModifierBase3D

/**
 * Defines the `SCISourceMode` type of series on which interaction is performed.
 */
@property (nonatomic) SCISourceMode sourceMode;

/**
 * Defines a value indicating whether to show tooltip or not.
 */
@property (nonatomic) BOOL showTooltip;

@end
