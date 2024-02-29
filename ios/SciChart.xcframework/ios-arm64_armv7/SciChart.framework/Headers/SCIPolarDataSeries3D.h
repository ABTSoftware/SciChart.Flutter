//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPolarDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIYDispsplaceableFreeSurfaceDataSeries3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Data Series that defines the polar chart in 3D space.
 */
@interface SCIPolarDataSeries3D : SCIYDispsplaceableFreeSurfaceDataSeries3D

/**
 * The A component of the polar data series.
 */
@property (strong, nonatomic) id<ISCIComparable> a NS_REFINED_FOR_SWIFT;

/**
 * The B component of the polar data series.
 */
@property (strong, nonatomic) id<ISCIComparable> b NS_REFINED_FOR_SWIFT;

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIPolarDataSeries3D`.
 * @param polarType The type used for polar data.
 * @param heightType The type used for height data.
 * @param uSize The U dimension of 2D grid.
 * @param vSize The V dimension of 2D grid.
 * @param uMin The minimum value of U component of the 2D grid.
 * @param uMax The maximum value of U component of the 2D grid.
 */
- (instancetype)initWithXType:(SCIDataType)polarType heightType:(SCIDataType)heightType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
