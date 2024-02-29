//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPoint3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/**
 * Represents the `[x, y, z]` coordinates point in 3-D space.
 * @note The `x`, `y` and `z` components are single-precision floating-point values.
 */
@interface SCIPoint3D : NSObject

/**
 * The `x-component` of this `SCIPoint3D`.
 */
@property (nonatomic, readonly) float x;

/**
 * The `y-component` of this `SCIPoint3D`.
 */
@property (nonatomic, readonly) float y;

/**
 * The `z-component` of this `SCIPoint3D`.
 */
@property (nonatomic, readonly) float z;

/**
 * Assign new values to the the `x`, `y` and `z` components from passed in `SCIPoint3D`.
 * @param point The `SCIPoint3D` object to copy `x`, `y` and `z` components from.
 */
- (void)assign:(nonnull SCIPoint3D *)point;

/**
 * Assign new values to the the `x`, `y` and `z` components.
 * @param x The new x value.
 * @param y The new y value.
 * @param z The new z value.
 */
- (void)assignX:(float)x y:(float)y z:(float)z;

/**
 * Clears the `x`, `y` and `z` components.
 */
- (void)clear;

@end
