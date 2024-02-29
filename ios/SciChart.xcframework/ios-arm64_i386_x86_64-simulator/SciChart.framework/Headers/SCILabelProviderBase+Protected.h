//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILabelProviderBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisProviderBase+Protected.h"
#import "SCIDoubleValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCILabelProviderBase`.
 */
@interface SCILabelProviderBase (Protected)

/**
 * Returns whether label provider should be updated.
 * @param majorTicks Major ticks to use for tick labels.
 * @return If YES - label provider should be updated, otherwise it should be cleared.
 */
- (BOOL)shouldUpdateTickLabels:(SCIDoubleValues *)majorTicks;

/**
 * Updates ticks collection according to provided axis ticks.
 * @param formattedTickLabels The list where formatted ticks should be stored.
 * @param majorTicks Major ticks to use for tick labels.
 */
- (void)updateTickLabels:(NSMutableArray<id<ISCIString>> *)formattedTickLabels majorTicks:(SCIDoubleValues *)majorTicks;

@end

NS_ASSUME_NONNULL_END
