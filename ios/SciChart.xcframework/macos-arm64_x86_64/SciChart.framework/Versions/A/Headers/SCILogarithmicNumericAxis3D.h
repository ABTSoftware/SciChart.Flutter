//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILogarithmicNumericAxis3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCINumericAxis3D.h"
#import "ISCILogarithmicNumericAxis.h"

/**
 * Provides a Logarithmic, Value Numeric Axis, capable of rendering double, int, short, byte, long ticks on the X or Y-Axis of a `SCIChartSurface3D`.
 * @see `ISCIAxis3D`.
 * @see `SCINumericAxis3D`.
 * @see `SCIDateAxis3D`.
 */
@interface SCILogarithmicNumericAxis3D : SCINumericAxis3D<ISCILogarithmicNumericAxis>

/**
 * Provides default text formatting used by logarithmic axis 3d.
 */
@property (class, nonatomic, nonnull, readonly) NSString *DefaultLogarithmicTextFormatting __deprecated_msg("Please use SCILogarithmicNumericAxis3D.defaultLogarithmicTextFormatting instead");

/**
 * Provides default text formatting used by logarithmic axis 3d.
 */
@property (class, nonatomic, nonnull, readonly) NSString *defaultLogarithmicTextFormatting;

@end
