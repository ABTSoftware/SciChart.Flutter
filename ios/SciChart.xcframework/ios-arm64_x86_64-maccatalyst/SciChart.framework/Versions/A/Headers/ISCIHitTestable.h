//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIHitTestable.h is part of SCICHART®, High Performance Scientific Charts
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

#import <CoreGraphics/CoreGraphics.h>
#import "SCIView.h"

/**
 * Defines the base interface for a type which can be hit-tested.
 */
@protocol ISCIHitTestable <NSObject>

/**
 * Translates the point relative to the other `ISCIHitTestable` element.
 * @param point The point which should be transformed.
 * @param hitTestable The other `ISCIHitTestable` to use when transforming the point.
 * @return The translated `CGPoint`.
 */
- (CGPoint)translatePoint:(CGPoint)point hitTestable:(nonnull id<ISCIHitTestable>)hitTestable;

/**
 * Checks if the point is within the bound of the current `ISCIHitTestable` element.
 * @param point The point to test.
 * @return YES - if the point is within bounds.
 */
- (BOOL)isPointWithinBounds:(CGPoint)point;

/**
 * Checks if the point specified relative to another `ISCIHitTestable` element is within the bound of the current `ISCIHitTestable` element.
 * @param point The point to test.
 * @param hitTestable The other `ISCIHitTestable` to use when checking the point.
 * @return YES if the point is within bounds.
 */
- (BOOL)isPointWithinBounds:(CGPoint)point hitTestable:(nonnull id<ISCIHitTestable>)hitTestable;

/**
 * Gets the bounds of the current `ISCIHitTestable` relative to the other `ISCIHitTestable` element.
 * @param hitTestable The other `ISCIHitTestable` to use when transforming the point.
 * @return The translated `CGRect` bounds.
 */
- (CGRect)getBoundsRelativeTo:(nonnull id<ISCIHitTestable>)hitTestable;

/**
 * Gets the `View` instance associated with this `ISCIHitTestable` element.
 */
@property (nonatomic, readonly, nonnull) SCIView *view;

@end
