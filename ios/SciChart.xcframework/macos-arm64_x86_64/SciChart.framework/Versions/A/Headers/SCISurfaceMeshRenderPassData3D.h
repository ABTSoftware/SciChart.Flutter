//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISurfaceMeshRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIUnsignedIntegerValues.h"
#import "SCIMeshResolution.h"

/**
 * Defines SurfaceMeshRenderPassData3D, the data used in a single render pass by `SCISurfaceMeshRenderableSeries3D`.
 */
@interface SCISurfaceMeshRenderPassData3D : SCIGridXyzRenderPassData3D

/**
 * Provides the collection of colors for associated mesh.
 */
@property (nonatomic, readonly, nonnull) SCIUnsignedIntegerValues *colors;

/**
 * Defines the mesh resolution. By default for each point in the data series, there will be one vertex in the resulting mesh.
 */
@property (nonatomic) int meshResolution;

@end
