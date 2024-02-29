//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPointMetadataProvider3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIMetadataProvider3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines protocol for metadata for `SCIBasePointMarker3D`.
 * @see `ISCIMetadataProvider3D`.
 * @see `ISCIStrokeMetadataProvider3D`.
 * @see `ISCIFillMetadataProvider3D`.
 * @see `ISCISurfaceMeshMetadataProvider3D`.
 * @see `ISCISelectableMetadataProvider3D`.
 */
@protocol ISCIPointMetadataProvider3D <ISCIMetadataProvider3D>

/**
 * Updates metadata for point markers.
 * @param colors The color of point markers.
 * @param scales The scale of point markers.
 * @param defaultColor The default color of point marker.
 * @param defaultScale The default scale of point marker.
 */
- (void)updatePointMetadataWithColors:(SCIUnsignedIntegerValues *)colors pointScales:(SCIFloatValues *)scales defaultColor:(unsigned int)defaultColor andDefaultScale:(float)defaultScale;

@end

NS_ASSUME_NONNULL_END
