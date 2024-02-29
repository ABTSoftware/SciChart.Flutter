//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCILinesMesh.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIMeshBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a LinesMesh, a re-usable 3D model consisting of lines which may be dynamically created, frozen, and repeatedly drawn.
 */
@protocol ISCILinesMesh <ISCIMeshBase>

/**
 * Sets the `[X, Y, Z]` values of the current vertex.
 * @param x The x value.
 * @param y The y value.
 * @param z The z value.
 */
- (void)setVertex3X:(float)x Y:(float)y Z:(float)z;

/**
 * Sets the stroke thickness of the current mesh.
 * @param strokeThickness The stroke thickness value.
 */
- (void)setStrokeThickness:(float)strokeThickness;

/**
 * Sets the data on the Lines Mesh, which causes the mesh to calculate line vertices.
 * @param entityId The entity identifier.
 * @param xCoordinates The x coordinates in world space.
 * @param yCoordinates The y coordinates in world space.
 * @param zCoordinates The z coordinates in world space.
 * @param colors The colors as `ARGB`.
 * @param pointCount The point count.
 * @param hasTransparentColors If set to true, then one or more vertex has semi-transparent colours. This determines whether alpha blending is used.
 */
- (void)setData:(unsigned int)entityId X:(float *)xCoordinates Y:(float *)yCoordinates Z:(float *)zCoordinates colors:(unsigned int *)colors pointCount:(int)pointCount hasTransparentColors:(BOOL)hasTransparentColors;

@end

NS_ASSUME_NONNULL_END
