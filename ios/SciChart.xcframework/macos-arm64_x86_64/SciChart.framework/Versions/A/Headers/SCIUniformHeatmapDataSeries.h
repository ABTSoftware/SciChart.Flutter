//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUniformHeatmapDataSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDataSeries.h"
#import "ISCIUniformHeatmapDataSeries.h"
#import "SCIDataType.h"
#import "ISCIMath.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A data series to store uniform heatmap data, containing X, Y and Z values.
 */
@interface SCIUniformHeatmapDataSeries : SCIDataSeries<ISCIUniformHeatmapDataSeries> {
@protected
    /// Defines the type of the Z-Data.
    SCIDataType _zType;
    /// Provides the `ISCIMath` instance for operations with Z-Data.
    id<ISCIMath> _zMath;
    
    /// Provides the size of 2D heatmap data in `X-direction`.
    NSInteger _xSize;
    /// Provides the size of 2D heatmap data in `Y-direction`.
    NSInteger _ySize;
    /// Provides the number of points in this series.
    NSInteger _count;
}

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType NS_UNAVAILABLE;

/**
 * Creates a new `SCIUniformHeatmapDataSeries` instance.
 * @param xType The type of `X-Data`.
 * @param yType The type of `Y-Data`.
 * @param zType The type of `Z-Data`.
 * @param xSize The size of the heatmap data in x-direction.
 * @param ySize The size of the heatmap data in y-direction.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType xSize:(NSInteger)xSize ySize:(NSInteger)ySize NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
