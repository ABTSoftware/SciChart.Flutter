//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIViewportManagerBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisCore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a `ViewportManager`, which may be used to intercept the `X-Axis` and `Y-Axis` ranging during render and invalidate the parent surface.
 */
@protocol ISCIViewportManagerBase <ISCIAttachable>

/**
 * Called when the VisibleRange changes for an axis.
 * @note Override in derived types to set a custom value.
 * @param axis THe axis instance.
 * @param oldRange The old VisibleRange.
 * @param newRange The new VisibleRange.
 * @param isAnimating Flag indicating whether the VisibleRange is animating.
 */
- (void)onVisibleRangeChanged:(id<ISCIAxisCore>)axis oldRange:(id<ISCIRange>)oldRange newRange:(id<ISCIRange>)newRange isAnimating:(BOOL)isAnimating;

/**
 * Called during render to update `XAxis` `ISCIAxisCore.visibleRange`.
 * @note Override in derived types to set a custom value.
 * @param xAxis The XAxis to update
 */
- (void)updateXAxis:(id<ISCIAxisCore>)xAxis;

/**
 * Called during render to update `YAxis` `ISCIAxisCore.visibleRange`.
 * @note Override in derived types to set a custom value.
 * @param yAxis The YAxis to update
 */
- (void)updateYAxis:(id<ISCIAxisCore>)yAxis;

/**
 * Called during render to perform autoranging.
 * @note Override in derived types to set a custom value.
 * @param axis The `ISCIAxisCore` instance to perform autorange on.
 */
- (void)tryPerformAutoRange:(id<ISCIAxisCore>)axis;

@end

NS_ASSUME_NONNULL_END
