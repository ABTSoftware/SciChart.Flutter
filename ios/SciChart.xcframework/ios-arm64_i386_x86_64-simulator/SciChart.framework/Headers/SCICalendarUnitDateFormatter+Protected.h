//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICalendarUnitDateFormatter+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICalendarUnitDateFormatter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCICalendarUnitDateFormatter`.
 */
@interface SCICalendarUnitDateFormatter (Protected)

/**
 * Creates a formatter for provided `NSCalendarUnit`.
 * @param calendarUnit Unit to create date formatter for.
 * @return The new instalce of `NSDateFormatter`.
 */
- (NSDateFormatter *)createFormatterForCalendarUnit:(NSCalendarUnit)calendarUnit;

@end

NS_ASSUME_NONNULL_END
