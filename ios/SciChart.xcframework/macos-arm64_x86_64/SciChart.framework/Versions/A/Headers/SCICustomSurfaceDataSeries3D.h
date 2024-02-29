//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICustomSurfaceDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFreeSurfaceDataSeries3D.h"

/**
 * Defines a block for getting value based on specified U anv V coordinates.
 * @param u The U value to use.
 * @param v The V value to use.
 * @return The value for specified coordinates.
 */
typedef double (^SCIUVFunc)(double u, double v);

/**
 * Defines a block for getting value based on specified radius, theta and phi value.
 * @param r The radius to use.
 * @param theta The theta to use.
 * @param phi The phi to use.
 * @return The function value for specified values.
 */
typedef double (^SCIValueFunc)(double r, double theta, double phi);

NS_ASSUME_NONNULL_BEGIN

/**
 * The mesh data series defined by parametrized in regards to spherical coordinates system: `Radius, Pole and Azimuth`.
 */
@interface SCICustomSurfaceDataSeries3D : SCIFreeSurfaceDataSeries3D

/// :nodoc:
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_UNAVAILABLE;

/**
 * Creates a new `CustomSurfaceDataSeries3D` instance.
 * @param xType The type of the X-Data.
 * @param yType The type of the Y-Data.
 * @param zType The type of the Z-Data.
 * @param uSize The U dimension of the 2D grid.
 * @param vSize The V dimension of the 2D grid.
 * @param radialDistanceFunc Custom function that provides a value, treated as radius argument in X/Y/Z custom functions.
 * @param azimuthalAngleFunc Custom function that provides a value, treated as azimuth argument in X/Y/Z custom functions.
 * @param polarAngleFunc Custom function that provides a value, treated as polar angle argument in X/Y/Z custom functions.
 * @param xFunc Custom function that provides the position X value, based on passed radius, azimuth and pole arguments.
 * @param yFunc Custom function that provides the position Y value, based on passed radius, azimuth and pole arguments.
 * @param zFunc Custom function that provides the position Z value, based on passed radius, azimuth and pole arguments.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType uSize:(NSInteger)uSize vSize:(NSInteger)vSize radialDistanceFunc:(SCIUVFunc)radialDistanceFunc azimuthalAngleFunc:(SCIUVFunc)azimuthalAngleFunc polarAngleFunc:(SCIUVFunc)polarAngleFunc xFunc:(SCIValueFunc)xFunc yFunc:(SCIValueFunc)yFunc zFunc:(SCIValueFunc)zFunc;

/**
 * Creates a new `CustomSurfaceDataSeries3D` instance.
 * @param xType The type of the X-Data.
 * @param yType The type of the Y-Data.
 * @param zType The type of the Z-Data.
 * @param uSize The U dimension of the 2D grid.
 * @param vSize The V dimension of the 2D grid.
 * @param radialDistanceFunc Custom function that provides a value, treated as radius argument in X/Y/Z custom functions.
 * @param azimuthalAngleFunc Custom function that provides a value, treated as azimuth argument in X/Y/Z custom functions.
 * @param polarAngleFunc Custom function that provides a value, treated as polar angle argument in X/Y/Z custom functions.
 * @param xFunc Custom function that provides the position X value, based on passed radius, azimuth and pole arguments.
 * @param yFunc Custom function that provides the position Y value, based on passed radius, azimuth and pole arguments.
 * @param zFunc Custom function that provides the position Z value, based on passed radius, azimuth and pole arguments.
 * @param uMin The minimum value of U component of the 2D grid.
 * @param uMax The maximum value of U component of the 2D grid.
 * @param vMin The minimum value of V component of the 2D grid.
 * @param vMax The maximum value of V component of the 2D grid.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType uSize:(NSInteger)uSize vSize:(NSInteger)vSize radialDistanceFunc:(SCIUVFunc)radialDistanceFunc azimuthalAngleFunc:(SCIUVFunc)azimuthalAngleFunc polarAngleFunc:(SCIUVFunc)polarAngleFunc xFunc:(SCIValueFunc)xFunc yFunc:(SCIValueFunc)yFunc zFunc:(SCIValueFunc)zFunc uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
