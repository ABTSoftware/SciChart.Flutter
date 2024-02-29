//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRangeCalculationHelperBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "ISCIRange.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a protocol which used as helper for range calculations on axes throughout SciChart.
 */
@protocol ISCIRangeCalculationHelperBase <ISCIAttachable>

/**
 * Gets data range(full extents of the data) of the Axis.
 * @param forceCacheUpdate if true forces full recalculation of data range even if data hasn't changed.
 * @return data range of axis.
 */
- (id<ISCIRange>)getDataRange:(BOOL)forceCacheUpdate;

/**
 * Gets the maximum range of the axis, based on the data-range of all series.
 * @param forceCacheUpdate if true forces full recalculation of maximum range even if data hasn't changed.
 * @return maximum range of axis.
 */
- (id<ISCIRange>)getMaximumRange:(BOOL)forceCacheUpdate;

/**
 * Called internally when data range changes.
 */
- (void)onDataRangeChanged;

@end

NS_ASSUME_NONNULL_END
