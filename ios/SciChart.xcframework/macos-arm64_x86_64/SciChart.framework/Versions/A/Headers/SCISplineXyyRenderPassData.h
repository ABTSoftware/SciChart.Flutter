//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISplineXyyRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyyRenderPassData.h"
#import "ISCIBezierControlPointsProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by Spline Renderable Series, that extends `SCIXyyRenderableSeriesBase`.
 */
@interface SCISplineXyyRenderPassData : SCIXyyRenderPassData

/**
 * Provides the collection of `XA-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xaCoords;

/**
 * Provides the collection of `YA-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *yaCoords;

/**
 * Provides the collection of `XB-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xbCoords;

/**
 * Provides the collection of `YB-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *ybCoords;

/**
 * Provides the collection of `XA1-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xa1Coords;

/**
 * Provides the collection of `YA1-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *ya1Coords;

/**
 * Provides the collection of `XB1-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xb1Coords;

/**
 * Provides the collection of `YB1-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *yb1Coords;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCISplineXyyRenderPassData` class.
 * @param bezierControlPointsProvider The provider of control points for bezier curves to draw.
 */
- (instancetype)initWithControlPointsProvider:(id<ISCIBezierControlPointsProvider>)bezierControlPointsProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
