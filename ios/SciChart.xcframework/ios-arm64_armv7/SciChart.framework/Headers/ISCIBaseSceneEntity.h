//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIBaseSceneEntity.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIObservableCollection.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol to an Entity in the 3D Scene.
 * @see `SCIBaseSceneEntity`.
 */
@protocol ISCIBaseSceneEntity <ISCIDisposable>

/**
 * Defines the parent `ISCIBaseSceneEntity` for this instance.
 */
@property (strong, nonatomic, nullable) id<ISCIBaseSceneEntity>parent;

/**
 * Gets the collection of children for this entity.
 */
@property (nonatomic, readonly) SCIObservableCollection<id<ISCIBaseSceneEntity>> *children;

/**
 * Attaches a `ISCIBaseSceneEntity` to the `children` collection.
 */
- (void)addEntity:(id<ISCIBaseSceneEntity>)child;

/**
 * Detaches a `ISCIBaseSceneEntity` and removes it from the `children` collection.
 */
- (void)removeEntity:(id<ISCIBaseSceneEntity>)child;

/**
 * Updates this entity with the current scene time.
 */
- (void)update;

@end

NS_ASSUME_NONNULL_END
