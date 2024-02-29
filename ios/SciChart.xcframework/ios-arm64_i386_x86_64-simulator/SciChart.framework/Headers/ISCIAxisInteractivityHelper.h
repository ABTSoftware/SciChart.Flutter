//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisInteractivityHelper.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIClipMode.h"
#import "ISCIRange.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a set of operations which allows to interact with axis that owns current instance of `ISCIAxisInteractivityHelper`.
 */
@protocol ISCIAxisInteractivityHelper <NSObject>

/**
 * Calculates and returns a Zoomed Range on current `ISCIAxis`,
 * using `fromCoord` as a coordinate of new range start and `toCoord` as a coordinate of new range end.
 * @param range `ISCIRange` instance to zoom.
 * @param fromCoord The coordinates of new range start in pixels.
 * @param toCoord The coordinates of new range end in pixels.
 */
- (void)zoom:(id<ISCIRange>)range from:(CGFloat)fromCoord to:(CGFloat)toCoord;

/**
 * Calculates and returns a Zoomed Range on current `ISCIAxis`,
 * using `minFraction` as multiplier of range start and `maxFraction` as multiplier of range end.
 * @param range `ISCIRange` instance to zoom.
 * @param minFraction The multiplier of range start.
 * @param maxFraction The multiplier of range end.
 */
- (void)zoom:(id<ISCIRange>)range byMin:(CGFloat)minFraction max:(CGFloat)maxFraction;

/**
 * From the starting `ISCIRange`, scrolls to a new range by the the specified number of pixels in Min direction.
 * @param range `ISCIRange` instance to zoom.
 * @param pixels The amount of pixels to scroll.
 */
- (void)scrollInMinDirection:(id<ISCIRange>)range byPixels:(CGFloat)pixels;

/**
 * From the starting `ISCIRange`, scrolls to a new range by the the specified number of pixels in Max direction.
 * @param range `ISCIRange` instance to zoom.
 * @param pixels The amount of pixels to scroll.
 */
- (void)scrollInMaxDirection:(id<ISCIRange>)range byPixels:(CGFloat)pixels;

/**
 * From the starting `ISCIRange`, scrolls to a new range by the the specified number of pixels.
 * @param range `ISCIRange` instance to zoom.
 * @param pixels The amount of pixels to scroll.
 */
- (void)scroll:(id<ISCIRange>)range byPixels:(CGFloat)pixels;

/**
 * Performs clipping of passed `range` using `clipMode`.
 * @param range `ISCIRange` instance to zoom.
 * @param maximumRange `ISCIRange` instance to zoom.
 * @param clipMode The `SCIClipMode` value.
 */
- (void)clipRange:(id<ISCIRange>)range toMaximum:(id<ISCIRange>)maximumRange withClipMode:(SCIClipMode)clipMode;

@end

NS_ASSUME_NONNULL_END
