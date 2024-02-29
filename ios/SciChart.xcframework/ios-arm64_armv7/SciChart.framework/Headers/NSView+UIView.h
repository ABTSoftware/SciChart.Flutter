//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// NSView+UIView.h is part of SCICHART®, High Performance Scientific Charts
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

#import <TargetConditionals.h>

#if TARGET_OS_OSX

#import <AppKit/NSView.h>

NS_ASSUME_NONNULL_BEGIN

/// :nodoc:
@interface NSView (UIView)

#pragma mark - Properties

// Need to use some common with iOS property with different name, other then `backgroundColor` because setter and getter will not be called.
@property (strong, nonatomic) NSColor *platformBackgroundColor;

@property (nonatomic) CGPoint center;

@property (nonatomic) NSEdgeInsets layoutMargins;

#pragma mark - Layout

- (BOOL)isDescendantOfView:(NSView *)view;

- (void)setNeedsDisplay;

- (void)setNeedsLayout;

- (void)layoutIfNeeded;

- (void)insertSubview:(NSView *)child atIndex:(NSInteger)index;

- (float)contentHuggingPriorityForAxis:(NSInteger)axis;

#pragma mark - Swizzling

- (void)layoutSubviews;

- (NSView *)hitTest:(CGPoint)point withEvent:(nullable NSEvent *)event;

- (void)didMoveToWindow;

@end

NS_ASSUME_NONNULL_END

#endif
