//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMeshColorPalette.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCITexture2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A MeshColorPalette is the base class for palettes for the `SCISurfaceMeshRenderableSeries3D` and `SCIFreeSurfaceRenderableSeries3D`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIMeshColorPalette : NSObject

/**
 * Gets the `ISCITexture2D` instance to apply to the `SCISurfaceMeshRenderableSeries3D` and `SCIFreeSurfaceRenderableSeries3D`, given the size passed in.
 * @param width The width of texture to create.
 * @param height The height of texture to create.
 * @return The `ISCITexture2D` instance to apply to series.
 */
- (id<ISCITexture2D>)getTextureWithWidth:(int)width height:(int)height;

/**
 * Gets the `ISCITexture2D` instance to apply to the `SCISurfaceMeshRenderableSeries3D` and `SCIFreeSurfaceRenderableSeries3D`.
 * @note Default size of this texture is `1024x1`. If you want custom size - please use `-getTextureWithWidth:height:` instead.
 * @return The `ISCITexture2D` instance to apply to series.
 */
- (id<ISCITexture2D>)getTexture;

@end

NS_ASSUME_NONNULL_END
