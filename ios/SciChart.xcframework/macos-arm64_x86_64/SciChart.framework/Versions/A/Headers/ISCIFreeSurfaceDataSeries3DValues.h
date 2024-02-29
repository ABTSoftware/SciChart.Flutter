//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIFreeSurfaceDataSeries3DValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIXyzDataSeries3DValues.h"
#import "ISCIComparable.h"

/**
 * Defines the protocol with values for 2D grid based free shaped 3D surface.
 */
@protocol ISCIFreeSurfaceDataSeries3DValues <ISCIXyzDataSeries3DValues>

/**
 * Gets number of U segments of the 2D grid.
 */
@property (nonatomic, readonly) NSInteger uSize;

/**
 * Gets number of V segments of the 2D grid.
 */
@property (nonatomic, readonly) NSInteger vSize;

/**
 * Gets a data offset by X axis of the Surface.
 */
@property (nonatomic, readonly, nonnull) id<ISCIComparable> offsetX NS_REFINED_FOR_SWIFT;

/**
 * Gets a data offset by Y axis of the Surface.
 */
@property (nonatomic, readonly, nonnull) id<ISCIComparable> offsetY NS_REFINED_FOR_SWIFT;

/**
 * Gets a data offset by Z axis of the Surface.
 */
@property (nonatomic, readonly, nonnull) id<ISCIComparable> offsetZ NS_REFINED_FOR_SWIFT;

@end
