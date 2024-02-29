//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIUniformHeatmapDataSeriesValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDataSeries.h"
#import "ISCIComparable.h"
#import "ISCIList.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for 2D uniform heatmap DataSeries value, containing `X`, `Y` and `Z` values.
 */
 @protocol ISCIUniformHeatmapDataSeriesValues <ISCIDataSeries>

/**
 * Gets the size of 2D heatmap data in X direction.
 */
@property (nonatomic, readonly) NSInteger xSize;

/**
 * Gets the size of 2D heatmap data in Y direction.
 */
@property (nonatomic, readonly) NSInteger ySize;

/**
 * Gets start X value for 2D heatmap.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> startX NS_REFINED_FOR_SWIFT;

/**
 * Gets the size for each cell in 2D heatmap in X direction.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> stepX NS_REFINED_FOR_SWIFT;

/**
 * Gets start Y value for 2D heatmap.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> startY NS_REFINED_FOR_SWIFT;

/**
 * Gets the size for each cell in 2D heatmap in Y direction.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> stepY NS_REFINED_FOR_SWIFT;

/**
 * Gets the Z values of this series.
 */
@property (strong, nonatomic, readonly) id<ISCIList> zValues;

/**
 * Gets the X value for specified index.
 * @param xIndex The xIndex to get X value for.
 * @return The X value.
 */
- (id<ISCIComparable>)getXValueAt:(NSInteger)xIndex NS_REFINED_FOR_SWIFT;

/**
 * Gets the Y value for specified index.
 * @param yIndex The yIndex to get Y value for.
 * @return The Y value.
 */
- (id<ISCIComparable>)getYValueAt:(NSInteger)yIndex NS_REFINED_FOR_SWIFT;

/**
 * Gets the Z value for specified xIndex and yIndex.
 * @param xIndex The xIndex to get Z value for.
 * @param yIndex The yIndex to get Z value for.
 * @return The Z value.
 */
- (id<ISCIComparable>)getZValueAtX:(NSInteger)xIndex y:(NSInteger)yIndex NS_REFINED_FOR_SWIFT;

/**
 * Gets xIndex based on index from `zValues` list.
 * @param zIndex The raw zIndex of item from `zValues` list.
 * @return The xIndex.
 */
- (NSInteger)getXIndexFromZ:(NSInteger)zIndex;

/**
 * Gets yIndex based on index from `zValues` list.
 * @param zIndex The raw zIndex of item from `zValues` list.
 * @return The yIndex.
 */
- (NSInteger)getYIndexFromZ:(NSInteger)zIndex;

/**
 * Gets raw zIndex based on xIndex and yIndex.
 * @param xIndex The xIndex.
 * @param yIndex The yIndex.
 * @return The raw zIndex.
 */
- (NSInteger)getZIndexFromX:(NSInteger)xIndex y:(NSInteger)yIndex;

@end

NS_ASSUME_NONNULL_END
