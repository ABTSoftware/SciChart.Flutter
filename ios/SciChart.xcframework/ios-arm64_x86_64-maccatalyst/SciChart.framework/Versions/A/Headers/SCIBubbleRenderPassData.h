//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBubbleRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzRenderPassData.h"

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIFastBubbleRenderableSeries`.
 */
@interface SCIBubbleRenderPassData : SCIXyzRenderPassData

/**
 * Defines a `Z-scaling` factor, equal to Pixels divided by `Z-Unit`.
 * @note If `autoZrange` is NO, `Z-value` is multiplied by `zScale` is bubble radius in pixels.
 */
@property (nonatomic) float zScaleFactor;

/**
 * Defines whether `Z-range` should be automatically scaled.
 * If YES - then depending on the `X, Y, Z` points in the viewport, the size of bubbles will be scaled to fit. Else, the size of bubbles will be absolute.
 */
@property (nonatomic) BOOL autoZRange;

@end
