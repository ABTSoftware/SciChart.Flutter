//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIUniformGridDataSeries3DValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIGridDataSeries3DValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an interface to uniform 3D `GridDataSeries`, the data source used for various `ISCIRenderableSeries3D`.
 */
@protocol ISCIUniformGridDataSeries3DValues <ISCIGridDataSeries3DValues>

/**
 * Gets start X value for 3D grid.
 */
@property (nonatomic, readonly) id<ISCIComparable> startX NS_REFINED_FOR_SWIFT;

/**
 * Gets the size for each cell in 3D grid in X direction.
 */
@property (nonatomic, readonly) id<ISCIComparable> stepX NS_REFINED_FOR_SWIFT;

/**
 * Gets start Z value for 3D grid.
 */
@property (nonatomic, readonly) id<ISCIComparable> startZ NS_REFINED_FOR_SWIFT;

/**
 * Gets the size for each cell in 3D grid in Z direction.
 */
@property (nonatomic, readonly) id<ISCIComparable> stepZ NS_REFINED_FOR_SWIFT;

@end

NS_ASSUME_NONNULL_END
