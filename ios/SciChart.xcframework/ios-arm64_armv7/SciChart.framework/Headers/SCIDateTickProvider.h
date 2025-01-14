//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDateTickProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDeltaTickProvider.h"
#import "ISCIDeltaCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides ticks for the `SCIDateAxis`.
 */
@interface SCIDateTickProvider : SCIDeltaTickProvider

/**
 * Creates a new instance of `SCIDateTickProvider` class.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

/// :nodoc:
- (instancetype)initWithDeltaCalculator:(id<ISCIDeltaCalculator>)deltaCalculator NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
