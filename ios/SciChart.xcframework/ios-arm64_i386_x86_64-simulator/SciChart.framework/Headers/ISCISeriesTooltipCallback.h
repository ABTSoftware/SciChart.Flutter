//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesTooltipCallback.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCISeriesTooltipCore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a callback which allows to update series tooltip with latest information for specified `[x, y]` coordinates on screen.
 */
@protocol ISCISeriesTooltipCallback

/**
 * Tries to update series tooltip on screen.
 * @param seriesTooltip The tooltip to update.
 * @param point The `[x, y]` coordinates of the tooltip on screen.
 * @return `YES` if update was successful, otherwise - `NO`.
 */
- (BOOL)tryUpdateTooltip:(id<ISCISeriesTooltipCore>)seriesTooltip at:(CGPoint)point;

@end

NS_ASSUME_NONNULL_END
