//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAssetManager2D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDisposable.h"
//#import <CoreGraphics/CoreGraphics.h>
#import "ISCITexture2D.h"
#import "ISCIPen2D.h"
#import "SCIPenStyle.h"
#import "ISCIBrush2D.h"
#import "SCIBrushStyle.h"
#import "SCITextureMappingMode.h"
#import "SCIResourceId.h"

@class SCIBitmap;
@class UIImage;
@class UIColor;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines protocol with method for creation of assets used for drawing on `IRenderSurface` via `IRenderContext2D` methods.
 * @see `ISCIRenderSurface`.
 * @see `ISCIRenderContext2D`.
 */
@protocol ISCIAssetManager2D <ISCIDisposable>

/**
 * Creates a `ISCIPen2D` instance from specified `SCIPenStyle`.
 * @param style The SCIPenStyle to create pen from.
 * @return The `ISCIPen2D` instance.
 */
- (id<ISCIPen2D>)penWithStyle:(SCIPenStyle *)style;

/**
 * Creates a `ISCIPen2D` instance from specified `SCIPenStyle`.
 * @param style The SCIPenStyle to create pen from.
 * @param opacity The opacity of created pen.
 * @return The `ISCIPen2D` instance.
 */
- (id<ISCIPen2D>)penWithStyle:(SCIPenStyle *)style andOpacity:(float)opacity;

/**
 * Creates a `ISCIBrush2D` instance from specified `SCIBrushStyle`.
 * @param style The BrushStyle to create brush from.
 * @return The `ISCIBrush2D` instance.
 */
- (id<ISCIBrush2D>)brushWithStyle:(SCIBrushStyle *)style;

/**
 * Creates a `ISCIBrush2D` instance from specified `SCIBrushStyle`
 * @param style The BrushStyle to create brush from.
 * @param textureMappingMode The texture mapping which will be used by created brush.
 * @return The `ISCIBrush2D` instance.
 */
- (id<ISCIBrush2D>)brushWithStyle:(SCIBrushStyle *)style textureMappingMode:(SCITextureMappingMode)textureMappingMode;

/**
 * Creates a `ISCIBrush2D` instance from specified `SCIBrushStyle`.
 * @param style The BrushStyle to create brush from.
 * @param textureMappingMode The texture mapping which will be used by created brush.
 * @param opacity The opacity of created brush.
 * @return The `ISCIBrush2D` instance.
 */
- (id<ISCIBrush2D>)brushWithStyle:(SCIBrushStyle *)style textureMappingMode:(SCITextureMappingMode)textureMappingMode andOpacity:(float)opacity;

/**
 * Creates a `ISCITexture2D` instance from `SCIBitmap`.
 * @param bitmap The SCIBitmap instance to create texture from.
 * @return The `ISCITexture2D` instance.
 */
- (id<ISCITexture2D>)textureWithBitmap:(SCIBitmap *)bitmap;

/**
 * Creates a `ISCITexture2D` instance from region of `SCIBitmap`.
 * @param bitmap The SCIBitmap instance to create texture from.
 * @param bitmapRegion The region of bitmap in pixels to create texture from.
 * @return The `ISCITexture2D` instance.
 */
- (id<ISCITexture2D>)textureWithBitmap:(SCIBitmap *)bitmap region:(CGRect)bitmapRegion;

/**
 * Creates a `ISCITexture2D` instance with specified width and height which can be rendered on `ISCIRenderSurface` via `ISCIRenderContext2D` methods.
 * @param width The width of texture in pixels.
 * @param height The hegith of texture in pixels.
 * @return The `ISCITexture2D` instance.
 */
- (id<ISCITexture2D>)textureWithWidth:(int)width height:(int)height;

/**
 * Creates a `ISCITexture2D instance with specified width and height which can be rendered on `ISCIRenderSurface` via `ISCIRenderContext2D` methods.
 * @param data The data with which texture will be initialized.
 * @param size The size of texture in pixels.
 * @return The `ISCITexture2D` instance.
 */
- (id<ISCITexture2D>)textureWithData:(void *)data andSize:(CGSize)size;

/**
 * Creates a `ISCITexture2D instance with specified width and height which can be rendered on `ISCIRenderSurface` via `ISCIRenderContext2D` methods.
 * @param data The data with which texture will be initialized.
 * @param size The size of texture in pixels.
 * @return The `ISCITexture2D` instance.
 */
- (id<ISCITexture2D>)textureWithFloatData:(void *)data andSize:(CGSize)size;

/**
 * Gets the resource by specified `resourceId`.
 * @param resourceId The resource id.
 * @return The resource associated with specified `resourceId`.
 */
- (id<ISCIDisposable>)getResource:(SCIResourceId *)resourceId;

/**
 * Checks if asset manager contains any resource associated with `resourceId`.
 * @param resourceId The resource id.
 * @return YES if asset manager contains any resource, otherwise - NO.
 */
- (BOOL)hasResource:(SCIResourceId *)resourceId;

/**
 * Store the specified `resource` in this asset manager.
 * @param resourceId The resource id.
 * @param resource The resource to store.
 */
- (void)storeResource:(SCIResourceId *)resourceId resource:(id<ISCIDisposable>)resource;

/**
 * Tries to dispose resource associated with specified `resourceId`.
 * @param resourceId The resource id.
 */
- (void)disposeResource:(SCIResourceId *)resourceId;

@end

NS_ASSUME_NONNULL_END
