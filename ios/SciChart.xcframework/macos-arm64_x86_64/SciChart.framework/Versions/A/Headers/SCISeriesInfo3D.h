//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesInfo3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesInfoCore.h"
#import "ISCIRenderableSeries3D.h"
#import "ISCIHitTestInfoUpdatable3D.h"
#import "SCIPoint3D.h"
#import "SCIDoublePoint3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which contains information about a 3D series, such as name, value, color based on `SCIHitTestInfo3D` values.
 */
@interface SCISeriesInfo3D : SCISeriesInfoCore<ISCIHitTestInfoUpdatable3D>

/**
 * Defines the `SCIDoublePoint3D` Vertex value at the `hit-test` site.
 */
@property (strong, nonatomic) SCIDoublePoint3D *hitVertex;

/**
 * Defines the `SCIPoint3D` Vertex coordinates at the `hit-test` site.
 */
@property (strong, nonatomic) SCIPoint3D *hitVertexCoords;

/**
 * Gets the formatted `hitVertex` x value.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedXValue;

/**
 * Gets the formatted `hitVertex` y value.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedYValue;

/**
 * Gets the formatted `hitVertex` z value.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedZValue;

/**
 * Updates this instance with information.
 */
- (void)update;

@end

NS_ASSUME_NONNULL_END
