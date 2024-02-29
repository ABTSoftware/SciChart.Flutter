//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseTexturePointMarker3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCITexture2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base-class for a 3D point marker which renders a flat texture at each point.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 * @see `SCIEllipsePointMarker3D`
 * @see `SCIQuadPointMarker3D`
 * @see `SCITrianglePointMarker3D`
 * @see `SCICustomPointMarker3D`.
 */
@interface SCIBaseTexturePointMarker3D : SCIBasePointMarker3D 

/**
 * Gets the `ISCITexture2D` instance which is repeated across data-points.
 */
@property (nonatomic, readonly) id<ISCITexture2D> pointTexture;

/**
 * Creates a new instance of `SCIBaseTexturePointMarker3D` class.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

/// :nodoc:
- (instancetype)initWithMarkerType:(SCIMarkerType)markerType NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
