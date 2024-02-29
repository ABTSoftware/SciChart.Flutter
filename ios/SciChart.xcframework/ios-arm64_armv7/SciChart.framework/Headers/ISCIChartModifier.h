//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartModifierCore.h"
#import "ISCIChartSurfaceChangeListener.h"
#import "ISCIChartSurfaceProvider.h"

@class SCIRenderableSeriesCollection;
@class SCIAxisCollection;

/**
 * Definces the interface to a base chart modifier `SCIChartModifierBase`, which can be used to extend the interactivity or rendering of the surface `ISCIChartSurface`.
 */
@protocol ISCIChartModifier <ISCIChartModifierCore, ISCIChartSurfaceChangeListener, ISCIChartSurfaceProvider>

/**
 * Gets the parent `ISCIChartSurface.renderableSeries` collection.
 */
@property (nonatomic, readonly, nonnull) SCIRenderableSeriesCollection *renderableSeries;

/**
 * Gets the parent `ISCIChartSurface.xAxes` collection.
 */
@property (nonatomic, readonly, nonnull) SCIAxisCollection *xAxes;

/**
 * Gets the parent `ISCIChartSurface.yAxes` collection.
 */
@property (nonatomic, readonly, nonnull) SCIAxisCollection *yAxes;

/**
 * Gets the  primary XAxis, which is the first axis in the XAxes collection.
 */
@property (nonatomic, readonly, nullable) id<ISCIAxis> xAxis;

/**
 * Gets the primary YAxis, which is the first axis in the YAxes collection.
 */
@property (nonatomic, readonly, nullable) id<ISCIAxis> yAxis;

@end
