//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFreeSurfaceRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGridXyzRenderPassData3D.h"
#import "SCIFloatValues.h"
#import "SCIUnsignedIntegerValues.h"

/**
 * Defines FreeSurfaceRenderPassData3D, the data used in a single render pass by `SCIFreeSurfaceRenderableSeries3D`.
 */
@interface SCIFreeSurfaceRenderPassData3D : SCIGridXyzRenderPassData3D

/**
 * Defines a displacement propagation value in `X-direction`.
 */
@property (nonatomic) float displacementPropagationX;

/**
 * Defines a displacement propagation value in `Y-direction`.
 */
@property (nonatomic) float displacementPropagationY;

/**
 * Defines a displacement propagation value in `Z-direction`.
 */
@property (nonatomic) float displacementPropagationZ;

/**
 * Defines the value determining whether the displacement is absolute.
 * @see `ISCIDisplaceableFreeSurfaceDataSeries3DValues.isAxesPropagationAbsolute`.
 */
@property (nonatomic) BOOL isAbsoluteDisplacementPropagation;

/**
 * Provides the displacement values used for the single render pass.
 */
@property (strong, nonatomic, nonnull) SCIDoubleValues *displacementValues;

/**
 * Provides the displacement coordinates used for the single render pass.
 */
@property (strong, nonatomic, nonnull) SCIFloatValues *displacementCoords;

/**
 * Provides the collection of cell colors used for the single render pass.
 */
@property (strong, nonatomic, nonnull) SCIUnsignedIntegerValues *cellColors;

/**
 * Defines a data offset by `X-axis` of the Surface.
 */
@property (nonatomic) double offsetX;

/**
 * Defines a data offset by `Y-axis` of the Surface.
 */
@property (nonatomic) double offsetY;

/**
 * Defines a data offset by `Z-axis` of the Surface.
 */
@property (nonatomic) double offsetZ;

@end
