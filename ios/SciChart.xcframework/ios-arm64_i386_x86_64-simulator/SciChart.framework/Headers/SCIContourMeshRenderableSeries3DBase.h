//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIContourMeshRenderableSeries3DBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseRenderableSeries3D.h"
#import "SCIDrawMeshAs.h"
#import "SCIMeshColorPalette.h"
#import "ISCITexture2D.h"
#import "SCIMeshPaletteMode.h"

/**
 * Defines a base class for `SCIFreeSurfaceRenderableSeries3D` and `SCISurfaceMeshRenderableSeries3D`.
 */
@interface SCIContourMeshRenderableSeries3DBase : SCIBaseRenderableSeries3D

/**
 * Defines the stroke color of the wireframe lines.
 * @note Used when `drawMeshAs` `SCIDrawMeshAs.SCIDrawMeshAs_Wireframe` or `SCIDrawMeshAs.SCIDrawMeshAs_SolidWireframe`.
 */
@property (nonatomic) unsigned int stroke;

/**
 * Defines the stroke thickness to apply to the wireframe.
 * @note Used when `drawMeshAs` `SCIDrawMeshAs.SCIDrawMeshAs_Wireframe` or `SCIDrawMeshAs.SCIDrawMeshAs_SolidWireframe`.
 */
@property (nonatomic) float strokeThickness;

/**
 * Defines how to draw the mesh.
 *
 * Possible values:
 * - `SCIDrawMeshAs.SCIDrawMeshAs_SolidMesh`.
 * - `SCIDrawMeshAs.SCIDrawMeshAs_Wireframe`.
 * - `SCIDrawMeshAs.SCIDrawMeshAs_Contours`.
 * - `SCIDrawMeshAs.SCIDrawMeshAs_SolidWireframe`.
 * - `SCIDrawMeshAs.SCIDrawMeshAs_SolidWithContours`.
 * - `SCIDrawMeshAs.SCIDrawMeshAs_SolidFrameWithContours`.
 */
@property (nonatomic) SCIDrawMeshAs drawMeshAs;

/**
 * Defines the contour color code.
 */
@property (nonatomic) unsigned int contourStroke;

/**
 * Defines the contour offset.
 */
@property (nonatomic) float contourOffset;

/**
 * Defines contour interval.
 */
@property (nonatomic) float contourInterval;

/**
 * Defines the contour stroke thikness.
 */
@property (nonatomic) float contourStrokeThickness;

/**
 * Defines the  `Mesh Color Palette` which is used to calculate color from data value.
 */
@property (strong, nonatomic, nonnull) SCIMeshColorPalette *meshColorPalette;

/**
 * Defines the Size of the texture to create when the `meshColorPaletteSize` property is set.
 */
@property (nonatomic) CGSize meshColorPaletteSize;

/**
 * Defines the value which defines how to apply the `meshColorPalette`.
 */
@property (nonatomic) SCIMeshPaletteMode meshPaletteMode;

/**
 * Defines a factor  which defines how hard a Cell looks.
 * @note The valid values range is from `0.0 to 1.0` (e.g. 0.0f = smooth and 1.0f = hard faces).
 */
@property (nonatomic) float cellHardnessFactor;

/**
 * Defines a value in range `[0...1]` that defines how much the surface is highlighted its in low lit parts.
 */
@property (nonatomic) float highlight;

/**
 * Gets or sets a factor in `[0.0f - 1.0f]` range which defines how much lighting is used on cells, 0.0f = no lighting and 1.0f = fully lit.
 */
@property (nonatomic) float lightingFactor;

/**
 * Gets the ColorMapTexture generated when the `meshColorPalette` property changes.
 */
@property (nonatomic, readonly, nullable) id<ISCITexture2D> colorMapTexture;

@end
