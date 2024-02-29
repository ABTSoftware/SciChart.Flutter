//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDonutDrawingManager.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPieDonutDrawingManagerBase.h"
#import "SCIPieSegmentRenderPassData.h"

/**
 * Defines the interface with helper methods for rendering of donut renderable series.
 */
@protocol ISCIDonutDrawingManager <ISCIPieDonutDrawingManagerBase>

NS_ASSUME_NONNULL_BEGIN

/**
 * Draws specified donut segments.
 * @param segments The donut segments to draw.
 * @param selectedSegmentOffset The offset to apply for selected segments.
 */
- (void)drawDonutSegments:(NSArray<SCIPieSegmentRenderPassData *> *)segments selectedSegmentOffset:(CGFloat)selectedSegmentOffset;

@end

NS_ASSUME_NONNULL_END
