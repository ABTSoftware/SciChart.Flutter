//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCINumericAxis3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisBase3D.h"
#import "SCIScientificNotation.h"
#import "ISCINumericAxis.h"

/**
 * Provides a Linear, Value Numeric Axis, capable of rendering double, int, short, byte, long ticks on the `X,Y or Z-Axis` of a `SCIChartSurface3D`.
 * @see `ISCIAxis3D`.
 * @see `SCILogarithmicNumericAxis3D`.
 * @see `SCIDateAxis3D`.
 */
@interface SCINumericAxis3D : SCIAxisBase3D<ISCINumericAxis>

/**
 * Default text formatting for `SCINumericAxis3D`.
 */
+ (nonnull NSString *)defaultTextFormatting;

/**
 * Default cursor text formatting used by `ISCIChartModifier3D` for `SCINumericAxis3D`.
 */
+ (nonnull NSString *)defaultCursorTextFormatting;

@end
