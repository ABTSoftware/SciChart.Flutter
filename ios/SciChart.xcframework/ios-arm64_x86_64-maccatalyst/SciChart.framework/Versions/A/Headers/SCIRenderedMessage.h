//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderedMessage.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILoggedMessage.h"
#import "ISCIRenderContext2D.h"
#import "ISCIAssetManager2D.h"

/**
 * Published by `ISCIRenderSurface` immediately before the end of a render pass.
 */
@interface SCIRenderedMessage : SCILoggedMessage

/**
 * Provides the `ISCIRenderContext2D` instance for current render pass.
 */
@property (weak, nonatomic, nullable) id<ISCIRenderContext2D> renderContext;

/**
 * Provides the `ISCIAssetManager2D` instance for current render pass.
 */
@property (weak, nonatomic, nullable) id<ISCIAssetManager2D> assetManager;

@end
