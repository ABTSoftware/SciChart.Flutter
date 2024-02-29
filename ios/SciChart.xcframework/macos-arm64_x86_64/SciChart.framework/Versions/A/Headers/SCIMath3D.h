//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMath3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIVector3.h"
#import <CoreGraphics/CoreGraphics.h>

/**
 * Helper class to expose certain 3-D math functions.
 */
@interface SCIMath3D : NSObject

/**
 * Computation of `Pitch` and `Yaw` angles from forward vector.
 * @param direction The forward vector.
 * @return The `CGPoint` which stores calculated pitch and yaw.
 * @note x - pitch value; y - yaw value.
 */
+ (CGPoint)calculatePitchAndYawFromDirection:(nonnull SCIVector3 *)direction;

/**
 * Computation of normalized direction vector from `Pitch` and `Yaw`.
 * @param pitch The pitch in `Degrees`.
 * @param yaw The yaw in `Degrees`.
 * @param direction The vector where computed direction should be stored.
 */
+ (void)pitch:(float)pitch andYaw:(float)yaw toDirection:(nonnull SCIVector3 *)direction;

@end
