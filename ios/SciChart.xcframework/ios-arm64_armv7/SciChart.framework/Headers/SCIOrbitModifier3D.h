//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIOrbitModifier3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase3D.h"

/**
 * The `SCIOrbitModifier3D` provides the behaviour of orbit (rotation around camera target).
 */
@interface SCIOrbitModifier3D : SCIGestureModifierBase3D

/**
 * Defines the number of degrees (angle) to orbit the target for each pixel.
 */
@property (nonatomic) float degreesPerPixelSensitivity;

/**
 * Defines the `UIPanGestureRecognizer` which is used to detect gestures.
 */
@property (nonatomic, readonly, nullable) SCIPanGestureRecognizer *gestureRecognizer;

/**
 * Creates a new instance of the `SCIOrbitModifier3D` class.
 * @param numberOfTouches The default number of touches which will be used by underlying gestureRecognizer.
 */
- (nonnull instancetype)initWithDefaultNumberOfTouches:(NSUInteger)numberOfTouches;

@end
