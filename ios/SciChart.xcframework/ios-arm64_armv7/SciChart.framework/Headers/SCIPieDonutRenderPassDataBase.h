//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieDonutRenderPassDataBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPieDonutRenderPassData.h"
#import "SCIPieSegmentRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines PieDonutRenderPassDataBase, the data used in a single render pass by `SCIPieDonutRenderableSeriesBase` derived types.
 */
@interface SCIPieDonutRenderPassDataBase : SCIPieDonutRenderPassData

/**
 * Gets or sets segments to draw.
 */
@property (strong, nonatomic) NSMutableArray<SCIPieSegmentRenderPassData *> *segments;

/**
 * Gets or sets center of `SCIPieDonutRenderPassDataBase`.
 */
@property (nonatomic) CGPoint center;

/**
 * Gets or sets outerRadius of `SCIPieDonutRenderPassDataBase`.
 */
@property (nonatomic) float outerRadius;

/**
 * Gets or sets startAngle of `SCIPieDonutRenderPassDataBase`.
 */
@property (nonatomic) float startAngle;

/**
 * Gets or sets degreesPerValue of `SCIPieDonutRenderPassDataBase`.
 */
@property (nonatomic) float degreesPerValue;

/**
 * Gets or sets segmentSpacing of `SCIPieDonutRenderPassDataBase`.
 */
@property (nonatomic) float segmentSpacing;

@end

NS_ASSUME_NONNULL_END
