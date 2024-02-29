//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderOperationLayers.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisposableBase.h"
#import "ISCIDrawable.h"
#import "SCIRenderOperationLayer.h"

/**
 * Enumeration constants to define the available `Render Layers`.
 */
typedef NS_ENUM(NSUInteger, SCIRenderLayer) {
    /**
     * Defines Axis Bands render layer.
     */
    SCIRenderLayer_AxisBands = 0,
    
    /**
     * Defines Axis Minor Grid Lines render layer.
     */
    SCIRenderLayer_AxisMinorGridLines = 1,
    
    /**
     * Defines Axis Major Grid Lines render layer.
     */
    SCIRenderLayer_AxisMajorGridLines = 2,
    
    /**
     * Defines RenderableSeries render layer.
     */
    SCIRenderLayer_RenderableSeries = 3
};

/**
 * A collection of `SCIRenderOperationLayer` layers, which allow rendering operations to be posted to a layered queue for later.
 */
@interface SCIRenderOperationLayers : SCIDisposableBase<ISCIDrawable>

/**
 * Gets the `SCIRenderOperationLayers` with specified layerId.
 * @param layerId The layer id.
 * @return The `SCIRenderOperationLayers` instance.
 *
 * Possible Layers:
 * - `SCIRenderLayer.SCIRenderLayer_AxisBands`.
 * - `SCIRenderLayer.SCIRenderLayer_AxisMinorGridLines`.
 * - `SCIRenderLayer.SCIRenderLayer_AxisMajorGridLines`.
 * - `SCIRenderLayer.SCIRenderLayer_RenderableSeries`.
 */
- (nonnull SCIRenderOperationLayer *)getById:(SCIRenderLayer)layerId;

@end
