//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBezierCurveInterpolator.h is part of SCICHART®, High Performance Scientific Charts
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
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Helper class which allows to interpolate value for cubic bezier curve.
 */
@interface SCIBezierCurveInterpolator : NSObject

/**
 * The start point of the bezier curve.
 */
@property (nonatomic) CGPoint start;

/**
 * The a control point of the bezier curve.
 */
@property (nonatomic) CGPoint a;

/**
 * The b control point of the bezier curve.
 */
@property (nonatomic) CGPoint b;

/**
 * The start point of the bezier curve.
 */
@property (nonatomic) CGPoint end;

/**
 * Gets interpolated y values for specified x value.
 * @param x The x value.
 * @return The interpolated y value.
 */
- (float)getYForX:(float)x;

/**
 * Calculates approximate length of the bezier curve
 * @return The length of bezier curve
 */
- (float)calculateApproximatedLength;

/**
 * Splits bezier curve at specified t.
 * @param t The t values from 0 to 1 to split curve at.
 * @param subStart The start point of sub curve.
 * @param subA The a control point of sub curve.
 * @param subB The b control point of sub curve.
 * @param subEnd The end point of sub curve.
 */
- (void)divideCurveAtT:(float)t subStart:(CGPoint *)subStart subA:(CGPoint *)subA subB:(CGPoint *)subB subEnd:(CGPoint *)subEnd;

@end

NS_ASSUME_NONNULL_END
