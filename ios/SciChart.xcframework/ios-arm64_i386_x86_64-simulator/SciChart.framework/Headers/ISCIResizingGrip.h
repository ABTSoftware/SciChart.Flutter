//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIResizingGrip.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines the protocol for Resizing Grip which is used to resize `ISCIAnnotation` instance.
 */
@protocol ISCIResizingGrip <NSObject>

/**
 * Draw this resizing grip at specified point.
 * @param point The coordinates of point to draw in pixels.
 * @param context The `CGContext` to draw resizing grip on.
 */
- (void)onDrawGripAt:(CGPoint)point inCGContext:(nonnull CGContextRef)context;

/**
 * Checks whether this reising grip is hit.
 * @param hitPoint The hit test point in pixels.
 * @param drawnPoint The point where resizing grip was drawn.
 * @return YES - if hit test point is within resizing grip, otherwise NO;
 */
- (BOOL)isHitAtPoint:(CGPoint)hitPoint andDrawnPoint:(CGPoint)drawnPoint;

@end
