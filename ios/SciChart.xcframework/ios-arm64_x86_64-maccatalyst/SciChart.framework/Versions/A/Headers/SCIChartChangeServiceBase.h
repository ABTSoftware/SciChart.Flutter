//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartChangeServiceBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartListenerService.h"

/**
 * Defines base class for all  `ISCIChartListenerService` implementations.
 */
@interface SCIChartChangeServiceBase : NSObject<ISCIChartListenerService>

/**
 * Creates new instance of `SCIChartChangeServiceBase` with listener.
 * @param listener The listener instance to add after creation.
 */
+ (nonnull instancetype)serviceWithListener:(nonnull id<ISCIChartListener>)listener;

@end
