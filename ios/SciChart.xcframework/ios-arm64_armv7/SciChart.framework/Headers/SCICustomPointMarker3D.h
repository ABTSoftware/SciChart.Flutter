//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICustomPointMarker3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseTexturePointMarker3D.h"
#import "SCIBitmap.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a Custom (flat texture) Point-marker for used with 3D RenderableSeries.
 * @see `SCIPixelPointMarker3D`.
 * @see `SCICubePointMarker3D`.
 * @see `SCICylinderPointMarker3D`.
 * @see `SCIPyramidPointMarker3D`.
 * @see `SCISpherePointMarker3D`.
 * @see `SCITrianglePointMarker3D`.
 * @see `SCIQuadPointMarker3D`.
 * @see `SCITrianglePointMarker3D`.
 */
@interface SCICustomPointMarker3D : SCIBaseTexturePointMarker3D

/**
 * Creates a new instance of `SCICustomPointMarker3D` class.
 * @param bitmap The `SCIBitmap` to use for rendering.
 */
- (instancetype)initWithBitmap:(SCIBitmap *)bitmap;

@end

NS_ASSUME_NONNULL_END
