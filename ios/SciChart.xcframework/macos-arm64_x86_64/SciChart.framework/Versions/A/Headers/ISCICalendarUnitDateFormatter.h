//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCICalendarUnitLabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/NSDate.h>
#import <Foundation/NSDateFormatter.h>
#import <Foundation/NSCalendar.h>
#import "NSString+ISCIString.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol to a date formatter which is used by `SCITradeChartAxisLabelFormatter`.
 */
@protocol ISCICalendarUnitDateFormatter

/**
 * Gets locale used by this date formatter.
 */
@property (nonatomic, readonly) NSLocale *locale;

/**
 * Gets time zone used by this date formatter.
 */
@property (nonatomic, readonly) NSTimeZone *timeZone;

/**
 * Tries to apply default format to underlying default `NSDateFormatter`.
 * @param defaultFormat Default format string to apply.
 */
- (void)tryApplyDefaultFormat:(NSString *)defaultFormat;

/**
 * Formats date for the axis according to the specified `calendarUnit`.
 * @param date The date value to format.
 * @param calendarUnit Calendar unit used while formatting date
 * @return The formatted value.
 */
- (id<ISCIString>)formatDate:(NSDate *)date withCalendarUnit:(NSCalendarUnit)calendarUnit;

@end

NS_ASSUME_NONNULL_END
