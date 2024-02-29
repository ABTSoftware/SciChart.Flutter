//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCILabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisCore.h"
#import "ISCIDoubleLabelFormatter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol to a label formatter which is used by `SCIFormatterLabelProviderBase`.
 */
@protocol ISCILabelFormatter <ISCIDoubleLabelFormatter>

/**
 * Updates this label formatter with values provided by axis.
 * @param axis The current axis.
 */
- (void)updateWithAxis:(id<ISCIAxisCore>)axis NS_SWIFT_NAME(update(_:));

/**
 * Updates ticks collection according to provided axis ticks.
 * @param formattedTickLabels The list where formatted ticks should be stored.
 * @param majorTicks Major ticks to use for tick labels.
 * @return Return true if ticks were formatted by this `ISCILabelFormatter` implementation, so there is no need to format them in parent `ISCILabelProvider`, otherwise return false
 */
- (BOOL)updateTickLabels:(NSMutableArray<id<ISCIString>> *)formattedTickLabels majorTicks:(SCIDoubleValues *)majorTicks;

@end

NS_ASSUME_NONNULL_END
