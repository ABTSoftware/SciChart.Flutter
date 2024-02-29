//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseDataDistributionCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIBaseDataDistributionCalculator.h"

/**
 * Defines a base class for `ISCIDataDistributionCalculator`.
 */
@interface SCIBaseDataDistributionCalculator : NSObject<ISCIBaseDataDistributionCalculator> {
@protected
    /// Used to indicate whether the data is sorted in ascending order.
    BOOL _dataSortedAscending;
    /// Used to indicate whether the data is evenly spaced.
    BOOL _dataEvenlySpaced;
    /// Used to indicate whether the data contains `NaN` values.
    BOOL _dataContainsNaN;
}

@end
