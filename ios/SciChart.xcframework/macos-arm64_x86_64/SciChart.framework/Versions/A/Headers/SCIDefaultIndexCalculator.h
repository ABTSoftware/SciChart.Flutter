//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2022. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDefaultIndexCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDoubleValues.h"
#import "ISCIIndexCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Default implementation of `ISCIIndexCalculator`
 */
@interface SCIDefaultIndexCalculator : NSObject<ISCIIndexCalculator>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIDefaultIndexCalculator` class.
 * @param indexValues The dataSeries which is used to hold index values.
 */
- (instancetype)initWithDoubleValues:(SCIDoubleValues *)indexValues NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
