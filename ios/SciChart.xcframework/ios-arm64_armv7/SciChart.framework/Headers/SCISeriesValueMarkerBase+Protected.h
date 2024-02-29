//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesValueMarkerBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesValueMarkerBase.h"
#import "SCIAttachableServiceContainer.h"
#import "ISCIChartSurface.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCISeriesValueMarkerBase`.
 */
@interface SCISeriesValueMarkerBase ()

@property (strong, nonatomic) SCIAttachableServiceContainer *services;
@property (strong, nonatomic) id<ISCIRenderableSeries> renderableSeries;
@property (strong, nonatomic) SCIPredicate isValidRenderableSeriesPredicate;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIDefaultSeriesValueMarker`.
 */
@interface SCISeriesValueMarkerBase (Protected)

/**
 * Tries to remove annotation associated with this `ISCISeriesValueMarker`into parent `ISCIChartSurface`
 */
- (void)tryRemoveMarkerAnnotation:(id<ISCIChartSurface>)parentSurface;

/**
 * Tries to add annotation associated with this `ISCISeriesValueMarker` into parent `ISCIChartSurface`
 */
- (void)tryAddMarkerAnnotation:(id<ISCIChartSurface>)parentSurface;

/**
 * Creates annotation associated with current `ISCISeriesValueMarker`
 */
- (void)createMarkerAnnotation;

/**
 * Destroys annotation associated with current `ISCISeriesValueMarker`
 */
- (void)destroyMarkerAnnotation;

@end

NS_ASSUME_NONNULL_END
