//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesInfoCore.h"
#import "ISCIHitTestInfoUpdatable.h"
#import "SCIDataSeriesType.h"
#import "ISCIRenderableSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which contains information about a series, such as name, value, color based on `SCIHitTestInfo` values.
 */
@interface SCISeriesInfo: SCISeriesInfoCore<ISCIHitTestInfoUpdatable>

/**
 * The parent renderable series.
 */
@property (strong, nonatomic, readonly) id<ISCIRenderableSeries> renderableSeries;

/**
 * A point snapped to the `X-Y` value of the series.
 */
@property (nonatomic) CGPoint xyCoordinate;

/**
 * The type of `ISCIDataSeries` that was hit tested.
 */
@property (nonatomic) SCIDataSeriesType dataSeriesType;

/**
 * The DataSeriesIndex at the `hit-test` site.
 */
@property (nonatomic) NSInteger dataSeriesIndex;

/**
 * The value indicating whether the input point is between first and last series point or not
 */
@property (nonatomic) BOOL isWithinDataBounds;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCISeriesInfo` class.
 * @param series The parent renderable series.
 */
- (instancetype)initWithSeries:(id<ISCIRenderableSeries>)series NS_DESIGNATED_INITIALIZER;

/**
 * Updates this series info with the latest values from renderable series.
 */
- (void)update;

@end

NS_ASSUME_NONNULL_END
