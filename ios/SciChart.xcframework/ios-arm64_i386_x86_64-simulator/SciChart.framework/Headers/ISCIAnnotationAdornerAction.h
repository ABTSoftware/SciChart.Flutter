//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAnnotationAdornerAction.h is part of SCICHART®, High Performance Scientific Charts
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
#import <CoreGraphics/CoreGraphics.h>

/**
 * Defines the interface for adorner action which is used during interfaction with `ISCIAnnotation`.
 */
@protocol ISCIAnnotationAdornerAction <NSObject>

/**
 * Called when adorner drag starts.
 * @param startPoint The `x-y coordinate` in pixels relative to parent `ISCIAdornerLayer`.
 */
- (void)onAdornerDragStartedAt:(CGPoint)startPoint;

/**
 * Called when adorner is dragged.
 * @param xDelta The horizontal offset in pixels.
 * @param yDelta The vertical offset in pixels.
 */
- (void)onAdornerDragByXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta;

/**
 * Called when adorner drag ends.
 */
- (void)onAdornerDragEnded;

@end
