//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXyzDisplaceableFreeSurfaceDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisplaceableFreeSurfaceDataSeries3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Free Surface data series with the grid data, applied to its points displacing them along the XYZ axes.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIXyzDisplaceableFreeSurfaceDataSeries3D : SCIDisplaceableFreeSurfaceDataSeries3D

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType displacementType:(SCIDataType)displacementType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_UNAVAILABLE;
/**
 * Creates a new `SCIDisplaceableFreeSurfaceDataSeries3D` instance.
 * @param dataType The type of X, Y and Z data.
 * @param uSize The uSize of the 2D grid.
 * @param vSize The vSize of the 2D grid.
 * @param uMin The minimum value of U component of the 2D grid.
 * @param uMax The maximum value of U component of the 2D grid.
 * @param vMin The minimum value of V component of the 2D grid.
 * @param vMax The maximum value of V component of the 2D grid.
 */
- (instancetype)initWithDataType:(SCIDataType)dataType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
