//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIXDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIXDataSeriesValues.h"
#import "ISCIList.h"

/**
 * Defines the interface to an X DataSeries, a series containing X data-points.
 */
@protocol ISCIXDataSeries <ISCIXDataSeriesValues>

#pragma mark - Remove

/**
 * Removes data points at specified location.
 * @param index The index of data point to remove.
 */
- (void)removeAt:(NSInteger)index;

/**
 * Removes the range of data points.
 * @param index The index of the first data point to remove.
 * @param count The amount of items to remove.
 */
- (void)removeRangeAt:(NSInteger)index count:(NSInteger)count;

@end
