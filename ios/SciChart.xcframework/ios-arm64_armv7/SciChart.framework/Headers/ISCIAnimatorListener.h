//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAnimatorListener.h is part of SCICHART®, High Performance Scientific Charts
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

@class SCIValueAnimator;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an animation listener which receives notifications from an animation.
 * @note Notifications indicate animation related events, such as the start, update end or cancel the animation.
 */
@protocol ISCIAnimatorListener <NSObject>

/**
 * Notifies the start of the animation.
 * @param animation The started animation.
 */
- (void)onAnimationStart:(SCIValueAnimator *)animation;

/**
 * Notifies the occurrence of another frame of the animation.
 * @param animation The animation which was repeated.
 */
- (void)onAnimationUpdate:(SCIValueAnimator *)animation;

/**
 * Notifies the end of the animation.
 * @param animation The animation which reached its end.
 */
- (void)onAnimationEnd:(SCIValueAnimator *)animation;

/**
 * Notifies the cancellation of the animation.
 * @param animation The animation which was canceled.
 */
- (void)onAnimationCancel:(SCIValueAnimator *)animation;

@end

NS_ASSUME_NONNULL_END
