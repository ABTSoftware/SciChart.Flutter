//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIYAxisDragModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisDragModifierBase.h"

/**
 * The Y Axis DragModifier provides a drag to scale the `Y-Axis`.
 * This behaviour scales the axis in a different direction depending on which half of the axis the user starts the operation in.
 * @note Add to a `SCIChartSurface` and set `ISCIChartModifierCore.IsEnabled` to true to enable this behaviour.
 * @see `SCIXAxisDragModifier`.
 */
@interface SCIYAxisDragModifier : SCIAxisDragModifierBase

@end
