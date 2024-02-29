//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAssetManagerUtil.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIDisposable.h"
#import "SCIResourceId.h"
#import "ISCITexture2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Helper class with some methods for work with `ISCIAssetManager2D` class.
 */
@interface SCIAssetManagerUtil : NSObject

/**
 * Gets resource from `assetManager` and tries to cast it to specified `resourceType`.
 * @param resourceId The resource id.
 * @param type The resource type.
 * @param assetManager The asset manager to use.
 * @return Casted resource if it possible and if cast isn't possible then returns `nil`.
 */
+ (nullable id<ISCIDisposable>)tryGetResourceWithId:(SCIResourceId *)resourceId type:(Protocol *)type fromAssetManager:(id<ISCIAssetManager2D>)assetManager;

/**
 * Tries to get texture from `assetManager` with specified size.
 * @param resourceId The resource id.
 * @param size The size of texture.
 * @param assetManager The asset manager to use.
 * @return The texture if it satisfies the size and type constraint, otherwise - returns `nil`.
 */
+ (nullable id<ISCITexture2D>)tryGetTextureWithId:(SCIResourceId *)resourceId size:(CGSize)size fromAssetManager:(id<ISCIAssetManager2D>)assetManager;

@end

NS_ASSUME_NONNULL_END
