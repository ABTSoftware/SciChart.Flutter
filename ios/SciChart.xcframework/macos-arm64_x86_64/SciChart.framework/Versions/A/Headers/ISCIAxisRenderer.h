//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisRenderer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDrawable.h"
#import "ISCIAxisRendererCore.h"
#import "ISCIAxisLayoutChangeListener.h"
#import "ISCIAssetManager2D.h"

/**
 * Specifies interface for renderer which is responsible for rendering of `ISCIAxis` implementations.
 */
@protocol ISCIAxisRenderer <ISCIDrawable, ISCIAxisRendererCore, ISCIAxisLayoutChangeListener>

/**
 * Gets desired size for currently attached axis.
 */
@property (nonatomic, readonly) CGSize desiredSize;

/**
 * Measure required size for currently attached axis.
 */
- (void)measure;

/**
 * Performs layout of axis renderer in specified bounds.
 * @param assetManager `ISCIAssetManager2D` instance which manages assets for current `ISCIRenderSurface` instance.
 * @param bounds Bounds in pixels where axis should be drawn.
 */
- (void)onLayout:(nonnull id<ISCIAssetManager2D>)assetManager bounds:(CGRect)bounds;

@end
