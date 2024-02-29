//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAdornerProvider.h is part of SCICHART®, High Performance Scientific Charts
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

@protocol ISCIAdornerLayer;

/**
 * Defines interface to the Adorner Provider which draws adorners for the `ISCIAnnotation` instance.
 */
@protocol ISCIAdornerProvider <NSObject>

/**
 * Checks whether one of the current adorner provider resizing grip is hit at passed in point.
 * @return Returns YES if one of the resizing grips is hit, otherwise - NO.
 */
- (BOOL)isHitAt:(CGPoint)point;

#pragma mark - Updates

/**
 * Updates the adorner provider with latest values.
 */
- (void)updateAdorner;

#pragma mark - Draw Adorner

/**
 * Draws the adorner within the passed-in rectangle.
 * Called when the `SCIAdornerLayer` `-[SCIAdornerLayer drawRect:]` method is called.
 * @param rect The portion of the view’s bounds that needs to be updated.
 */
- (void)onDrawAdornerInRect:(CGRect)rect;

#pragma mark - Drag Methods

/**
 * Called when drag operation starts on `ISCIAdornerLayer`.
 * @param startPoint The x-y coordinate in pixels relative to parent `ISCIAdornerLayer`.
 * @param adornerLayer  The `ISCIAdornerLayer` instance.
 * @return True if drag operation was handled and this adorner provider needs to receive notifications about future drag operations
 */
- (BOOL)onDragStartedAt:(CGPoint)startPoint relativeTo:(nonnull id<ISCIAdornerLayer>)adornerLayer;

/**
 * Called when this adorner provider is dragged.
 * @param xDelta The horizontal offset in pixels.
 * @param yDelta   The vertical offset in pixels,
 * @return YES - if drag operation was handled and this adorner provider needs to receive notifications about future drag operations.
 */
- (BOOL)onDragByXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta;

/**
 * Called when drag operation ends.
 */
- (void)onDragEnded;

@end
