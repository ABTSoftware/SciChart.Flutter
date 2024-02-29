//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisDelta.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an Axis Delta, which provides Major and Minor deltas used by `ISCIDeltaCalculator`.
 * @note `T` - is the type of delta values
 */
@interface SCIAxisDelta<T : id<ISCIComparable>> : NSObject<ISCIAxisDelta>

/**
 * Creates a new instance of `SCIAxisDelta` class.
 * @param minorDelta The minor delta value.
 * @param majorDelta The major delta value.
 */
- (instancetype)initWithMinorDelta:(T)minorDelta majorDelta:(T)majorDelta;

@end

NS_ASSUME_NONNULL_END
