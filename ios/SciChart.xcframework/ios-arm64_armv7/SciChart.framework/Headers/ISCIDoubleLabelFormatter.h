//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDoubleLabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a double value label formatter
 */
@protocol ISCIDoubleLabelFormatter

/**
 * Formats a label for the axis from the specified `data-value` passed in.
 * @param dataValue The data value to format.
 * @return The formatted value.
 */
- (id<ISCIString>)formatLabel:(double)dataValue;

/**
 * Formats a label for the cursor, from the specified `data-value` passed in.
 * @param dataValue The data value to format.
 * @return The formatted value.
 */
- (id<ISCIString>)formatCursorLabel:(double)dataValue;

@end

NS_ASSUME_NONNULL_END
