//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDefaultSeriesValueMarkerAnnotationHelper.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAnnotationBase.h"
#import "ISCIRenderableSeries.h"
#import "SCIAnnotationBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines default series value marker annotation helper implementation.
 */
@interface SCIDefaultSeriesValueMarkerAnnotationHelper<TAnnotation: SCIAnnotationBase *> : NSObject

/**
 * The `ISCIRenderableSeries` instance used by this helper to display latest series value.
 */
@property (strong, nonatomic, readonly) id<ISCIRenderableSeries> renderableSeries;

/**
 * Creates new instance of `SCIDefaultSeriesValueMarkerAnnotationHelper`.
 * @param renderableSeries The target renderable series.
 * @param isValidRenderableSeriesPredicate The predicate whether Renderable Series is valid for `SCISeriesValueMarkerAnnotation`.
 */
- (instancetype)initWithRenderableSeries:(id<ISCIRenderableSeries>)renderableSeries predicate:(nonnull SCIPredicate)isValidRenderableSeriesPredicate;

/**
 * Try to update specified annotation using information from `ISCIRenderableSeries`.
 * @param annotation The annotation to update.
 */
- (void)tryUpdateAnnotation:(TAnnotation)annotation;

@end

NS_ASSUME_NONNULL_END
