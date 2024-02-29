//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCILayoutManager.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIAxis.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines interface to a Layout Manager, which may be used to layout `SCIChartSurface` parts.
 */
@protocol ISCILayoutManager <ISCIAttachable>

/**
 * Attaches axis to parent `SCIChartSurface` via current LayoutManager.
 * @param axis The `ISCIAxis` to attach.
 * @param isXAxis The value indicating whether the axis is XAxis or YAxis.
 */
- (void)attachAxis:(id<ISCIAxis>)axis isXAxis:(BOOL)isXAxis;

/**
 * Detaches axis from parent `SCIChartSurface` via current LayoutManager.
 * @param axis The `ISCIAxis` to detach.
 */
- (void)detachAxis:(id<ISCIAxis>)axis;

/**
 * Called when axis is about to change its placement.
 * @param axis axis which changes its position.
 * @param oldAxisAlignment old axis alignment value.
 * @param oldIsCenterAxis old isCenterAxis value.
 * @param newAxisAlignment new axis alignment value.
 * @param newIsCenterAxis new isCenterAxis value.
 */
- (void)onAxisPlacementChanged:(id<ISCIAxis>)axis oldAxisAlignment:(SCIAxisAlignment)oldAxisAlignment oldIsCenterAxis:(BOOL)oldIsCenterAxis newAxisAlignment:(SCIAxisAlignment)newAxisAlignment newIsCenterAxis:(BOOL)newIsCenterAxis;

/**
 * Called during render pass of chart before rendering and should update positions of chart parts.
 * @param size available viewport size.
 * @return The measured size of viewport.
 */
- (CGSize)onLayoutChartWithAvailableSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
