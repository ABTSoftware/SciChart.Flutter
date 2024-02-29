//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseRenderableSeriesSceneEntity3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseSceneEntity.h"
#import "ISCIAttachable.h"

@class SCIHitTestInfo3D;
@protocol ISCIRenderableSeries3D;
@protocol ISCISeriesRenderPassData3D;

/**
 * Defines an entity to draw `SCIBaseRenderableSeries3D` in the 3D Scene.
 * @note `T` - is the type of the associated `ISCISeriesRenderPassData3D`,
 */
@interface SCIBaseRenderableSeriesSceneEntity3D<T : id<ISCISeriesRenderPassData3D>> : SCIBaseSceneEntity<ISCIAttachable>

/**
 * Request update of native meshes during next render pass.
 */
- (void)requestNativeMeshesUpdate;

/**
 * Performs `hit-test` and saves results into `SCIHitTestInfo3D` instance.
 * @param hitTestResult The `SCIHitTestInfo3D` to save results of hit test in.
 * @param selectionId The selection id to test.
 */
- (void)hitTest:(nonnull SCIHitTestInfo3D *)hitTestResult selectionId:(unsigned long long)selectionId;

@end
