//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRangeCalculatorHelperBase.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIAxisCore.h"

#define ZERO_RANGE_GROW_BY 0.01

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an abstract base implementation of `ISCIRangeCalculationHelperBase`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIRangeCalculatorHelperBase<TAxis: id<ISCIAxisCore>> : NSObject<ISCIRangeCalculationHelperBase>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIRangeCalculatorHelperBase` class.
 * @param maximumRange The `ISCIRange` instance for storing maximum range.
 * @param dataRange The `ISCIRange` instance for storing data range.
 * @param math The `ISCIMath` instance used for calculations.
 */
- (instancetype)initWithAxisType:(Protocol *)type maximumRange:(id<ISCIRange>)maximumRange dataRange:(id<ISCIRange>)dataRange math:(id<ISCIMath>)math NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
