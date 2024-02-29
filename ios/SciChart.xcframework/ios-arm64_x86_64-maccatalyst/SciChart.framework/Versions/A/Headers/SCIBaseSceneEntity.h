//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseSceneEntity.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisposableBase.h"
#import "ISCIBaseSceneEntity.h"
#import "ISCILinesMesh.h"

/**
 * Defines an Entity in the 3D Scene. All types inheriting from `SCIBaseSceneEntity` have the abilty to be postioned and rendered using geometry and primitives defined in the 3D engine.
 */
@interface SCIBaseSceneEntity : SCIDisposableBase<ISCIBaseSceneEntity> 

/**
 * Defines a value indicating whether this entity is visible or not.
 */
@property (nonatomic) BOOL isVisible;

/**
 * Defines the unique identifier of this entity.
 */
@property (nonatomic) unsigned int entityId;

/**
 * Begins an Immediate Lines Mesh, which can be used to draw dynamic continuous (Poly) 3D lines on the fly.
 * @param strokeThickness The strokeThickness which defines the stroke thickness in world coordinates for the line.
 * @param isLineStrips If set to `YES` - lines are drawn as discontinuous strips.
 * @param isAntialiased When true, lines are antialised.
 * @return The `ISCILinesMesh` instancec which can be used for creating dynamic 3D lines on the fly.
 */
- (nonnull id<ISCILinesMesh>)beginLines:(float)strokeThickness isLineStrips:(BOOL)isLineStrips isAntialiased:(BOOL)isAntialiased;

/**
 * Renders this entity with the current scene and render pass data.
 */
- (void)render;

@end
