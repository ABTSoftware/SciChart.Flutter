//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIUniformHeatmapDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIUniformHeatmapDataSeriesValues.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for 2D uniform heatmap DataSeries, containing `X`, `Y` and `Z` values.
 */
@protocol ISCIUniformHeatmapDataSeries <ISCIUniformHeatmapDataSeriesValues>

/**
 * Gets or sets start X value for 2D heatmap.
 */
@property (strong, nonatomic) id<ISCIComparable> startX NS_REFINED_FOR_SWIFT;

/**
 * Gets or sets the size for each cell in 2D heatmap in X direction.
 */
@property (strong, nonatomic) id<ISCIComparable> stepX NS_REFINED_FOR_SWIFT;

/**
 * Gets or sets start Y value for 2D heatmap.
 */
@property (strong, nonatomic) id<ISCIComparable> startY NS_REFINED_FOR_SWIFT;

/**
 * Gets or sets the size for each cell in 2D heatmap in Y direction.
 */
@property (strong, nonatomic) id<ISCIComparable> stepY NS_REFINED_FOR_SWIFT;

#pragma mark - Update

/**
 * Updates Z Value at specified xIndex and yIndex.
 * @param z The value to set.
 * @param xIndex The xIndex to update at.
 * @param yIndex The yIndex to update at.
 */
- (void)updateZ:(id<ISCIComparable>)z atX:(NSInteger)xIndex y:(NSInteger)yIndex NS_REFINED_FOR_SWIFT;

/**
 * Updates all Z values for this series.
 * @param zArray The new Z value for this series.
 */
- (void)updateZArray:(NSArray<id<ISCIComparable>> *)zArray NS_REFINED_FOR_SWIFT;

/**
 * Updates the range of Z values for this series.
 * @param zArray The new Z values.
 * @param xIndex The xIndex to start update at.
 * @param yIndex The yIndex to start update at.
 */
- (void)updateZArray:(NSArray<id<ISCIComparable>> *)zArray atX:(NSInteger)xIndex y:(NSInteger)yIndex NS_REFINED_FOR_SWIFT;

/**
 * Updates all Z values for this series.
 * @param zValues The new Z value for this series.
 */
- (void)updateZValues:(id<ISCIValues>)zValues NS_SWIFT_NAME(update(z:));

/**
 * Updates the range of Z values for this series.
 * @param zValues The new Z values.
 * @param xIndex The xIndex to start update at.
 * @param yIndex The yIndex to start update at.
 */
- (void)updateZValues:(id<ISCIValues>)zValues atX:(NSInteger)xIndex y:(NSInteger)yIndex NS_SWIFT_NAME(update(z:atX:y:));

@end

NS_ASSUME_NONNULL_END
