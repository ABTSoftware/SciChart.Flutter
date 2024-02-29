//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDrawable.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIRenderContext2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for instance which can be drawn on `ISCIRenderSurface`.
 */
@protocol ISCIDrawable <NSObject>

/**
 * Draws this `ISCIDrawable` instance.
 * @param renderContext The render context instance to draw on.
 * @param assetManager The asset manager associated with render context.
 */
- (void)onDrawWithContext:(id<ISCIRenderContext2D>)renderContext andAssetManager:(id<ISCIAssetManager2D>)assetManager NS_SWIFT_NAME(onDraw(_:assetManager:));

@end

NS_ASSUME_NONNULL_END
