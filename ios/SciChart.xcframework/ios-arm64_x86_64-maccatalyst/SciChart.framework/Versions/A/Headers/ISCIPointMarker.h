//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPointMarker.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIInvalidatableElement.h"
#import "ISCIAttachable.h"
#import "ISCIRenderSurfaceChangedListener.h"
#import "ISCIRenderContext2D.h"
#import "ISCIAssetManager2D.h"
#import "SCIPenStyle.h"
#import "SCIBrushStyle.h"

@protocol ISCIRenderableSeries;

NS_ASSUME_NONNULL_BEGIN

/**
 * Specifies protocol for rendering point markers. A point marker is something which is displayed at data points.
 */
@protocol ISCIPointMarker <ISCIInvalidatableElement, ISCIAttachable, ISCIRenderSurfaceChangedListener>

/**
 * Gets the `ISCIRenderableSeries`, which this `ISCIPointMarker` instance is associated with.
 * @return Currently attached `ISCIRenderableSeries` instance.
 */
@property (weak, nonatomic, nullable) id<ISCIRenderableSeries> renderableSeries;

/**
 * Defines the stroke style (outline) of the PointMarker.
 */
@property (strong, nonatomic) SCIPenStyle *strokeStyle;

/**
 * Defines the fill style (fill) of the PointMarker.
 */
@property (strong, nonatomic) SCIBrushStyle *fillStyle;

/**
 * Defines the PointMarker drawing size in points on screen.
 */
@property (nonatomic) CGSize size;

/**
 * Renders the PointMarker at specified points with fill and stroke. Each point is a coordinate in the centre of the `ISCIPointMarker`.
 * @param renderContext The `ISCIRenderContext2D` instance to draw to.
 * @param assetManager The `ISCIAssetManager2D` instance which allows to create assets for drawing on render context.
 * @param strokeStyle Stroke `SCIPenStyle` instance.
 * @param fillStyle Fill `SCIBrushStyle` instance.
 * @param opacity The opacity of point marker.
 * @param points Array of points to draw `[x0, y0, x1, y1, x2, y2 ...]`.
 * @param startIndex Start index of values in the array which need to be drawn.
 * @param count The number of values in the array to process.
 */
- (void)onDrawWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager strokeStyle:(SCIPenStyle *)strokeStyle fillStyle:(SCIBrushStyle *)fillStyle opacity:(float)opacity points:(float *)points startIndex:(int)startIndex count:(int)count;

@end

NS_ASSUME_NONNULL_END
