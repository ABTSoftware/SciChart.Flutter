//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartCrossDrawableBehavior.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDrawableBehavior.h"
#import "SCIPieChartTooltipModifier.h"

/**
 * Defines a class which is responsible for drawing cross marker for `SCIPieChartTooltipModifier` at the hit test point.
 * @note `T` is the type of modifier to which this behavior will be attached.
 */
@interface SCIPieChartCrossDrawableBehavior<__covariant T : SCIPieChartTooltipModifier *> : SCIDrawableBehavior<T>

@end
