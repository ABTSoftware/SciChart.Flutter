//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUserDefinedDistributionCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseDataDistributionCalculator.h"
#import "ISCIDataDistributionCalculator.h"

/**
 * Allows user provided flags for `IsSortedAscending` and `IsEvenlySpaced`, flags which are used to determine the correct algorithm for sorting, searching and data-compression in SciChart.
 * @note Overriding these flags allows for faster operation where the data distribution is known in advance.
 */
@interface SCIUserDefinedDistributionCalculator : SCIBaseDataDistributionCalculator<ISCIDataDistributionCalculator>

/**
 * Defines the value indicating whether the data is sorted in ascending order.
 */
@property (nonatomic) BOOL isDataSortedAscending;

/**
 * Defines the value indicating whether the data is evenly spaced.
 */
@property (nonatomic) BOOL isDataEvenlySpaced;

/**
 * Defines the value indicating whether the data contains `NaN` values.
 */
@property (nonatomic) BOOL isDataContainsNaN;

@end
