//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIScaleTransformationBase.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIXSeriesRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Base implementation for scale render pass data transformations within SciChart.
 * @note `T` is the type of associated  `ISCISeriesRenderPassData`.
 * @note This base class and inheritors are used for animations purposes. You can use it to just transform render pass data, it's not recommended though.
 * @see `SCIScaleXyTransformation`.
 * @see `SCIScaleXyyTransformation`.
 * @see `SCIScaleXyzTransformation`.
 * @see `SCIScaleHlTransformation`.
 * @see `SCIScaleOhlcTransformation`.
 * @see `SCIScaleStackedXyTransformation`.
 */
@interface SCIScaleTransformationBase<__covariant T: SCIXSeriesRenderPassData *> : SCIBaseRenderPassDataTransformation<T>

/**
 * Defines the value which determines the zero line in `Y-direction`, from which scaling will be performed.
 */
@property (nonatomic, readonly) float zeroLineCoordinate;

/**
 * Create new instance of `SCIScaleTransformationBase` class.
 * @param rpdType Type of associated render pass data.
 * @param zeroLine Data value which determines the zero line in `Y-direction`, from which scaling will be performed.
 */
- (instancetype)initWithRenderPassDataType:(Class)rpdType andZeroLine:(double)zeroLine NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
