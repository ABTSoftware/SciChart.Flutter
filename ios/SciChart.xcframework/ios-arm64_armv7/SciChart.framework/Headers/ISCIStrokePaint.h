//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIStrokePaint.h is part of SCICHART®, High Performance Scientific Charts
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

@class SCIPenStyle;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a protocol which provides a way to draw lines, rects, ellipses or `CGPathRef` on `CGContextRef`.
 */
@protocol ISCIStrokePaint <NSObject>

/**
 * Paints a rectangle stroke on passed in `CGContextRef`.
 * @param rect The rectangle, specified in user space coordinates.
 * @param context The graphics context to draw on.
 */
- (void)drawRect:(CGRect)rect withContext:(CGContextRef)context;

/**
 * Paints an ellipse stroke that fits inside the specified rectangle in passed in.
 * @param context The graphics context to draw on.
 * @param rect The rectangle that defines the area for the ellipse to fit in.
 */
- (void)drawEllipseWithContext:(CGContextRef)context inRect:(CGRect)rect;

/**
 * Paints a `CGPathRef` stroke on passed in `CGContextRef`.
 * @param path The `CGPathRef` instange to be drawn on the `context`
 * @param context The graphics context to draw on.
 * @param rect A rectangle defining the portion of the view to draw in.
 */
- (void)drawPath:(CGPathRef)path withContext:(CGContextRef)context inRect:(CGRect)rect;

/**
 * Paints lines strokes on passed in `CGContextRef`.
 * @param coordinates Array of points to draw `[x0, y0, x1, y1, x2, y2 ...]`.
 * @param count The amount of points to draw.
 * @param context The graphics context to draw on.
 * @param rect A rectangle defining the portion of the view to draw in.
 * @note Four points per line is used, e.g.: first line - [x0, y0, x1, y1]; second line - [x2, y2, x3, y3];
 */
- (void)drawLines:(const CGFloat *)coordinates count:(int)count withContext:(CGContextRef)context inRect:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
