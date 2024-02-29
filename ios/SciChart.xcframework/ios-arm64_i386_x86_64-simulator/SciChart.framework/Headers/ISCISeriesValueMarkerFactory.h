//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesValueMarkerFactory.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderableSeries.h"
#import "ISCISeriesValueMarker.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Creates `ISCISeriesValueMarker` for displaying latest YValue of specified renderable series
 * @param renderableSeries The target renderable series
 * @return The series value marker to use
 */
typedef id<ISCISeriesValueMarker> _Nonnull (^CreateMarkerFunc) (id<ISCIRenderableSeries> renderableSeries);

/**
 * Defines a factory used by `SCISeriesValueModifier` to create `SCIAxisMarkerAnnotation` for showing latest values of `ISCIRenderableSeries`
 */
@protocol ISCISeriesValueMarkerFactory <NSObject>

/**
 * The function which creates `ISCISeriesValueMarker` instance for `ISCIRenderableSeries`
 */
@property (nonatomic, readonly) CreateMarkerFunc projectionFunction;

@end

NS_ASSUME_NONNULL_END
