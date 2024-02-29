//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISplineXyTranslateXTransformation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITranslateXTransformation.h"
#import "SCISplineXyRenderPassData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides class, which used to translate transform series with `SCISplineXyRenderPassData` and it's inheritors in `X-direction`.
 * @note `T` is the type of associated  `ISCISeriesRenderPassData`.
 */
@interface SCISplineXyTranslateXTransformation<__covariant T: SCISplineXyRenderPassData *> : SCITranslateXTransformation<T>

/**
 * Create new instance of `SCITranslateXTransformation` class.
 * @param rpdType Type of associated render pass data.
 * @param offset  The offset value in pixels.
 */
- (instancetype)initWithRenderPassDataType:(Class)rpdType andOffset:(float)offset NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
