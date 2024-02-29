//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIBezierControlPointsProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFloatValues.h"
#import "ISCIDisposable.h"
#import "ISCICleanable.h"
#import "SCIIndexRange.h"
#import "ISCIDataSeries.h"
#import "ISCICoordinateCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a provider of control points for cubic bezier curve which are drawn through set of specified points in 2D space
 */
@protocol ISCIBezierControlPointsProvider <NSObject>

/**
 * Calculates control points for cubic bezier curves to drawn smooth line though specified 2D coordinates
 *
 * @param xCoords  The xCoords to draw through
 * @param yCoords  The yCoords to draw through
 * @param xaCoords The xCoords of first control points to set
 * @param yaCoords The yCoords of first control points to set
 * @param xbCoords The xCoords of second control points to set
 * @param ybCoords The yCoords of second control points to set
 * @param count    The amount of points to draw through
 */
- (void)getBezierCurveControlPointsForXCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords xaCoords:(SCIFloatValues *)xaCoords yaCoords:(SCIFloatValues *)yaCoords xbCoords:(SCIFloatValues *)xbCoords ybCoords:(SCIFloatValues *)ybCoords count:(NSInteger)count;

/**
 * Adjusts xPointRange in case if provider requires some additional points to calculate control points
 *
 * @param xPointRange           The point range to adjust
 * @param dataSeries            The data series associated with this provider
 * @param xCoordinateCalculator The current coordinate calculator for XAxis
 */
- (void)adjustXPointRange:(SCIIndexRange *)xPointRange dataSeries:(id<ISCIDataSeries>)dataSeries xCoordinateCalculator:(id<ISCICoordinateCalculator>)xCoordinateCalculator;

@end

NS_ASSUME_NONNULL_END
