//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartListenerService.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartListener.h"

/**
 * Defines the protocol for `ISCIChartListenerService` which allows to subscribe to chart updates.
 */
@protocol ISCIChartListenerService <ISCIChartListener>

/**
 * Register specified `ISCIChartListener` instance as listener for changes in chart.
 * @param listener The listener instance to add.
 */
- (void)addListener:(nonnull id<ISCIChartListener>)listener;

/**
 * Removes specified `ISCIChartListener` instance from list of listener for changes in chart.
 * @param listener The listener instance to remove.
 */
- (void)removeListener:(nonnull id<ISCIChartListener>)listener;

@end
