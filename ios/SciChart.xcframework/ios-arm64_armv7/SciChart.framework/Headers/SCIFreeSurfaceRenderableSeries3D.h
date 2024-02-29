//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFreeSurfaceRenderableSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIVector3.h"
#import "SCIFreeSurfacePaletteMinMaxMode.h"
#import "SCIAxisDirection.h"

/**
 * Provides `Free-Surface` 3D series rendering.
 */
@interface SCIFreeSurfaceRenderableSeries3D : SCIContourMeshRenderableSeries3DBase

/**
 * Defines a value dermining by which 3D axis the contour is calculated.
 */
@property (nonatomic) SCIAxisDirection3D contourAxis;

/**
 * Gets the the mode of `paletteMinimum` and `paletteMaximum` values.
 */
@property (nonatomic) SCIFreeSurfacePaletteMinMaxMode paletteMinMaxMode;

/**
 * Defines the palette minimum color in regards to X, Y and Z axis.
 */
@property (strong, nonatomic, nonnull) SCIVector3 *paletteMinimum;

/**
 * Defines the palette maximum color in regards to X, Y and Z axis.
 */
@property (strong, nonatomic, nonnull) SCIVector3 *paletteMaximum;

/**
 * Defines the palette color intensity in regards to X, Y and Z axis.
 */
@property (strong, nonatomic, nonnull) SCIVector3 *paletteAxialFactor;

/**
 * Defines the palette color intensity in regards to surface distance from origin.
 */
@property (nonatomic) float paletteRadialFactor;

/**
 * Defines the palette color intensity in regards to surface orientation in azimuthal space.
 */
@property (nonatomic) float paletteAzimuthalFactor;

/**
 * Defines the palette color intensity in regards to surface orientation in polar space.
 */
@property (nonatomic) float palettePolarFactor;

/**
 * Defines the  value determining if the back side of the chart should be drawn.
 */
@property (nonatomic) BOOL drawBackSide;

/**
 * Creates a new instance of `SCIFreeSurfaceRenderableSeries3D` class.
 */
- (nonnull instancetype)init;

@end
