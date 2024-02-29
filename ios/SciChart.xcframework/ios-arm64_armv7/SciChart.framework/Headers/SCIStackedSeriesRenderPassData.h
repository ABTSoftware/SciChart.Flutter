//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIStackedSeriesRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `ISCIStackedRenderableSeries` inheritors.
 */
@interface SCIStackedSeriesRenderPassData : SCIXyRenderPassData

/**
 * Defines the stroke thickness of stacked series lines.
 * @note used internally, to take it into account while updating drawing coordinates.
 */
@property (nonatomic) float strokeThickness;

/**
 * Provides the collection of previous series `Y-Values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *prevSeriesYValues;

/**
 * Provides the collection of previous series `Y-Coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *prevSeriesYCoords;

/**
 * Ends update of this render pass data for stacked data.
 */
- (void)onEndStackedDataUpdate;

@end

NS_ASSUME_NONNULL_END
