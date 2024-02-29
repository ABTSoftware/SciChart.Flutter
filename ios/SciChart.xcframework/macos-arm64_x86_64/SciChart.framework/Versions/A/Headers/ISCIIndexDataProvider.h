//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2022. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIIndexDataProvider.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIIndexCalculator.h"

/**
 * Defines an interface that provide index data used by `ISCIIndexAxis`
 */
@protocol ISCIIndexDataProvider <ISCIAttachable>

/**
 * Gets a `ISCIIndexCalculator` instance with latest index data, which is used to convert X values to indices and vice versa.
 */
@property (nonatomic, readonly) id<ISCIIndexCalculator> currentIndexCalculator;

@end
