//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIMetadataProvider3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "SCIUnsignedIntegerValues.h"
#import "SCIFloatValues.h"
#import "SCIDataSeriesObserver.h"

@protocol ISCIDataSeriesCore;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the common interface to a metadata provider.
 * @see `ISCIPointMetadataProvider3D`.
 * @see `ISCIStrokeMetadataProvider3D`.
 * @see `ISCIFillMetadataProvider3D`.
 * @see `ISCISurfaceMeshMetadataProvider3D`.
 * @see `ISCISelectableMetadataProvider3D`.
 * @see `SCIMetadataProvider3DBase`.
 * @see `SCIPointMetadataProvider3D`.
 */
@protocol ISCIMetadataProvider3D <ISCIAttachable>

/**
 * Defines the observer whiich is called when data series changes.
 */
@property (nonatomic, readonly, nullable) SCIDataSeriesObserver onDataSeriesChanged;

/**
 * Called when data series drastically changes.
 * @param dataSeries The new data series assigned to parent renderable series.
 */
- (void)onDataSeriesDrasticallyChanged:(id<ISCIDataSeriesCore>)dataSeries;

@end

NS_ASSUME_NONNULL_END
