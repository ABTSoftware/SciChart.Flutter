//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDrawablePointMarker.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPointMarkerBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Allows any custom drawing to be rendered via `ISCIRenderContext2D` API at each data point location.
 * @warning Derived classes must implement `-internalDrawWithContext:at:withStrokePen:andFillBrush:` which draws `PointMarker` at specified point, otherwise exception will be throwed.
 * @see `SCIPointMarkerBase`.
 */
@interface SCIDrawablePointMarker : SCIPointMarkerBase

/**
 * Renders single PointMarker at specified coordinates on screen.
 * @param renderContext The `ISCIRenderContext2D` instance to draw to.
 * @param point The coorsinates to draw point marker at.
 * @param pen Stroke `ISCIPen2D` instance.
 * @param brush Fill `ISCIBrush2D` instance.
 */
- (void)internalDrawWithContext:(id<ISCIRenderContext2D>)renderContext at:(CGPoint)point withStrokePen:(id<ISCIPen2D>)pen andFillBrush:(id<ISCIBrush2D>)brush;

@end

NS_ASSUME_NONNULL_END
