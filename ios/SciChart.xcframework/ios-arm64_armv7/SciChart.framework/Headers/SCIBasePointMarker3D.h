//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBasePointMarker3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisposableBase.h"
#import "ISCIAttachable.h"
#import "ISCIInvalidatableElement.h"
#import "SCIMarkerType.h"

/**
 * The base-class for Pointmarkers in SciChart 3D. This is used to repeat a texture or a 3D model at data-points in certain renderable series.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 * @see `SCIBaseMeshPointMarker3D`.
 * @see `SCIBaseTexturePointMarker3D`.
 * @see `SCIPixelPointMarker3D`.
 */
@interface SCIBasePointMarker3D : SCIDisposableBase<ISCIAttachable, ISCIInvalidatableElement>

/**
 * Defines the `SCIMarkerType` for this point marker.
 */
@property (nonatomic) SCIMarkerType markerType;

/**
 * Defines the fill color used by point marker.
 */
@property (nonatomic) unsigned int fillColor;

/**
 * Defines the size of the point marker.
 */
@property (nonatomic) float size;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIBasePointMarker3D` class.
 * @param markerType The type of point marker.
 */
- (instancetype)initWithMarkerType:(SCIMarkerType)markerType NS_DESIGNATED_INITIALIZER;

@end
