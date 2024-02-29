//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPathDrawingContext.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPathColor.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for path based rendering on `ISCIRenderContext2D`.
 */
@protocol ISCIPathDrawingContext <NSObject>

/**
 * Starts the context at specified x, y coordinate with specified path color.
 * @param color The pen or brush for the drawing operation.
 * @param x The x-coordinate in pixels.
 * @param y The y-coordinate in pixels.
 * @return The `ISCIPathDrawingContext` instance, to allow fluent API.
 */
- (id<ISCIPathDrawingContext>)beginWithColor:(id<ISCIPathColor>)color x:(float)x y:(float)y NS_REFINED_FOR_SWIFT;

/**
 * Moves the context to the specified x, y coordinate.
 * @param x The x-coordinate in pixels.
 * @param y The y-coordinate in pixels.
 * @return The `ISCIPathDrawingContext` instance, to allow fluent API.
 */
- (id<ISCIPathDrawingContext>)moveToX:(float)x y:(float)y NS_REFINED_FOR_SWIFT;

/**
 * Moves the context to multiple x, y coordinates.
 * @param points The array with x, y coordinates in pixels.
 * @param startIndex The start index in points array to draw.
 * @param count The amount of points to draw.
 * @return The `ISCIPathDrawingContext` instance, to allow fluent API.
 */
- (id<ISCIPathDrawingContext>)moveToPoints:(const float *)points startIndex:(int)startIndex count:(int)count NS_REFINED_FOR_SWIFT;

/**
 * Ends the segment, flushing to render target.
 */
- (void)end;

@end

NS_ASSUME_NONNULL_END
