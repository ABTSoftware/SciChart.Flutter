//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIImpulseRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzRenderPassData3D.h"
#import "SCIUnsignedIntegerValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines ImpulseRenderPassData3D, the data used in a single render pass by `SCIImpulseRenderableSeries3D`
 */
@interface SCIImpulseRenderPassData3D : SCIXyzRenderPassData3D

/**
 * Provides the collection of `point` colors which is used for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIUnsignedIntegerValues *pointColors;

/**
 * Provides the collection of `column` colors which is used for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIUnsignedIntegerValues *columnColors;

/**
 * Defines the sizes of the `impulse points`.
 */
@property (strong, nonatomic, readonly) SCIFloatValues *pointSizes;

@end

NS_ASSUME_NONNULL_END
