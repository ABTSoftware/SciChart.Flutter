//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCINearestPointProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "SCIHitTestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface with method for search of nearest point.
 * @see `-[ISCIRenderableSeries hitTest:at:]`.
 * @see `-[ISCIRenderableSeries hitTest:at:withHitTestRadius:]`.
 * @see `-[ISCIRenderableSeries verticalSliceHitTest:at:]`.
 */
@protocol ISCINearestPointProvider <ISCIAttachable>

/**
 * Performs search of nearest point in 2D.
 * @param hitTestResult The `hit-test` info to update.
 * @param x The `x coordinate` of `hit-test` in pixels.
 * @param y The `y coordinate` of `hit-test` in pixels.
 * @param hitTestRadius The `hit-test` radius in pixels.
 */
- (void)setNearestPoint2D:(SCIHitTestInfo *)hitTestResult x:(float)x y:(float)y hitTestRadius:(float)hitTestRadius;

/**
 * Performs search of nearest point in x direction only.
 * @param hitTestResult The hit test info to update.
 * @param x The `x coordinate` of `hit-test` in pixels.
 * @param y The `y coordinate` of `hit-test` in pixel.
 */
- (void)setNearestHorizontalPointResult:(SCIHitTestInfo *)hitTestResult x:(float)x y:(float)y;

@end

NS_ASSUME_NONNULL_END
