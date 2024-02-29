//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILineAnnotationBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILineAnnotationBase.h"
#import "SCIAnnotationBase+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCILineAnnotationBase`.
 */
@interface SCILineAnnotationBase ()

@property (strong, nonatomic) SCISmartProperty *strokeProperty;

@end

@interface SCILineAnnotationBase ()

/**
 * Called when the stroke style has changed for this line annotation.
 * @param newStroke The new stroke style.
 */
- (void)onStrokeChanged:(SCIPenStyle *)newStroke;

/**
 * Draws the line at specified coordinates
 * @param renderContext The render context. This is a graphics object which has methods to draw lines, quads and polygons to the screen.
 * @param assetManager The asset manager. This is manager for graphic assets which has method for creation pens, brushes and textures.
 * @param start The line start coordinates.
 * @param end The line end coordinates.
 */
- (void)drawLineWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager withStart:(CGPoint)start end:(CGPoint)end;

@end

NS_ASSUME_NONNULL_END
