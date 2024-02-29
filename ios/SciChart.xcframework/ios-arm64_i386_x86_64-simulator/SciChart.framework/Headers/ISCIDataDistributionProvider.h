//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDataDistributionProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/**
 * Defines the protocol with methods for tracking order of data.
 */
@protocol ISCIDataDistributionProvider <NSObject>

/**
 * Gets the value indicating whether the data is sorted in ascending order.
 */
@property (nonatomic, readonly) BOOL isDataSortedAscending;

/**
 * Gets the value indicating whether the data is evenly spaced.
 */
@property (nonatomic, readonly) BOOL isDataEvenlySpaced;

/**
 * Get the value indicating whether the data contains `NaN` values.
 */
@property (nonatomic, readonly) BOOL isDataContainsNaN;

@end
