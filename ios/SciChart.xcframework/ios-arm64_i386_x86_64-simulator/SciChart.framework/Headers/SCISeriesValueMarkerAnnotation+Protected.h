//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesValueMarkerAnnotation+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesValueMarkerAnnotation.h"
#import "ISCIRenderableSeries.h"
#import "ISCIDataSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCISeriesValueMarkerAnnotation`.
 */
@interface SCISeriesValueMarkerAnnotation (Protected)

/**
 * Updates axis marker with latest values provided by renderable series
 * @param renderableSeries The source renderable series
 * @param dataSeries The source data series
 * @return True if update was successful, otherwise false
 */
- (BOOL)tryUpdateAxisMarkerForRenderableSeries:(id<ISCIRenderableSeries>)renderableSeries dataSeries:(id<ISCIDataSeries>)dataSeries;

@end

NS_ASSUME_NONNULL_END
