//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartSurfaceBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILayoutableView.h"
#import "ISCIChartSurfaceBase.h"
#import "SCIColor.h"

/**
 * An abstract base class containing shared code between different implementations of `SCIChartSurface`.
 */
@interface SCIChartSurfaceBase : SCILayoutableView<ISCIChartSurfaceBase>

/**
 * Provides a way to set `backgroundColor` on this surface inistance.
 */
@property (strong, nonatomic, nullable) SCIColor *backgroundColor;

/**
 * Defines the current theme applied to this `SCIChartSurfaceBase`.
 */
@property (copy, nonatomic, nonnull) NSString *themeId __deprecated_msg("Please use `theme:` instead");

/**
 * Defines the current theme applied to this `SCIChartSurfaceBase`.
 */
@property (copy, nonatomic, nonnull) SCIChartTheme theme;

#if TARGET_OS_IOS
/**
 * Used to show/hide performance watermark in Simulator.
 */
@property (class, nonatomic) BOOL isSimulatorPerformanceWatermarkHidden __deprecated_msg("With Metal support in simulator - it's now obsolete.");
#endif

@end
