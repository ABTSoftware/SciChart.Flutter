//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisLayoutManager.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "ISCIAxisRenderer.h"
#import "ISCIAxisTitleRenderer.h"
#import "SCIAxisLayoutState.h"
#import "ISCIAssetManager2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines interface for axis layout manager which is responsible for measure and layout of axis and its renderers on screen.
 */
@protocol ISCIAxisLayoutManager <ISCIAttachable, ISCIAxisLayoutChangeListener>

/**
 * Measures desired size for axis and its renderers for further layout calculations.
 * @param axisRenderer Current axis renderer.
 * @param axisTitleRenderer Current title renderer.
 * @param axisLayoutState Axis layout state which stores current state of axis layout.
 */
- (void)measureWithAxisRenderer:(id<ISCIAxisRenderer>)axisRenderer axisTitleRenderer:(id<ISCIAxisTitleRenderer>)axisTitleRenderer andAxisLayoutState:(SCIAxisLayoutState *)axisLayoutState;

/**
 * Performs layout of axis and its renderers on screen.
 * @param assetManager `ISCIAssetManager2D` instance which manages assets for current `ISCIRenderSurface` instance.
 * @param axisRenderer Current axis renderer.
 * @param axisTitleRenderer Current axis ttile renderer.
 */
- (void)onLayoutWithAssetManager:(id<ISCIAssetManager2D>)assetManager axisRenderer:(id<ISCIAxisRenderer>)axisRenderer axisTitleRenderer:(id<ISCIAxisTitleRenderer>)axisTitleRenderer;

@end

NS_ASSUME_NONNULL_END
