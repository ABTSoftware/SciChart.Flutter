//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartHitProviderBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPieDonutRenderPassData.h"
#import "ISCIPieChartHitProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class for `ISCIPieChartHitProvider` implementations.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations. 
 */
@interface SCIPieChartHitProviderBase<T : id<ISCIPieDonutRenderPassData>> : NSObject<ISCIPieChartHitProvider>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIPieChartHitProviderBase` class.
 * @param renderPassDataType The type of associated render pass data.
 */
- (instancetype)initWithRenderPassDataType:(Class)renderPassDataType NS_DESIGNATED_INITIALIZER;

/**
 * Calculates polar radius.
 * @param x The x coordinates of point.
 * @param y The y coordinates of point.
 */
- (float)getPolarRadiusWithX:(float)x y:(float)y;

/**
 * Calculates polar angle in degrees clockwise.
 * @param x The x coordinates of point.
 * @param y The y coordinates of point.
 */
- (float)getPolarAngleInDegreesClockwiseWithX:(float)x y:(float)y;

@end

NS_ASSUME_NONNULL_END
