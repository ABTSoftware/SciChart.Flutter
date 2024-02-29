//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDeltaCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisDelta.h"
#import "ISCIComparable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides an interface for Delta calculators.
 */
@protocol ISCIDeltaCalculator <NSObject>

/**
 * Given an absolute Axis Min and Max, returns a `ISCIAxisDelta` instance containing sensible `MinorDelta` and `MajorDelta` values.
 * @param min The axis VisibleRange min value.
 * @param max The axis VisibleRange max value.
 * @param minorsPerMajor The number of Minor Delta ticks per Major Tick.
 * @param maxTicks The max ticks.
 * @return The `ISCIAxisDelta` instance.
 */
- (id<ISCIAxisDelta>)getDeltaFromRangeMin:(id<ISCIComparable>)min max:(id<ISCIComparable>)max minorsPerMajor:(unsigned int)minorsPerMajor maxTicks:(unsigned int)maxTicks NS_SWIFT_NAME(getDeltaFromRange(min:max:minorsPerMajor:maxTicks:));

@end

NS_ASSUME_NONNULL_END
