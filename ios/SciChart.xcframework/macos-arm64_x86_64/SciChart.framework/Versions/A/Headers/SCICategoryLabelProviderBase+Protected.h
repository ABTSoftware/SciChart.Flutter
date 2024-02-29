//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICategoryLabelProviderBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFormatterLabelProviderBase+Protected.h"
#import "ISCIMath.h"
#import "ISCIList.h"
#import "ISCIXDataSeriesValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCICategoryLabelProviderBase`.
 */
@interface SCICategoryLabelProviderBase<T : SCICategoryDateAxis *> (Protected)

/**
 * Find base data series associated with current axis which will be used for transformation indices to data values  and vice versa.
 * @param axis The associated axis.
 * @param renderableSeries The renderable series collection to look for base data series in.
 * @return The base data series which will be used for transformation indices to data values and vice versa.
 */
- (nullable id<ISCIXDataSeriesValues>)getBaseDataSeriesWithAxis:(T)axis andRenderableSeries:(SCIRenderableSeriesCollection *)renderableSeries;

/**
 * Updates this label provider with new data.
 * @param axis The parent axis.
 * @param xValues The xValues used by this label provider.
 * @return The new bar time frame in seconds.
 */
- (double)updateBarTimeFrameWithAxis:(SCICategoryDateAxis *)axis xValues:(nullable id<ISCIList>)xValues;

/**
 * Finds index of the data-value in the point-series using corresponding `SCISearchMode`.
 * @param dataValue Value to which this transformation will be applied.
 * @param mode The `SCISearchMode`, which will be used to search in `ISCISmartList`.
 * @param xValues The x values collection.
 * @return Index of the dataValue in the xValues collection.
 */
- (NSInteger)transformDataToIndexInternal:(double)dataValue searchMode:(SCISearchMode)mode xValues:(nullable id<ISCIList>)xValues;

/**
 * Finds the dataValue based on it's index in the corresponding xValues collection.
 * @param index Index of the sought dataValue.
 * @param xValues The x values collection.
 * @return The dataValue based on it's index in the corresponding xValues collection.
 */
- (double)transformIndexToDataInternal:(NSInteger)index xValues:(nullable id<ISCIList>)xValues;

@end

NS_ASSUME_NONNULL_END
