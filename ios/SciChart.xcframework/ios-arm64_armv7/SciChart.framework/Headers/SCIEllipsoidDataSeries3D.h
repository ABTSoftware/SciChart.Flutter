//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIEllipsoidDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzDisplaceableFreeSurfaceDataSeries3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Data Series that defines the Ellipsoid in 3-Dimensional space by the Standard equation.
 */
@interface SCIEllipsoidDataSeries3D : SCIXyzDisplaceableFreeSurfaceDataSeries3D

/**
 * The A component of the Standard ellipsoid equation.
 */
@property (strong, nonatomic) id<ISCIComparable> a NS_REFINED_FOR_SWIFT;

/**
 * The B component of the Standard ellipsoid equation.
 */
@property (strong, nonatomic) id<ISCIComparable> b NS_REFINED_FOR_SWIFT;

/**
 * The C component of the Standard ellipsoid equation.
 */
@property (strong, nonatomic) id<ISCIComparable> c NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCIEllipsoidDataSeries3D`.
 * @param dataType The type of X, Y and Z data.
 * @param uSize The U dimension of 2D grid.
 * @param vSize The V dimension of 2D grid.
 */
- (instancetype)initWithDataType:(SCIDataType)dataType uSize:(NSInteger)uSize vSize:(NSInteger)vSize;

@end

NS_ASSUME_NONNULL_END
