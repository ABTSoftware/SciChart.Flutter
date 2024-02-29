//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISelectableMetadataProvider3D.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines an metadata provider which allows to select separate points.
 * @see `ISCIMetadataProvider3D`.
 * @see `ISCIPointMetadataProvider3D`.
 * @see `ISCIStrokeMetadataProvider3D`.
 * @see `ISCIFillMetadataProvider3D`.
 * @see `ISCISurfaceMeshMetadataProvider3D`.
 * @see `SCIDefaultSelectableMetadataProvider3D`.
 */
@protocol ISCISelectableMetadataProvider3D <ISCIMetadataProvider3D>

/**
 * Sets the isSelected flag for specified vertex.
 * @param isSelected The isSelected value to set.
 * @param vertexId The vertex id to set isSelected for.
 */
- (void)performSelection:(BOOL)isSelected onVertex:(unsigned int)vertexId;

/**
 * Switch the isSelected flag for specified vertex (e.g. from selected to unselected and vice versa).
 * @param vertexId The vertex id to set isSelected for.
 */
- (void)performSelectionOfVertex:(unsigned int)vertexId;

/**
 * Deselects all points.
 */
- (void)deselectAll;

@end
