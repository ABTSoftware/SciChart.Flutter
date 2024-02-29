//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIViewport3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import <CoreGraphics/CoreGraphics.h>
#import "ISCIDisposable.h"
#import "SCIChart3DRootSceneEntity.h"
#import "SCIWorldDimensions.h"
#import "ISCIEntityIdProvider.h"

@class SCIRenderPassState3D;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol to a 3D Viewport, which wraps a C++ Engine and allows presentation of the 3D Scene
 */
@protocol ISCIViewport3D <ISCIDisposable>

/**
 * Gets the current viewport size.
 */
@property (nonatomic, readonly) CGSize viewportSize;

/**
 * Gets the dimmensions of the 3D world.
 */
@property (nonatomic, readonly) SCIVector3 *worldDimensions;

/**
 * Defines the root scene entity, adds it to the 3D world.
 */
@property (weak, nonatomic, nullable) SCIChart3DRootSceneEntity *rootEntity;

/**
 * Gets the `ISCIEntityIdProvider` used by Viewport3D.
 */
@property (nonatomic, readonly) id<ISCIEntityIdProvider> idProvider;

/**
 * Gets or sets if the current coordinate system is left handed.
 */
@property (nonatomic) BOOL isLeftHandedCoordinateSystem;

/**
 * Gets or sets if the fps counter entity is visible.
 */
@property (nonatomic) BOOL isFPSCounterVisible;

/**
 * Gets or sets if the xyz gizmo entity is visible.
 */
@property (nonatomic) BOOL isXyzGizmoVisible;

/**
 * Forces a redraw to occur in the Viewport3D.
 */
- (void)drawFrame:(SCIRenderPassState3D *)renderPassState;

/**
 * Adds the `SCIWorldDimensionsChangeObserver` instance which observes `worldDimensions`.
 * @param observer The observer to add.
 */
- (void)addWorldDimentionsObserver:(SCIWorldDimensionsChangeObserver)observer;

/**
 * Removes the `SCIWorldDimensionsChangeObserver` instance which observes `worldDimensions`.
 * @param observer The observer to remove.
 */
- (void)removeWorldDimentionsObserver:(SCIWorldDimensionsChangeObserver)observer;

@end

NS_ASSUME_NONNULL_END
