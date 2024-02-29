//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPixelPointMarker3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBasePointMarker3D.h"

/**
 * Defines a Pixel Point-marker for used with 3D RenderableSeries.
 * @see `SCICubePointMarker3D`.
 * @see `SCICylinderPointMarker3D`.
 * @see `SCIPyramidPointMarker3D`.
 * @see `SCISpherePointMarker3D`.
 * @see `SCIEllipsePointMarker3D`.
 * @see `SCIQuadPointMarker3D`.
 * @see `SCITrianglePointMarker3D`.
 * @see `SCICustomPointMarker3D`.
 */
@interface SCIPixelPointMarker3D : SCIBasePointMarker3D

/**
 * Creates a new instance of `SCIPixelPointMarker3D` class.
 */
- (nonnull instancetype)init NS_DESIGNATED_INITIALIZER;

/// :nodoc:
- (nonnull instancetype)initWithMarkerType:(SCIMarkerType)markerType NS_UNAVAILABLE;

@end
