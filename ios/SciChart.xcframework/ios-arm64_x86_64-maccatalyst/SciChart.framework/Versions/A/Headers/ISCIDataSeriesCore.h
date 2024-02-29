//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDataSeriesCore.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIDataSeriesObserver.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines base methods for all DataSeries throughout the SciChart SDK.
 */
@protocol ISCIDataSeriesCore <NSObject>

/**
 * Defines the name of this series.
 */
@property (copy, nonatomic, nullable) NSString *seriesName;

/**
 * Gets whether the DataSeries has values (is not empty).
 */
@property (nonatomic, readonly) BOOL hasValues;

/**
 * Gets the number of points in this series.
 */
@property (nonatomic, readonly) NSInteger count;

/**
 * Clears the series, resetting internal lists to zero size.
 */
- (void)clear;

/**
 * Clears the series, resetting internal lists to zero size.
 * @param retainCapacity If YES - series resets internal lists to zero size, otherwise - internal list are recreated.
 */
- (void)clearWithRetainCapacity:(BOOL)retainCapacity;

/**
 * Adds `SCIDataSeriesObserver` which observes changes in this series.
 * @param observer The observer to add.
 */
- (void)addObserver:(SCIDataSeriesObserver)observer;

/**
 * Removes `SCIDataSeriesObserver` from list of change observers for this series.
 * @param observer The observer to remove.
 */
- (void)removeObserver:(SCIDataSeriesObserver)observer;

@end

NS_ASSUME_NONNULL_END
