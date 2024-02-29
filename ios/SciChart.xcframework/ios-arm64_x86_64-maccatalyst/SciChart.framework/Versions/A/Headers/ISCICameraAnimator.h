//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCICameraAnimator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"

@class SCIVector3;

/**
 * Defines the interface with methods for animating position of `ISCICameraController`.
 */
@protocol ISCICameraAnimator <ISCIAttachable>

/**
 * Animates camera to specified `position` and `target` position with specified duration.
 * @param position The final position of camera.
 * @param target   The final target of camera.
 * @param duration The animation duration.
 */
- (void)animatePosition:(nonnull SCIVector3 *)position andTarget:(nonnull SCIVector3 *)target withDuration:(NSTimeInterval)duration;

/**
 * Cancels running animation.
 */
- (void)cancelAnimation;

/**
 * Gets the value indicating whether the animation is running.
 */
@property (nonatomic, readonly) BOOL isAnimating;

@end
