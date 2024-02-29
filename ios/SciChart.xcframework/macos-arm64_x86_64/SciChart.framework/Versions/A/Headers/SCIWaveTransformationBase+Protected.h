//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWaveTransformationBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIWaveTransformationBase.h"
#import "SCIBaseRenderPassDataTransformation+Protected.h"
#import "SCIFloatValues.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCIWaveTransformationBase`.
 */
@interface SCIWaveTransformationBase<__covariant T: SCIXSeriesRenderPassData *>()

@property (weak, nonatomic, nullable) T renderPassData;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCITranslateXyTransformationBase`.
 */
@interface SCIWaveTransformationBase<__covariant T: SCIXSeriesRenderPassData *>(Protected)

/**
 * Transforms valuesToTransform based on updated render pass data, according to current state of transformation.
 * @param valuesToTransform Values to transform.
 */
- (void)applyTransformationOnRenderPassDataChanged:(nonnull SCIFloatValues *)valuesToTransform;

/**
 * Prepares associated render pass data to transformation.
 */
- (void)prepareDataToTransformation;

/**
 * Applies transformation using SCIWaveTransformationBase `transformValues:withOriginalCoordinates:andCurrentDelta:` method. `SCIFloatValues` to be supplied from inheritors.
 * @param currentDelta The current delta value, due to which values will be transformed.
 */
- (void)applyTransformationInternalWithDelta:(float)currentDelta;

/**
 * Transforms valuesToTransform based on original coordinates and currentDelta, to achieve wave transform.
 * @param currentDelta The current delta value, due to which values will be transformed.
 * @param values Values to transform.
 * @param coordinates Original coordinates, which stored on last change of render pass data.
 */
- (void)transformValues:(nonnull SCIFloatValues *)values withOriginalCoordinates:(nonnull SCIFloatValues *)coordinates andCurrentDelta:(float)currentDelta;

@end
