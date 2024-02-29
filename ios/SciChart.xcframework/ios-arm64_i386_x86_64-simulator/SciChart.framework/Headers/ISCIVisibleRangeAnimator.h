//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIVisibleRangeAnimator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRange.h"
#import "ISCIAttachable.h"
#import "ISCIAxisCore.h"

/**
 * Defines the protocol with methods for animating VisibleRange of `ISCIAxisCore`.
 */
@protocol ISCIVisibleRangeAnimator <ISCIAttachable>

/**
 * Animates `ISCIAxisCore.visibleRange` to specified range.
 * @param to The `ISCIRange` instance to animate to.
 * @param duration The duration of animation measured in seconds.
 */
- (void)animateTo:(nonnull id<ISCIRange>)to duration:(NSTimeInterval)duration;

/**
 * Cancels running animation.
 */
- (void)cancelAnimation;

/**
 * Gets the value indicating whether the animation is running.
 */
@property (nonatomic, readonly) BOOL isAnimating;

@end
