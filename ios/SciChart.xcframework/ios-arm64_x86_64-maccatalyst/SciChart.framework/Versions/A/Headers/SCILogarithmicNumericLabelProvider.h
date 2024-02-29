//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILogarithmicNumericLabelProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFormatterLabelProviderBase.h"
#import "ISCILogarithmicNumericAxis.h"
#import "ISCILabelFormatter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCILogarithmicNumericLabelProvider` is a pass-through which uses the `ISCIAxisCore.textFormatting` and `ISCIAxisCore.cursorTextFormatting` properties to format axis and cursor label. texts
 */
@interface SCILogarithmicNumericLabelProvider : SCIFormatterLabelProviderBase<id<ISCILogarithmicNumericAxis>>

/**
 * Creates a new instance of `SCILogarithmicNumericLabelProvider` class.
 */
- (instancetype)init;

/**
 * Creates a new instance of `SCILogarithmicNumericLabelProvider` class.
 * @param labelFormatter The `SCILabelFormatterProtocol` used by this label provider.
 */
- (instancetype)initWithLabelFormatter:(id<ISCILabelFormatter>)labelFormatter NS_DESIGNATED_INITIALIZER;

/// :nodoc:
- (instancetype)initWithAxisType:(Protocol *)axisType andLabelFormatter:(id<ISCILabelFormatter>)labelFormatter NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
