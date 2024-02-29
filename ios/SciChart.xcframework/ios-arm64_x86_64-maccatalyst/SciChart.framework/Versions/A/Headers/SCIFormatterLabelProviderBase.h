//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFormatterLabelProviderBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILabelProviderBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A base class to define a LabelProvider which uses `ISCILabelFormatter` to format its labels.
 */
@interface SCIFormatterLabelProviderBase<T : id<ISCIAxisCore>> : SCILabelProviderBase<T>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/// :nodoc:
- (instancetype)initWithAxisType:(Protocol *)axisType NS_UNAVAILABLE;

/**
 * Formats a label for the axis from the specified `data-value` passed in.
 * @note Formatting is achieived using underlying associated `ISCILabelFormatter` instance.
 * @param dataValue The data value to format.
 * @return The formatted value.
 * @warning Do not override this method. It is supposed to be final.
 */
- (id<ISCIString>)formatLabel:(id<ISCIComparable>)dataValue;

/**
 * Formats a label for the cursor, from the specified `data-value` passed in.
 * * @note Formatting is achieived using underlying associated `ISCILabelFormatter` instance.
 * @param dataValue The data value to format.
 * @return The formatted value.
 * @warning Do not override this method. It is supposed to be final.
 */
- (id<ISCIString>)formatCursorLabel:(id<ISCIComparable>)dataValue;

@end

NS_ASSUME_NONNULL_END
