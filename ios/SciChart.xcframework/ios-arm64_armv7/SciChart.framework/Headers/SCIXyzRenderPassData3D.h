//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXyzRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines `SCIXyzRenderPassData3D`, the data used in a single render pass by `ISCIRenderableSeries3D` which has X, Y and Z data.
 */
@interface SCIXyzRenderPassData3D : SCIYSeriesRenderPassData3D

/**
 * Provides the collection of `X-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *xValues;

/**
 * Provides the collection of `Y-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *zValues;

/**
 * Provides the collection of `X-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xCoords;

/**
 * Provides the collection of `Y-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *zCoords;

@end

NS_ASSUME_NONNULL_END
