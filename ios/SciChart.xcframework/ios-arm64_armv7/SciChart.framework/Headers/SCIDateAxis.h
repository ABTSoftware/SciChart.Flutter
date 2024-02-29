//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateAxis.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisBase.h"
#import "ISCIDateAxis.h"

/**
 * Provides a Linear, Value Date Axis, capable of rendering Date ticks on the X-Axis of a `SCIChartSurface`.
 * @see `ISCIAxis`.
 * @see `SCIAxisBase`.
 * @see `SCINumericAxis`.
 * @see `SCILogarithmicNumericAxis`.
 * @see `SCICategoryAxisBase`.
 * @see `SCICategoryDateAxis`.
 */
@interface SCIDateAxis : SCIAxisBase<ISCIDateAxis>

/**
 * Default text formatting for `SCIDateAxis`
 */
+ (nonnull NSString *)defaultTextFormatting;

/**
 * Default sub day text formatting for `SCIDateAxis`
 */
+ (nonnull NSString *)defaultSubDayTextFormatting;

@end
