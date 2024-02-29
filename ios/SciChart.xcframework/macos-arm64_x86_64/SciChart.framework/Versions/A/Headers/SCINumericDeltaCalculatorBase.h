//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCINumericDeltaCalculatorBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDeltaCalculator.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SCINiceScaleProtocol;

/**
 * Defines a base class for Numeric Delta Calculator.
 */
@interface SCINumericDeltaCalculatorBase : NSObject<ISCIDeltaCalculator>

/**
 * Calculates axis delta for specified arguments passed in.
 * @param min The axis VisibleRange min value
 * @param max The axis VisibleRange max value
 * @param minorsPerMajor The number of `Minor Delta` ticks per Major Tick.
 * @param maxTicks The max ticks.
 * @return The `ISCIAxisDelta` instance.
 */
- (id<ISCIAxisDelta>)calculateDeltaInternalWithMin:(double)min max:(double)max minorsPerMajor:(unsigned int)minorsPerMajor maxTicks:(unsigned int)maxTicks;

@end

NS_ASSUME_NONNULL_END
