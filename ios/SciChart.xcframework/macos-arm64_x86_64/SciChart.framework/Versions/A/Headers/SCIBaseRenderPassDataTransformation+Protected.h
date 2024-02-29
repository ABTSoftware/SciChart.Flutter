//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseRenderPassDataTransformation+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseRenderPassDataTransformation.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCIHitProviderBase`.
 */
@interface SCIBaseRenderPassDataTransformation<__covariant T: id<ISCISeriesRenderPassData>> ()

@property (weak, nonatomic, nullable) T renderPassData;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIHitProviderBase`.
 */
@interface SCIBaseRenderPassDataTransformation<T: id<ISCISeriesRenderPassData>> (Protected)

/**
 * Applies this transformation to associated series.
 * @note This is used for animations purposes, so you need to take into account `SCIBaseRenderPassDataTransformation.currentTransformationValue` as well as `SCIBaseRenderPassDataTransformation.currentDelta` during implementing this.
 */
- (void)apply __deprecated_msg("Please use `applyTransformation` method instead");

/**
 * Applies this transformation to associated series.
 * @note This is used for animations purposes, so you need to take into account `SCIBaseRenderPassDataTransformation.currentTransformationValue` as well as `SCIBaseRenderPassDataTransformation.currentDelta` during implementing this.
 */
- (void)applyTransformation NS_SWIFT_NAME(applyTransformation());

/**
 * Discards this transformation from associated series.
 */
- (void)discardTransformation;

/**
 * Called when associated series render pass data changed during animation.
 */
- (void)onInternalRenderPassDataChanged;

/**
 * Saves original data from render pass data, which supposed to be changed during `-applyTransformation` call.
 */
- (void)saveOriginalData;

/**
 *  Called on start of animation associated with current transformation
 */
- (void)onAnimationStartInternal;

@end
