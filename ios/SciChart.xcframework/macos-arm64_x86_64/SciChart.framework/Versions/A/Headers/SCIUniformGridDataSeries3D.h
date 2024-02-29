//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUniformGridDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseGridDataSeries3D.h"
#import "ISCIUniformGridDataSeries3DValues.h"
#import "ISCIXyzDataSeries3DValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a uniform 3D GridDataSeries.
 */
@interface SCIUniformGridDataSeries3D : SCIBaseGridDataSeries3D<ISCIXyzDataSeries3DValues, ISCIUniformGridDataSeries3DValues>

/**
 * Defines start X value for 3D grid.
 */
@property (strong, nonatomic) id<ISCIComparable> startX NS_REFINED_FOR_SWIFT;

/**
 * Defines the size for each cell in 3D grid in X direction.
 */
@property (strong, nonatomic) id<ISCIComparable> stepX NS_REFINED_FOR_SWIFT;

/**
 * Defines start Z value for 3D grid.
 */
@property (strong, nonatomic) id<ISCIComparable> startZ NS_REFINED_FOR_SWIFT;

/**
 * Defines the size for each cell in 3D grid in Z direction.
 */
@property (strong, nonatomic) id<ISCIComparable> stepZ NS_REFINED_FOR_SWIFT;

/**
 * Creates a new `SCIUniformGridDataSeries3D` instance.
 * @param xType The type of `X-Data`.
 * @param yType The type of `Y-Data`.
 * @param zType The type of `Z-Data`.
 * @param xSize The size of the X.
 * @param zSize The size of the Z.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType xSize:(NSInteger)xSize zSize:(NSInteger)zSize;

@end

NS_ASSUME_NONNULL_END
