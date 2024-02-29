//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2022. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIEmptyIndexCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIIndexCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines `ISCIIndexCalculator` for case when there is not enough index data to perform proper calculation.
 * In this case we reinterpret value as index and vice versa.
 */
@interface SCIEmptyIndexCalculator : NSObject<ISCIIndexCalculator>

/**
 * Gets the shared `SCIEmptyIndexCalculator` instance.
 */
+ (instancetype)sharedInstance;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
