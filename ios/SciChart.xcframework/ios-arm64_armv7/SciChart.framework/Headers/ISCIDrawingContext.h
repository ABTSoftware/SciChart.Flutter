//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDrawingContext.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderContext2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the drawing context methods for drawing many primitives with one draw call.
 */
@protocol ISCIDrawingContext <NSObject>

/**
 * Draws provided points with this drawing context on provided `ISCIRenderContext2D`.
 * @param renderContext The render context to draw on.
 * @param pathColor The path color to draw points with.
 * @param points The array of point to draw.
 * @param startIndex The start index in points array to start drawing from.
 * @param count The amount of points to draw from points array.
 */
- (void)drawWith:(id<ISCIRenderContext2D>)renderContext pathColor:(id<ISCIPathColor>)pathColor points:(float *)points startIndex:(int)startIndex count:(int)count;

@end

NS_ASSUME_NONNULL_END
