//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIView.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIHitTestable.h"
#import "SCIEdgeInsets.h"

/**
 * Defines protocol which allows to get access to some of the `UIView` members.
 */
@protocol ISCIView <ISCIHitTestable>

/**
 * Gets the view frame.
 * @warning Do not use frame if view is transformed since it will not correctly reflect the actual location of the view. Use bounds + center instead.
 * @note Animatable.
 */
@property (nonatomic, readonly) CGRect frame;

/**
 * Gets the bounds of the frame. Default bounds is zero origin, frame size.
 * @note Animatable.
 */
@property (nonatomic, readonly) CGRect bounds;

/**
 * Gets the center of the frame.
 * @note Animatable.
 */
@property (nonatomic, readonly) CGPoint center;

/**
 * The default spacing to use when laying out content in the view.
 * @note Sizes are in `Points`.
 */
@property (nonatomic, readonly) SCIEdgeInsets layoutMargins;

/**
 * A Boolean value that determines whether the view’s autoresizing mask is translated into Auto Layout constraints.
 */
@property (nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;

/**
 * A Boolean value that determines whether user events are ignored and removed from the event queue.
 */
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

/**
 * A Boolean value that determines whether the view is hidden.
 */
@property (nonatomic, getter=isHidden) BOOL hidden;

/**
 * A Boolean value that determines whether the view is opaque.
 */
@property (nonatomic, getter=isOpaque) BOOL opaque;

/**
 * Adds a view to the end of the receiver’s list of subviews.
 */
- (void)addSubview:(nonnull SCIView *)view;

/**
 * Invalidates the current layout of the receiver and triggers a layout update during the next update cycle.
 * Allows to perform layout before the drawing cycle happens.
 */
- (void)setNeedsLayout;

/**
 * Lays out the subviews immediately, if layout updates are pending.
 */
- (void)layoutIfNeeded;

/**
 * Marks the receiver’s entire bounds rectangle as needing to be redrawn.
 */
- (void)setNeedsDisplay;

@end
