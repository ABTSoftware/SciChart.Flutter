//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIHitTestInfo3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"

/**
 * Defines a hit test info class which provides information on a series 3D `hit-test` operation.
 * @see `-[ISCIRenderableSeries3D hitTest:at:]`.
 * @see `-[ISCIRenderableSeries3D hitTest:selection:]`.
 */
@interface SCIHitTestInfo3D : NSObject<ISCICleanable>

/**
 * Gets the value indicating whether this `SCIHitTestInfo3D` is empty or not.
 */
@property (nonatomic, readonly) BOOL isEmpty;

/**
 * The value indicating whether the HitTest operation was a hit or not.
 */
@property (nonatomic) BOOL isHit;

/**
 * The id of entity which was hit.
 */
@property (nonatomic) unsigned int entityId;

/**
 * The id of vertex which was hit.
 */
@property (nonatomic) unsigned int vertexId;

/**
 * The `x-index` of point which was hit in case of grid data.
 */
@property (nonatomic) int xIndex;

/**
 * The `z-index` of point which was hit in case of grid data.
 */
@property (nonatomic) int zIndex;

@end
