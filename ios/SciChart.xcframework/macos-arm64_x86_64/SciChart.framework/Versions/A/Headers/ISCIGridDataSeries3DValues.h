//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIGridDataSeries3DValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDataSeries3D.h"
#import "ISCIDoubleValuesProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an interface to 3D GridDataSeries, the data source used for various `ISCIRenderableSeries3D`.
 */
@protocol ISCIGridDataSeries3DValues <ISCIDataSeries3D>

/**
 * Gets the X Values of this series.
 */
@property (nonatomic, readonly) id<ISCIDoubleValuesProvider> xValues;

/**
 * Gets the Y Values of this series.
 */
@property (nonatomic, readonly) id<ISCIDoubleValuesProvider> yValues;

/**
 * Gets the Z Values of this series.
 */
@property (nonatomic, readonly) id<ISCIDoubleValuesProvider> zValues;

/**
 * Gets the size of 3D grid in X direction.
 */
@property (nonatomic, readonly) NSInteger xSize;

/**
 * Gets the size of 3D grid in Z direction.
 */
@property (nonatomic, readonly) NSInteger zSize;

/**
 * Gets the X value for specified xIndex.
 * @param index The index to get X value for.
 * @return The x value.
 */
- (id<ISCIComparable>)getXValueAt:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Gets the Y value for specified xIndex and zIndex.
 * @param xIndex The xIndex to get Y value for.
 * @param zIndex The zIndex to get Y value for.
 * @return The y value.
 */
- (id<ISCIComparable>)getYValueAtX:(NSInteger)xIndex zIndex:(NSInteger)zIndex NS_REFINED_FOR_SWIFT;

/**
 * Gets the Z value for specified xIndex.
 * @param index The index to get Z value for.
 * @return The z value.
 */
- (id<ISCIComparable>)getZValueAt:(NSInteger)index NS_REFINED_FOR_SWIFT;

@end

NS_ASSUME_NONNULL_END
