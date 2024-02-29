//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIFillMetadataProvider3D.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines the metadata provider for filling of `ISCIRenderableSeries3D`
 * @see `ISCIMetadataProvider3D`.
 * @see `ISCIPointMetadataProvider3D`.
 * @see `ISCIStrokeMetadataProvider3D`.
 * @see `ISCISurfaceMeshMetadataProvider3D`.
 * @see `ISCISelectableMetadataProvider3D`.
 */
@protocol ISCIFillMetadataProvider3D <ISCIMetadataProvider3D>

/**
 * Updates fill metadata.
 * @param fillColors The fill colors to update.
 * @param defaultFill The default fill color to use.
 */
- (void)updateFillColors:(SCIUnsignedIntegerValues *)fillColors defaultFill:(unsigned int)defaultFill;

@end

NS_ASSUME_NONNULL_END
