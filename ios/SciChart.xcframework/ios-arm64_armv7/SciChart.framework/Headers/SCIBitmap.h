//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBitmap.h is part of SCICHART®, High Performance Scientific Charts
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

#import <CoreGraphics/CoreGraphics.h>
#import "SCIDisposableBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines and obj-c wrapper around `CGContextRef` bitmap context.
 */
@interface SCIBitmap : SCIDisposableBase

/**
 * Gets the underlying `CGContextRef` bitmap.
 */
@property (nonatomic, readonly) CGContextRef context;

/**
 * A pointer to the destination in memory where the bitmap data is stores.
 */
@property (nonatomic, readonly) unsigned int *data;

/**
 * Gets the `width` of the underlying `CGContextRef` bitmap.
 */
@property (nonatomic, readonly) unsigned int width;

/**
 * Gets the `height` of the underlying `CGContextRef` bitmap.
 */
@property (nonatomic, readonly) unsigned int height;

/**
 * Creates a new `SCIBitmap` instance from passed in `SCIBitmap` region.
 * @param bitmap The origin bitmap to take region from.
 * @param region The region of the bitmap, to be used as new bitmap.
 */
- (instancetype)initWithBitmap:(SCIBitmap *)bitmap region:(CGRect)region;

/**
 * Creates a new `SCIBitmap` instance.
 * @param size The size of the desired bitmap, in pixels.
 */
- (instancetype)initWithSize:(CGSize)size;

/**
 * Creates a new `SCIBitmap` instance.
 * @param data The origin bitmap to take the region from.
 * @param width The width of the required bitmap, in pixels, .
 * @param height The height of the required bitmap, in pixels, .
 */
- (instancetype)initWithData:(unsigned int *)data width:(unsigned int)width height:(unsigned int)height;

/**
 * Returns the raw value of the pixel at `[x, y]` from underlying `SCIBitmap` instance.
 * @param x The x coordinate, to get pixel at.
 * @param y The y coordinate, to get pixel at.
 * @return The raw value of the pixel at `[x, y]`.
 */
- (unsigned int)pixelAtX:(unsigned int)x y:(unsigned int)y;

@end

NS_ASSUME_NONNULL_END
