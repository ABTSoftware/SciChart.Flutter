//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICompositeTransformation.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a composite render pass data transformation provider which composes multiple transformations at the same time.
 */
@interface SCICompositeTransformation : NSObject<ISCIRenderPassDataTransformation>

/**
 * Creates a new instance of `SCICompositeTransformation` instance.
 * @param transformations The array of transformation to be used.
 */
- (instancetype)initWithTransformations:(NSArray<id<ISCIRenderPassDataTransformation>> *)transformations NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
