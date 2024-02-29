//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTicks.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import "SCIDoubleValues.h"
#import "SCIIntegerValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A class which contains axis ticks.
 * @note Used internally when drawing tick marks and grid lines.
 */
@interface SCIAxisTicks : NSObject<ISCICleanable>

/**
 * Gets the `major ticks`.
 */
@property (strong, nonatomic, readonly) SCIDoubleValues *majorTicks;

/**
 * Gets the `minor ticks`.
 */
@property (strong, nonatomic, readonly) SCIDoubleValues *minorTicks;

/**
 * Gets the `major ticks culling priorities` which are used during culling of axis tick labels.
 */
@property (strong, nonatomic, readonly) SCIIntegerValues *cullingPriorities;

/**
 * Gets or sets the value indicating whether the first tick in `majorTicks` is even.
 * This value is used for drawing major axis bands
 * @return `YES` - if first tick in in `majorTicks` is even.
 */
@property (nonatomic) BOOL isFirstMajorTickEven;

/**
 * Checks whether the current `SCIAxisTicks` instance is empty.
 */
@property (nonatomic, readonly) BOOL isEmpty;

@end

NS_ASSUME_NONNULL_END
