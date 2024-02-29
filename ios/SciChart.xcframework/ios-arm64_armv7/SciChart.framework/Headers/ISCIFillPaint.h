//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIFillPaint.h is part of SCICHART®, High Performance Scientific Charts
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

@class SCIBrushStyle;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a protocol which provides a way to fill rect, ellipse or `CGPathRef` on `CGContextRef`.
 */
@protocol ISCIFillPaint <NSObject>

/**
 * Paints a rectangle fill on the `CGContextRef`.
 * @param rect The rectangle, specified in user space coordinates.
 * @param context The graphics context to draw on.
 */
- (void)fillRect:(CGRect)rect inContext:(CGContextRef)context;

/**
 * Paints the ellipse fill that fits inside the specified `rect`.
 * @param rect The rectangle that defines the area for the ellipse to fit in.
 * @param context The graphics context to draw on.
 */
- (void)fillEllipseInRect:(CGRect)rect inContext:(CGContextRef)context;

/**
 * Paints a `CGPathRef` fill on the passed in `CGContextRef`.
 * @param path The `CGPathRef` instange to be drawn on the `context`
 * @param context The graphics context to draw on.
 */
- (void)fillPath:(CGPathRef)path insideRect:(CGRect)rect inContext:(CGContextRef)context;

@end

NS_ASSUME_NONNULL_END
