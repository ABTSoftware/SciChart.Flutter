//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipBehavioWithCrosshairBehavior3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipBehavior3D.h"
#import "SCITooltipModifier3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides a tooltip behavior with crosshair behavior included for `SCITooltipModifier3D`.
 */
@interface SCITooltipBehavioWithCrosshairBehavior3D<T : SCITooltipModifier3D *> : SCITooltipBehavior3D<T>

/**
 * Creates a new instance of `SCITooltipBehavioWithCrosshairBehavior3D` class.
 * @param tooltipContainer The tooltip container.
 */
- (instancetype)initWithTooltipContainer:(id<ISCITooltipContainer>)tooltipContainer;

@end

NS_ASSUME_NONNULL_END
