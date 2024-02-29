//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICalendarUnitLabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICalendarUnitDateFormatter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a default date formatter which is used by `SCITradeChartAxisLabelFormatter`
 */
@interface SCICalendarUnitDateFormatter : NSObject<ISCICalendarUnitDateFormatter>

/**
 * Creates a new instance of `SCICalendarUnitDateFormatter` class.
 * @param locale The `NSLocale` to use by this formatter.
 * @param timeZone The `NSTimeZone` to use by this formatter.
 */
- (instancetype)initWithLocale:(NSLocale *)locale andTimeZone:(NSTimeZone *)timeZone;

@end

NS_ASSUME_NONNULL_END