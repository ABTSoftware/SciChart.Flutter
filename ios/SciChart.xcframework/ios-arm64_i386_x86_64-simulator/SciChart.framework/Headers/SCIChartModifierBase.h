//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartModifierBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartModifierCore.h"
#import "ISCIChartModifier.h"

/**
 * Defines the base class to a Chart Modifier, which can be used to extend the interactivity or rendering of the `SCIChartSurface`.
 */
@interface SCIChartModifierBase : SCIChartModifierCore<ISCIChartModifier>

/**
 * Transforms point with coordinates relative to parent surface and transforms it relative to specified `ISCIHitTestable` instance.
 * @param point The point to translate.
 * @param relativeTo The target `ISCIHitTestable` instance.
 * @return The translated `CGPoint`.
 */
- (CGPoint)getPoint:(CGPoint)point relativeTo:(nonnull id<ISCIHitTestable>)relativeTo;

@end
