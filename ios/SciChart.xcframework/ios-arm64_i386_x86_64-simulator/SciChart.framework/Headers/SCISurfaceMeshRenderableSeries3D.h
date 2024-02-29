//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISurfaceMeshRenderableSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIContourMeshRenderableSeries3DBase.h"
#import "SCIMeshResolution.h"

/**
 * Provides SurfaceMesh series rendering.
 */
@interface SCISurfaceMeshRenderableSeries3D : SCIContourMeshRenderableSeries3DBase

/**
 * Defines the value indicating whether to draw the skirt (geometry from the edges of the surface mesh to the zero line in Y).
 */
@property (nonatomic) BOOL drawSkirt;

/**
 * Defines the value which corresponds to minimum color.
 */
@property (nonatomic) double minimum;

/**
 * Defines the value which corresponds to maximum color.
 */
@property (nonatomic) double maximum;

/**
 * Defines the mesh resolution. By default for each point in the data series, there will be one vertex in the resulting mesh.
 * @note To increase the resolution, use `SCIMeshResolution.SCIMeshResolution_x2` or `SCIMeshResolution.SCIMeshResolution_x4`.
 */
@property (nonatomic) SCIMeshResolution meshResolution;

/**
 * Defines the height scale factor. Default is `1.0f`. Value of 0.0f will render a flat Uniform Surface Mesh. Value of 1.0f will use the scaling of the chart's YAxis.
 */
@property (nonatomic) float heightScaleFactor;

/**
 * Defines a Y-Offset in World Coordinates.
 * @note This offset will change the base position of the `SCISurfaceMeshRenderableSeries3D` on the chart's YAxis.
 */
@property (nonatomic) float yOffset;

/**
 * Creates a new instance of `SCISurfaceMeshRenderableSeries3D` class.
 */
- (nonnull instancetype)init;

@end
