//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnimations.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIValueAnimator.h"
#import "ISCIRenderableSeries.h"
#import "ISCIRenderPassDataTransformation.h"
#import "ISCIEasingFunction.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the class which contains methods to help create different animations/transformations for `ISCIRenderableSeries`.
 * @see `ISCIRenderPassDataTransformation`.
 * @see `SCIBaseRenderPassDataTransformation`.
 * @see `SCIScaleTransformationBase`.
 * @see `SCISweepXyTransformation`.
 * @see `SCITranslateXTransformation`.
 * @see `SCITranslateXyTransformationBase`.
 * @see `SCIWaveTransformationBase`.
 */
@interface SCIAnimations : NSObject

#pragma mark - Methods to create Animator

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `scale` transformation.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createScaleAnimatorForSeries:(id<ISCIRenderableSeries>)series;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `scale` transformation.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createScaleAnimatorForSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `sweep` transformation.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createSweepAnimatorForSeries:(id<ISCIRenderableSeries>)series;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `wave` transformation.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createWaveAnimatorForSeries:(id<ISCIRenderableSeries>)series;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `wave` transformation.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createWaveAnimatorForSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `wave` transformation.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param durationOfStep Wave duration before next point is started to animate. Default is `0.5`.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createWaveAnimatorForSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine andDurationOfStep:(float)durationOfStep;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `translate` transformation in `X-Direction`.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @param offset The translation offset value.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createTranslateXAnimatorForSeries:(id<ISCIRenderableSeries>)series withOffset:(float)offset;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with `translate` transformation in `Y-Direction`.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @param offset The translation offset value.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createTranslateYAnimatorForSeries:(id<ISCIRenderableSeries>)series withOffset:(float)offset;

/**
 * Creates `SCIValueAnimator` which can be used to animate associated `ISCIRenderableSeries` with one of the provided `ISCIRenderPassDataTransformation`s.
 * @param series The associated `ISCIRenderableSeries` which is going to be animated.
 * @param transformation The `ISCIRenderPassDataTransformation` which is going to be applied onto associated `series`.
 * @return `SCIValueAnimator` insance which can be used to animate associated `ISCIRenderableSeries`.
 */
+ (SCIValueAnimator *)createAnimatorForSeries:(id<ISCIRenderableSeries>)series withTransformation:(id<ISCIRenderPassDataTransformation>)transformation;

#pragma mark - Methods to animate renderable series

#pragma mark Fade Animations

/**
 * `Fade-in` animates passed in `ISCIRenderableSeries` with `scale` transformation.
 * @param series The series to `fade-in`.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)fadeSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * `Fade-in` animates passed in `ISCIRenderableSeries` with `scale` transformation.
 * @param series The series to `fade-in`.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)fadeSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

#pragma mark Scale Animations

/**
 * Animate passed in `ISCIRenderableSeries` with `scale` transformation.
 * @param series The series to animate.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)scaleSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `scale` transformation.
 * @param series The series to animate.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)scaleSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `scale` transformation.
 * @param series The series to animate.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)scaleSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `scale` transformation.
 * @param series The series to animate.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)scaleSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

#pragma mark Sweep Animations

/**
 * Animate passed in `ISCIRenderableSeries` with `sweep` transformation.
 * @param series The series to animate.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)sweepSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction NS_SWIFT_NAME(sweep(_:duration:easingFunction:));

/**
 * Animate passed in `ISCIRenderableSeries` with `sweep` transformation.
 * @param series The series to animate.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)sweepSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction NS_SWIFT_NAME(sweep(_:duration:delay:easingFunction:));

#pragma mark Wave Animations

/**
 * Animate passed in `ISCIRenderableSeries` with `wave` transformation.
 * @param series The series to animate.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)waveSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `wave` transformation.
 * @param series The series to animate.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)waveSeries:(id<ISCIRenderableSeries>)series duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `wave` transformation.
 * @param series The series to animate.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)waveSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `wave` transformation.
 * @param series The series to animate.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)waveSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `wave` transformation.
 * @param series The series to animate.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param durationOfStep Wave duration before next point is started to animate. Default is `0.5`.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)waveSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine andDurationOfStep:(float)durationOfStep duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animate passed in `ISCIRenderableSeries` with `wave` transformation.
 * @param series The series to animate.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 * @param durationOfStep Wave duration before next point is started to animate. Default is `0.5`.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)waveSeries:(id<ISCIRenderableSeries>)series withZeroLine:(double)zeroLine andDurationOfStep:(float)durationOfStep duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

#pragma mark Translate Animations

/**
 * Animate passed in `ISCIRenderableSeries` with `translate` transformation in `X-Direction`.
 * @param series The series to animate.
 * @param offset The translation offset value.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)translateXSeries:(id<ISCIRenderableSeries>)series withOffset:(float)offset duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction NS_SWIFT_NAME(translateX(_:offset:duration:easingFunction:));

/**
 * Animate passed in `ISCIRenderableSeries` with `translate` transformation in `X-Direction`.
 * @param series The series to animate.
 * @param offset The translation offset value.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)translateXSeries:(id<ISCIRenderableSeries>)series withOffset:(float)offset duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction NS_SWIFT_NAME(translateX(_:offset:duration:delay:easingFunction:));

/**
 * Animate passed in `ISCIRenderableSeries` with `translate` transformation in `Y-Direction`.
 * @param series The series to animate.
 * @param offset The translation offset value.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)translateYSeries:(id<ISCIRenderableSeries>)series withOffset:(float)offset duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction NS_SWIFT_NAME(translateY(_:offset:duration:easingFunction:));

/**
 * Animate passed in `ISCIRenderableSeries` with `translate` transformation in `Y-Direction`.
 * @param series The series to animate.
 * @param offset The translation offset value.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)translateYSeries:(id<ISCIRenderableSeries>)series withOffset:(float)offset duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction NS_SWIFT_NAME(translateY(_:offset:duration:delay:easingFunction:));

#pragma mark Animate with Transformation

/**
 * Animates passed in `ISCIRenderableSeries` with defined `ISCIRenderPassDataTransformation` and other params.
 * @param series The series to animate.
 * @param transformation The `ISCIRenderPassDataTransformation` which will be used during animation.
 * @param duration The length of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)animateSeries:(id<ISCIRenderableSeries>)series withTransformation:(id<ISCIRenderPassDataTransformation>)transformation duration:(NSTimeInterval)duration andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

/**
 * Animates passed in `ISCIRenderableSeries` with defined `ISCIRenderPassDataTransformation` and other params.
 * @param series The series to animate.
 * @param transformation The `ISCIRenderPassDataTransformation` which will be used during animation.
 * @param duration The length of the animation.
 * @param delay The `delay` before start of the animation.
 * @param easingFunction The `ISCIEasingFunction` used in calculating the elapsed fraction of the animation.
 */
+ (void)animateSeries:(id<ISCIRenderableSeries>)series withTransformation:(id<ISCIRenderPassDataTransformation>)transformation duration:(NSTimeInterval)duration startDelay:(NSTimeInterval)delay andEasingFunction:(nullable id<ISCIEasingFunction>)easingFunction;

@end

NS_ASSUME_NONNULL_END
