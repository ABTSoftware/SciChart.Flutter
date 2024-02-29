//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieDonutDrawingManagerBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPieDonutRenderPassData.h"
#import "SCIPieSegmentRenderPassData.h"
#import "ISCIRenderContext2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface with helper methods for rendering of pie and donut renderable series.
 */
@protocol ISCIPieDonutDrawingManagerBase

/**
 * Begins drawing with this drawing manager instance
 * @param context The `CGContext` to draw on.
 * @param currentPieRenderPassData The current render pass data.
 */
- (void)onBeginDrawingOnCGContext:(CGContextRef)context currentPieRenderPassData:(id<ISCIPieDonutRenderPassData>)currentPieRenderPassData;

/**
 * Draws specified pie segments.
 * @param segments The pie segments to draw.
 * @param center The coordinate of center of chart.
 * @param outerRadius The outer radius to use during drawing which tells how far from center to draw labels.
 * @param selectedSegmentOffset The offset to apply for selected segments.
 */
- (void)drawLabelsWithSegments:(NSArray<SCIPieSegmentRenderPassData *> *)segments center:(CGPoint)center outerRadius:(float)outerRadius selectedSegmentOffset:(float)selectedSegmentOffset;

/**
 * Ends drawing with this drawing manager instance.
 */
- (void)onEndDrawing;

@end

NS_ASSUME_NONNULL_END
