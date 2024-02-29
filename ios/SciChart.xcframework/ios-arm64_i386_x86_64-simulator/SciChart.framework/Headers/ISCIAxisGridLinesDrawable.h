//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisGridLinesDrawable.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIAssetManager2D.h"
#import "SCIRenderOperationLayers.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines interface with callback for rendering of grid lines for `ISCIAxis` implementations.
 */
@protocol ISCIAxisGridLinesDrawable <NSObject>

/**
 * Draws axis grid lines in the center of the chart.
 * @param renderContext `ISCIRenderContext2D` instance to draw on.
 * @param assetManager `ISCIAssetManager2D` instance which manages assets related to current `ISCIRenderSurface`.
 * @param drawingLayers Specifies different drawing layers for drawing of axis grid lines.
 * @see `SCIRenderLayer.SCIRenderLayer_AxisBands`.
 * @see `SCIRenderLayer.SCIRenderLayer_AxisMinorGridLines`.
 * @see `SCIRenderLayer.SCIRenderLayer_AxisMajorGridLines`.
 * @see `SCIRenderLayer.SCIRenderLayer_RenderableSeries`.
 */
- (void)onDrawWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager drawingLayers:(SCIRenderOperationLayers *)drawingLayers;

@end

NS_ASSUME_NONNULL_END
