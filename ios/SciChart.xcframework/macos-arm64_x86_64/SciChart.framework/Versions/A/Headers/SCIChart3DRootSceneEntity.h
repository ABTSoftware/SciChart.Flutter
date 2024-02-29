//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChart3DRootSceneEntity.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIRootSceneEntity.h"
#import "SCIAxisCubeEntity.h"
#import "SCIXyzGizmo.h"
#import "SCIFpsPresenter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A `SCIBaseSceneEntity` which is the root of a `ISCIChartSurface3D` scene.
 */
@interface SCIChart3DRootSceneEntity : SCIBaseSceneEntity<ISCIRootSceneEntity>

/**
 * Provides an entity which renders an Axis Cube in the 3D scene.
 */
@property (strong, nonatomic, readonly) SCIAxisCubeEntity *axisCube;

/**
 * Provides an entity to display the `XYZ Axis gizmo` in the bottom left of the screen.
 */
@property (strong, nonatomic, readonly) SCIXyzGizmo *xyzGizmo;

/**
 * Provides an entity to display the `FPS counter` in the bottom left of the screen.
 */
@property (strong, nonatomic, readonly) SCIFpsPresenter *fpsPresenter;

/**
 * Create new instance of `SCIChart3DRootSceneEntity` with associated `ISCIChartSurface3D`.
 * @param surface The associated `ISCIChartSurface3D` instance.
 */
- (instancetype)initWithSurface:(id<ISCIChartSurface3D>)surface;

@end

NS_ASSUME_NONNULL_END
