//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartSurface3DChangeListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderableSeriesChangeListener.h"

/**
 * Defines the interface with methods which are used for notification about changes in `SCIChartSurface3D` instance.
 */
@protocol ISCIChartSurface3DChangeListener <ISCIRenderableSeriesChangeListener>

/**
 * Called when parent `ISCIChartSurface3D.xAxis` changed.
 */
- (void)onXAxisChanged;

/**
 * Called when parent `ISCIChartSurface3D.yAxis` changed.
 */
- (void)onYAxisChanged;

/**
 * Called when parent `ISCIChartSurface3D.zAxis` changed.
 */
- (void)onZAxisChanged;

@end
