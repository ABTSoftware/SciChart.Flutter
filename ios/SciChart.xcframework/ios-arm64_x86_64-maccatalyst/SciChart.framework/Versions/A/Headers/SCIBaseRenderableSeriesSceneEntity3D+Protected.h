//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseRenderableSeriesSceneEntity3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseRenderableSeriesSceneEntity3D.h"
#import "ISCIMetadataProvider3D.h"

@interface SCIBaseRenderableSeriesSceneEntity3D<T : id<ISCISeriesRenderPassData3D>>()

@property (weak, nonatomic, readonly, nullable) id<ISCIRenderableSeries3D> renderableSeries;
@property (nonatomic, strong, nonnull) T currentRenderPassData;

/**
 * Creates new instance of `SCIBaseRenderableSeriesSceneEntity3D` class.
 * @param seriesRenderPassDataType The type of render pass data used for rendering.
 */
- (nonnull instancetype)initWithRenderPassDataClass:(nonnull Class)seriesRenderPassDataType;

/**
 * Performs update of this entity
 * @param currentRenderPassData The render pass data to use for update
 */
- (void)updateScene:(nonnull id<ISCISeriesRenderPassData3D>)currentRenderPassData;

/**
 * Performs update of native meshes used by this instance
 * @param currentRenderPassData The render pass data to use for update
 */
- (void)updateNativeMeshes:(nonnull T)currentRenderPassData;

/**
 * Perform update of native entity
 * @param currentRenderPassData The render pass data to use for update
 */
- (void)updateNativeEntity:(nonnull T)currentRenderPassData;

/**
 * Called when visibility of parent {@link IRenderableSeries3D} changes
 * @param isVisible The new isVisible value
 */
- (void)onVisibilityChanded:(BOOL)isVisible;

/**
 * Checks if specified entity ID and vertex ID belongs to this entity.
 * @param selectedEntityId The id of selected entity.
 * @param selectedVertexId The id of selected vertex.
 * @return YES if there was a hit for this entity, otherwise returns NO.
 */
- (BOOL)isHitAtEntityID:(unsigned int)selectedEntityId vertexId:(unsigned int)selectedVertexId;

@end
