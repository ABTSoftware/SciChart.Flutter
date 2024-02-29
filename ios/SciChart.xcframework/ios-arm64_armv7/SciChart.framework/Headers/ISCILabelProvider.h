//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCILabelProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisProviderBase.h"
#import "ISCIComparable.h"
#import "ISCIString.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Protocol to define a `LabelProvider` which allows programmatic overriding of axis labels.
 */
@protocol ISCILabelProvider <ISCIAxisProviderBase>

/**
 * Formats a label for the axis from the specified `data-value` passed in.
 * @param dataValue The data value to format.
 * @return The formatted value.
 */
- (id<ISCIString>)formatLabel:(id<ISCIComparable>)dataValue;

/**
 * Formats a label for the cursor, from the specified `data-value` passed in.
 * @param dataValue The data value to format.
 * @return The formatted value.
 */
- (id<ISCIString>)formatCursorLabel:(id<ISCIComparable>)dataValue;

/**
 * Gets the list of formatted axis tick labels for currently attached axis.
 */
@property (strong, nonatomic, readonly) NSArray<id<ISCIString>> *formattedTickLabels;

@end

NS_ASSUME_NONNULL_END
