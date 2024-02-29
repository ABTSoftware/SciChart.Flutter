//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseRenderPassDataTransformation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderPassDataTransformation.h"
#import "ISCISeriesRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Base implementation for all render pass data transformations within SciChart.
 * @note `T` is the type of associated  `ISCISeriesRenderPassData`.
 * @note This base class and inheritors are used for animations purposes.
 * You can use it to just transform render pass data, it's not recommended though.
 * @see `SCIScaleTransformationBase`.
 * @see `SCISweepXyTransformation`.
 * @see `SCITranslateXTransformation`.
 * @see `SCITranslateXyTransformationBase`.
 * @see `SCIWaveTransformationBase`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIBaseRenderPassDataTransformation<__covariant T: id<ISCISeriesRenderPassData>> : NSObject<ISCIRenderPassDataTransformation>

/**
 * Get's current delta value, which is the difference between currentProgress and previousProgress.
 * @note previousProgress is updating in this method only. So right after getting delta, previous delta is replaced by current.
 */
@property (nonatomic, readonly) float currentDelta;

/**
 * Get's current value, which is used to transform render pass data.
 * @note named like so because of `Xamarin.Android` binding generator issues.
 */
@property (nonatomic, readonly) float currentTransformationValue;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Create new instance of `SCIBaseRenderPassDataTransformation` class.
 * @param rpdType Type of associated render pass data.
 */
- (instancetype)initWithRenderPassDataType:(Class)rpdType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
