//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRangeBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRange.h"
#import "ISCIComparable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base class for `ISCIRange`, used throughout SciChart for visible, data and index range calculations.
 */
@interface SCIRangeBase : NSObject<ISCIRange> {
@protected
    /// :nodoc:
    id<ISCIMath> _math;
}

/**
 * Creates a new instance of `SCIRangeBase`.
 * @param range The `SCIRangeBase` instance to initialize new range with.
 * @param math The generic `ISCIMath' helper.
 */
- (instancetype)initWithRange:(SCIRangeBase *)range andMath:(id<ISCIMath>)math;

/**
 * Creates a new instance of `SCIRangeBase`.
 * @param min The min value to initialize range with.
 * @param max The max value to initialize range with.
 * @param math The generic `ISCIMath' helper.
 */
- (instancetype)initWithMin:(id<ISCIComparable>)min max:(id<ISCIComparable>)max andMath:(id<ISCIMath>)math;

@end

NS_ASSUME_NONNULL_END
