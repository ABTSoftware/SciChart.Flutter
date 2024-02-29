//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateAxis3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIDateAxis.h"

/**
 * Provides a Linear, Value Date Axis, capable of rendering Date ticks on the X-Axis of a `SCIChartSurface3D`.
 * @see `ISCIAxis3D`.
 * @see `SCINumericAxis3D`.
 * @see `SCILogarithmicNumericAxis3D`.
 */
@interface SCIDateAxis3D : SCIAxisBase3D<NSDate *><ISCIDateAxis>

@end
