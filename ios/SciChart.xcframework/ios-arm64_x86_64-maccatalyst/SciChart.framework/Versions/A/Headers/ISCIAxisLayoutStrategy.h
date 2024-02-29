//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisLayoutStrategy.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxis.h"
#import "SCIChartLayoutState.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines interface for layout strategy which determines how axes should be placed in `SCIChartSurface`.
 */
@protocol ISCIAxisLayoutStrategy <NSObject>

/**
 * Adds axis into this `ISCIAxisLayoutStrategy` instance.
 * @param axis The axis to add.
 */
- (void)addAxis:(id<ISCIAxis>)axis;

/**
 * Removes axis from this ISCIAxisLayoutStrategy` instance.
 * @param axis The axis to remove.
 */
- (void)removeAxis:(id<ISCIAxis>)axis;

/**
 * Measures required amount of space to place axes which are currently attached to this `ISCIAxisLayoutStrategy` instance.
 * @param width The available width in pixels.
 * @param height The available height in pixels.
 * @param chartLayoutState The `SCIChartLayoutState` state for this layout pass which strategy should modify to set desired size.
 */
- (void)measureAxesWithAvailableWidth:(CGFloat)width height:(CGFloat)height andChartLayoutState:(SCIChartLayoutState *)chartLayoutState;

/**
 * Perform layout on axes which use this layout strategy.
 * @param left left position of area relative to parent `SCIChartSurface`.
 * @param top top position of area relative to parent `SCIChartSurface`.
 * @param right right position of area relative to parent `SCIChartSurface`.
 * @param bottom bottom position of area relative to parent `SCIChartSurface`.
 */
- (void)layoutWithLeft:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom;

@end

NS_ASSUME_NONNULL_END
