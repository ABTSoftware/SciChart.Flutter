//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRangeCalculationHelper.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRangeCalculationHelperBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a set of operations for calculation of visible range for axis that owns current instance of `ISCIRangeCalculationHelperBase`.
 */
@protocol ISCIRangeCalculationHelper <ISCIRangeCalculationHelperBase>

/**
 * Returns the max range only for that axis (by the data-series on it), based on `xRanges`.
 * @note "Windowed" means - displayed in current viewport.
 * @note It uses `ISCIAxisCore.growBy`.
 * @param xCoordCalcs Calculates the max range based on corresponding x coordinate calculators.
 * @return The calculated windowed yRange.
 */
- (id<ISCIRange>)getWindowedYRangeWithXCalculators:(nullable NSDictionary<NSString *, id<ISCICoordinateCalculator>> *)xCoordCalcs;

@end

NS_ASSUME_NONNULL_END
