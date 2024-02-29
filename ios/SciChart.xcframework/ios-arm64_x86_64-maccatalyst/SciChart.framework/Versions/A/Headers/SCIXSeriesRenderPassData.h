//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIXSeriesRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesRenderPassData.h"
#import "SCIDoubleValues.h"
#import "SCIIntegerValues.h"
#import "SCIFloatValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIRenderableSeriesBase` with `ISCIXDataSeriesValues`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIXSeriesRenderPassData : SCISeriesRenderPassData

/**
 * Provides the collection of `X-values` for the single render pass.
 */
@property (strong, nonatomic) SCIDoubleValues *xValues;

/**
 * Provides the collection of `X-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xCoords;

/**
 * Provides the collection of `indices` for the single render pass.
 */
@property (strong, nonatomic) SCIIntegerValues *indices;

@end

NS_ASSUME_NONNULL_END
