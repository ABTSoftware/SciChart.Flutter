//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRangeCalculationHelper2DBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRangeCalculatorHelperBase+Protected.h"
#import "SCIRenderableSeriesCollection.h"
#import "ISCIChartSurface.h"

NS_ASSUME_NONNULL_BEGIN

/*
 * The extensions in this header are to be used only by subclasses of `SCIRangeCalculationHelper2DBase`.
 */
@interface SCIRangeCalculationHelper2DBase ()

@property (weak, nonatomic, nullable) id<ISCIChartSurface> parentSurface;

/**
 * Updates data range of attached axis in X direction.
 * @param renderableSeries The renderable series collection.
 */
- (void)updateXDataRange:(SCIRenderableSeriesCollection *)renderableSeries;

/**
 * Checks if specified series is valid for data range update of XAxis with `xAxisId`.
 * @param rSeries The `ISCIRenderableSeries` instance to check.
 * @param xAxisId The X-Axis id.
 * @return True if associated `ISCIRenderableSeries` instance is valid. Otherwise - false.
 */
- (BOOL)isValidSeries:(id<ISCIRenderableSeries>)rSeries forXAxisWithId:(NSString *)xAxisId;

/**
 * Updates data range of attached axis in Y direction.
 * @param renderableSeries The renderable series collection.
 */
- (void)updateYDataRange:(SCIRenderableSeriesCollection *)renderableSeries;

/**
 * Checks if specified series is valid for data range update of YAxis with `yAxisId`.
 * @param rSeries The `ISCIRenderableSeries` instance to check.
 * @param yAxisId The Y-Axis id.
 * @return True if associated `ISCIRenderableSeries` instance is valid. Otherwise - false.
 */
- (BOOL)isValidSeries:(id<ISCIRenderableSeries>)rSeries forYAxisWithId:(NSString *)yAxisId;

@end

NS_ASSUME_NONNULL_END
