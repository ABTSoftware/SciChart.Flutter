//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIStackedColumnRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIStackedRenderableSeries.h"
#import "ISCISeriesRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for Stacked Column RenderableSeries within SciChart.
 * @see `SCIStackedColumnRenderableSeries`.
 * @see `SCIVerticallyStackedColumnsCollection`.
 */
@protocol ISCIStackedColumnRenderableSeries <ISCIStackedRenderableSeries>

/**
 * Updates `SCIStackedColumnRenderPassData.columnPixelWidth` value of this `ISCIStackedColumnRenderableSeries` instance.
 * If it's `SCIVerticallyStackedColumnsCollection` - updates `SCIStackedColumnRenderPassData.columnPixelWidth` for all series in the collection.
 * @param columnPixelWidth Value of new column width in pixels.
 */
- (void)updateColumnPixelWidth:(float)columnPixelWidth;

/**
 * Shifts `X-Values` coordinates to spread all horizontally stacked columns properly.
 * @param columnsCountAtX Array with counts of the horizontally stacked columns per each x-value.
 * @param pointsSequenceNumbers Array with positions in sequence of the horizontally stacked columns per each `x-value`. Used to properly determine each column position.
 * @param columnWidth Each column width in pixels.
 * @param columnSpacing Spacing between columns. Could be `SCISpacingMode.SCISpacingMode_Absolute` or `SCISpacingMode.SCISpacingMode_Relative`.
 */
- (void)shiftColumnCenters:(int *)columnsCountAtX pointsSequenceNumbers:(int *)pointsSequenceNumbers columnWidth:(float)columnWidth columnSpacing:(float)columnSpacing;

@end

NS_ASSUME_NONNULL_END
