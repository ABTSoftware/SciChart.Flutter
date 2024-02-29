//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITradeChartAxisLabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILabelFormatterBase.h"
#import "SCICategoryDateAxis.h"
#import "ISCICalendarUnitDateFormatter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a default label formatter which is used by `SCITradeChartAxisLabelProvider`
 */
@interface SCITradeChartAxisLabelFormatter<T : SCICategoryDateAxis *> : SCILabelFormatterBase

/**
 * Creates a new instance of `SCITradeChartAxisLabelFormatter` class.
 * @param locale The `NSLocale` to use by this formatter.
 * @param timeZone The `NSTimeZone` to use by this formatter.
 */
- (instancetype)initWithLocale:(NSLocale *)locale timeZone:(NSTimeZone *)timeZone;

/**
 * Creates a new instance of `SCITradeChartAxisLabelFormatter` class.
 * @param dateFormatter The formatter for axis labels.
 * @param cursorDateFormatter The formatter for cursor.
 */
- (instancetype)initWithDateFormatter:(id<ISCICalendarUnitDateFormatter>)dateFormatter cursorDateFormatter:(id<ISCICalendarUnitDateFormatter>)cursorDateFormatter NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
