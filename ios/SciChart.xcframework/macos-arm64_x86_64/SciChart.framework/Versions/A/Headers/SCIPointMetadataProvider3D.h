//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPointMetadataProvider3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIMetadataProvider3DBase.h"
#import "ISCIStrokeMetadataProvider3D.h"
#import "ISCIFillMetadataProvider3D.h"
#import "ISCIPointMetadataProvider3D.h"
#import "SCIBaseRenderableSeries3D.h"
#import "SCIPointMetadata3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a default implementation of `ISCIPointMetadataProvider3D` which can be used with `ISCIRenderableSeries3D`.
 */
@interface SCIPointMetadataProvider3D : SCIMetadataProvider3DBase<SCIBaseRenderableSeries3D *><ISCIStrokeMetadataProvider3D, ISCIFillMetadataProvider3D, ISCIPointMetadataProvider3D>

/**
 * Provides the collection of `SCIPointMetadata3D`.
 */
@property (strong, nonatomic, readonly) NSMutableArray<SCIPointMetadata3D *> *metadata;

/**
 * Creates a new instance of `SCIPointMetadataProvider3D` class.
 */
- (instancetype)init;

/// :nodoc:
- (instancetype)initWithRenderableSeriesType:(Class)renderableSeriesType NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
