//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateIntervalUtil.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/**
 * Helper class for work with date intervals, which are measured in seconds in Cocoa.
 */
@interface SCIDateIntervalUtil : NSObject

/**
 * Provides the amount of days in year.
 */
+ (double)daysInYear;

/**
 * Provides the amount of days in month.
 */
+ (double)daysInMonth;

#pragma mark - Milliseconds

/**
 * Gets interval from value in seconds.
 * @param milliseconds The value in seconds.
 * @return The date interval.
 */
+ (double)fromMilliseconds:(double)milliseconds;

/**
 * Calculates how many milliseconds are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of milliseconds in passed in interval.
 */
+ (double)toMilliseconds:(double)interval;

#pragma mark - Minutes

/**
 * Gets interval from value in minutes.
 * @param minutes The value in minutes.
 * @return The date interval.
 */
+ (double)fromMinutes:(double)minutes;

/**
 * Calculates how many minutes are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of minutes in passed in interval.
 */
+ (double)toMinutes:(double)interval;

#pragma mark - Hours

/**
 * Gets interval from value in hours.
 * @param hours The value in hours.
 * @return The date interval.
 */
+ (double)fromHours:(double)hours;

/**
 * Calculates how many hours are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of hours in passed in interval.
 */
+ (double)toHours:(double)interval;

#pragma mark - Days

/**
 * Gets interval from value in days.
 * @param days The value in days.
 * @return The date interval.
 */
+ (double)fromDays:(double)days;

/**
 * Calculates how many days are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of days in passed in interval.
 */
+ (double)toDays:(double)interval;

#pragma mark - Weeks

/**
 * Gets interval from value in weeks.
 * @param weeks The value in weeks.
 * @return The date interval.
 */
+ (double)fromWeeks:(double)weeks;

/**
 * Calculates how many weeks are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of weeks in passed in interval.
 */
+ (double)toWeeks:(double)interval;

#pragma mark - Months

/**
 * Gets interval from value in months.
 * @param months The value in months.
 * @return The date interval.
 */
+ (double)fromMonths:(double)months;

/**
 * Calculates how many months are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of months in passed in interval.
 */
+ (double)toMonths:(double)interval;

#pragma mark - Years

/**
 * Gets interval from value in years.
 * @param years The value in years.
 * @return The date interval.
 */
+ (double)fromYears:(double)years;

/**
 * Calculates how many years are in provided interval.
 * @param interval Interval, measured in seconds.
 * @return The amount of years in passed in interval.
 */
+ (double)toYears:(double)interval;

@end
