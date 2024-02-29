//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIValueAnimator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAnimatorListener.h"
#import "ISCIEasingFunction.h"

/**
 * This class provides a simple timing engine for running animations which calculate animated values and set them on target objects.
 * @note Implemented with the DisplayLink under the hood.
 */
@interface SCIValueAnimator : NSObject

/**
 * Defines the length of the animation. The default duration is `0.3 seconds`.
 */
@property (nonatomic) NSTimeInterval duration;

/**
 * Defines the `delay` before start of the animation. The default delay is `0 seconds`.
 */
@property (nonatomic) NSTimeInterval startDelay;

/**
 * Defines the `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 * The `easingFunction` determines whether the animation runs with linear or non-linear motion.
 * @note default value is `nil`.
 */
@property (strong, nonatomic, nullable) id<ISCIEasingFunction> easingFunction;

/**
 * Defines the value indicating current animation progress.
 */
@property (nonatomic, readonly) double animatedFraction;

/**
 * Defines the value indicating whether this `SCIValueAnimator` is animating or not.
 */
@property (nonatomic, readonly) BOOL isAnimating;

#pragma mark - Start/Cancel

/**
 * Starts this animation. If the animation has a nonzero `startDelay`, the animation will start running after that delay elapses.
 * A non-delayed animation will have its initial value set immediately, followed by calls to `-[ISCIAnimatorListener onAnimationStart:]` for any listeners of this animator.
 */
- (void)start;

/**
 * Starts this animation. If the animation has a nonzero `startDelay`, the animation will start running after that delay elapses.
 * A non-delayed animation will have its initial value set immediately, followed by calls to `-[ISCIAnimatorListener onAnimationStart:]` for any listeners of this animator.
 * @param duration The length of the animation.
 */
- (void)startWithDuration:(NSTimeInterval)duration;

/**
 * Starts this animation. If the animation has a nonzero `startDelay`, the animation will start running after that delay elapses.
 * A non-delayed animation will have its initial value set immediately, followed by calls to `-[ISCIAnimatorListener onAnimationStart:]` for any listeners of this animator.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 */
- (void)startWithDuration:(NSTimeInterval)duration andStartDelay:(NSTimeInterval)delay;

/**
 * Cancels the animation. Causes the animation to stop sending an `-[ISCIAnimatorListener onAnimationCancel:]` to all its listeners.
 */
- (void)cancel;

#pragma mark - Listeners

/**
 * Adds a `listener` which will receive notifications from an animation, such as start or end animation.
 * @param listener the listener to be added to the current set of listeners for this animation.
 */
- (void)addListener:(nonnull id<ISCIAnimatorListener>)listener;

/**
 * Removes a listener from the set listening to this animation.
 * @param listener The listener to be removed from the current set of listeners for this animation.
 */
- (void)removeListener:(nonnull id<ISCIAnimatorListener>)listener;

/**
 * Remove all `-addListener:` from this `SCIValueAnimator` instance.
 */
- (void)removeAllListeners;

@end
