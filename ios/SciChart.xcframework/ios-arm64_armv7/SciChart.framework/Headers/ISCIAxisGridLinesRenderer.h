//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisGridLinesRenderer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAssetManager2D.h"
#import "ISCIAxisGridLinesDrawable.h"
#import "ISCIAxisRendererCore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Specifies interface for renderer which is responsible for drawing of axis grid lines.
 */
@protocol ISCIAxisGridLinesRenderer <ISCIAxisGridLinesDrawable, ISCIAxisRendererCore>

/**
 * Performs layout of grid lines renderer in bounds specified by `viewportSize`.
 * @param assetManager `ISCIAssetManager2D` instance which manages assets for current `ISCIRenderSurface` instance.
 * @param viewportSize Viewport size in pixels where grid lines should be drawn.
 */
- (void)onLayoutWithAssetManager:(id<ISCIAssetManager2D>)assetManager viewportSize:(CGSize)viewportSize;

@end

NS_ASSUME_NONNULL_END
