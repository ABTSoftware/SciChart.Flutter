//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieDonutRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIDisposable.h"
#import "ISCIReadWriteLock.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a `SCIPieDonutRenderPassData`, the data used in a single render pass by `SCIPieDonutRenderableSeriesBase` derived types.
 */
@protocol ISCIPieDonutRenderPassData <ISCICleanable, ISCIDisposable>

/**
 * Gets a value, indicating whether current render pass data is valid.
 */
@property (nonatomic, readonly) BOOL isValid;

/**
 * Gets or sets the amount of segments in this render pass data.
 */
@property (nonatomic) NSUInteger segmentsCount;

/**
 * Gets a synchronization object used to lock this render pass data.
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> lock;

/**
 * Begins update of this render pass data.
 */
- (void)onBeginDataUpdate;

/**
 * Ends update of this render pass data.
 */
- (void)onEndDataUpdate;

@end

NS_ASSUME_NONNULL_END
