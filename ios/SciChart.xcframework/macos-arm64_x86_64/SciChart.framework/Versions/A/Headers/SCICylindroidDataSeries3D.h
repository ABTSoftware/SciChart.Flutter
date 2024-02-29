//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICylindroidDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXzDisplaceableFreeSurfaceDataSeries3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Data Series that defines the Cylindroid in 3-Dimensional space.
 */
@interface SCICylindroidDataSeries3D : SCIXzDisplaceableFreeSurfaceDataSeries3D

/**
 * The A component of the Cylindroid.
 */
@property (strong, nonatomic) id<ISCIComparable> a NS_REFINED_FOR_SWIFT;

/**
 * The B component of the Cylindroid.
 */
@property (strong, nonatomic) id<ISCIComparable> b NS_REFINED_FOR_SWIFT;

/**
 * The height of the Cylindroid.
 */
@property (strong, nonatomic) id<ISCIComparable> h NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCICylindroidDataSeries3D`.
 * @param xzType The type used for X and Z data.
 * @param yType The type used for Y data.
 * @param uSize The U dimension of 2D grid.
 * @param vSize The V dimension of 2D grid.
 */
- (instancetype)initWithXZType:(SCIDataType)xzType yType:(SCIDataType)yType uSize:(NSInteger)uSize vSize:(NSInteger)vSize;

/**
 * Creates a new instance of `SCICylindroidDataSeries3D`.
 * @param xzType The type used for X and Z data.
 * @param yType The type used for Y data.
 * @param uSize The U dimension of 2D grid.
 * @param vSize The V dimension of 2D grid.
 * @param uMin The minimum value of U component of the 2D grid.
 * @param uMax The maximum value of U component of the 2D grid.
 * @param vMin The minimum value of V component of the 2D grid.
 * @param vMax The maximum value of V component of the 2D grid.
 */
- (instancetype)initWithXZType:(SCIDataType)xzType yType:(SCIDataType)yType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
