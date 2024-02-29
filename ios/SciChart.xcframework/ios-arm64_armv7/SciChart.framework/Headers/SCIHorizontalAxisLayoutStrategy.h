//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIHorizontalAxisLayoutStrategy.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisLayoutStrategyBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Base layout strategy class for horizontal layout of axes.
 */
@interface SCIHorizontalAxisLayoutStrategy : SCIAxisLayoutStrategyBase

/**
 * Helper method which measures required size of axis for this horizontal layout strategy.
 * @param axisLayoutState The layout state of `ISCIAxis`.
 * @return The desired size in pixels.
 */
+ (CGFloat)getRequiredAxisSizeFrom:(SCIAxisLayoutState *)axisLayoutState;

/**
 * Helper method for layout axes horizontally from top to bottom.
 * @param axes The axes to perform layout on.
 * @param left The left bounds for this layout strategy.
 * @param top The top bounds for this layout strategy.
 * @param right The right bounds for this layout strategy.
 */
+ (void)layoutAxesFromTopToBottom:(NSArray<id<ISCIAxis>> *)axes withLeft:(CGFloat)left top:(CGFloat)top right:(CGFloat)right;

/**
 * Helper method for layout axes horizontally from bottom to top.
 * @param axes The axes to perform layout on.
 * @param left The left bounds for this layout strategy.
 * @param bottom The bottom bounds for this layout strategy.
 * @param right The right bounds for this layout strategy.
 */
+ (void)layoutAxesFromBottomToTop:(NSArray<id<ISCIAxis>> *)axes withLeft:(CGFloat)left bottom:(CGFloat)bottom right:(CGFloat)right;

@end

NS_ASSUME_NONNULL_END
