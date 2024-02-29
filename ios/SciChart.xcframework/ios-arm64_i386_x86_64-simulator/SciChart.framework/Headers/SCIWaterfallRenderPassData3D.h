//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWaterfallRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIYSeriesRenderPassData3D.h"
#import "SCIIntegerValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines WaterfallRenderPassData3D, the data used in a single render pass by `SCIWaterfallRenderableSeries3D`.
 */
@interface SCIWaterfallRenderPassData3D : SCIYSeriesRenderPassData3D

/**
 * Provides the collection of selected waterfall slice indees.
 */
@property (strong, nonatomic) SCIIntegerValues *selectedSlices;

/**
 * Provides the collection of selected waterfall slice points.
 */
@property (strong, nonatomic) SCIDoubleValues *slicePoints;

/**
 * Defines the  size of associated data in `X-direction` for the current render pass.
 */
@property (nonatomic) NSInteger countX;

/**
 * Defines the size of associated data in `Z-direction` for the current render pass.
 */
@property (nonatomic) NSInteger countZ;

/**
 * Defines the value which corresponds to minimum slice.
 */
@property (nonatomic) double sliceMin;

/**
 * Defines the value which corresponds to maximum slice.
 */
@property (nonatomic) double sliceMax;

@end

NS_ASSUME_NONNULL_END
