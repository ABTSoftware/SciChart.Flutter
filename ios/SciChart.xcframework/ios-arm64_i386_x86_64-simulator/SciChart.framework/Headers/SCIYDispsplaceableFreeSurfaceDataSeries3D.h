//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIYDispsplaceableFreeSurfaceDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * 2D grid based free shaped 3D surface with dip.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIYDispsplaceableFreeSurfaceDataSeries3D : SCIDisplaceableFreeSurfaceDataSeries3D

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType displacementType:(SCIDataType)displacementType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_UNAVAILABLE;

/**
 * Creates a new `SCIYDispsplaceableFreeSurfaceDataSeries3D` instance.
 * @param xType The type of X-Data
 * @param yType The type of Y-Data
 * @param zType The type of Z-Data
 * @param uSize The uSize of the 2D grid.
 * @param vSize The vSize of the 2D grid.
 * @param uMin The minimum value of U component of the 2D grid.
 * @param uMax The maximum value of U component of the 2D grid.
 * @param vMin The minimum value of V component of the 2D grid.
 * @param vMax The maximum value of V component of the 2D grid.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_DESIGNATED_INITIALIZER;

@end
