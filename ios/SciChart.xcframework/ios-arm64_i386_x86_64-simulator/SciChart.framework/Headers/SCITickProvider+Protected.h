//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITickProvider+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisProviderBase+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCITickProvider`.
 */
@interface SCITickProvider (Protected)

/**
 * Returns whether tick provider should be updated.
 * @return If YES - tick provider should be updated, otherwise it should be cleared.
 */
@property (nonatomic) BOOL shouldUpdateTicks;

/**
 * Updates tick provider.
 */
- (void)updateInternal;

/**
 * Updates major and minor tick values.
 * @param minorTicks The minor ticks to update.
 * @param majorTicks The major ticks to update.
 */
- (void)updateMinorTicks:(SCIDoubleValues *)minorTicks andMajorTicks:(SCIDoubleValues *)majorTicks NS_SWIFT_NAME(updateTicks(minorTicks:majorTicks:));

/**
 * Updates major tick culling priorities which are used during culling of axis tick labels.
 * @param cullingPriorities The culling priorities to update.
 * @param majorTicks The major ticks.
 */
- (void)updateCullingPriorities:(SCIIntegerValues *)cullingPriorities withMajorTicks:(SCIDoubleValues *)majorTicks;

/**
 * Gets the value indicating whether the first major tick is even.
 * @param majorTicks The major ticks.
 * @return YES - if first major tick is even.
 */
- (BOOL)isFirstMajorTickEven:(SCIDoubleValues *)majorTicks;

@end

NS_ASSUME_NONNULL_END
