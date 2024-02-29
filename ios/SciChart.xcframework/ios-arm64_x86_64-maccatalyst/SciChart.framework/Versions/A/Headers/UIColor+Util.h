//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// UIColor+Util.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIColor.h"

/**
 * Helper category with some color constants and helper methods to work with `Color`.
 */
@interface SCIColor (Util)

/**
 * Get hex color code from `Color`. Color code bytes order is `0xAABBGGRR`.
 */
- (unsigned int)colorABGRCode;

/**
 * Get hex color code from `Color`. Color code bytes order is `0xAARRGGBB`.
 */
- (unsigned int)colorARGBCode;

/**
 * Create `Color` from hex color code. Color code bytes order is `0xAABBGGRR`.
 */
+ (nonnull SCIColor *)fromABGRColorCode:(unsigned int)color;

/**
 * Create `Color` from hex color code. Color code bytes order is `0xAARRGGBB`.
 */
+ (nonnull SCIColor *)fromARGBColorCode:(unsigned int)color;

/**
 * Create a new `Color` from red, green, blue and alpha channels.
 */
+ (nonnull SCIColor *)sci_colorWithRed:(const unsigned int)red green:(const unsigned int)green blue:(const unsigned int)blue alpha:(const unsigned int)alpha NS_SWIFT_NAME(colorWith(red:green:blue:alpha:));

/**
 * Create a new `Color` from red, green, blue and alpha channels.
 */
+ (nonnull SCIColor *)colorWithR:(const unsigned int)red G:(const unsigned int)green B:(const unsigned int)blue A:(const unsigned int)alpha __deprecated_msg("SCIColor.colorWithR:G:B:A is deprecated. Please use SCIColor.sci_colorWithRed:green:blue:alpha instead");

/**
 * Create a new `Color` in raw `unsigned int` representation from red, green, blue and alpha channels.
 */
+ (const unsigned int)sci_colorCodeWithRed:(const unsigned int)red green:(const unsigned int)green blue:(const unsigned int)blue alpha:(const unsigned int)alpha NS_SWIFT_NAME(colorCodeWithRed(red:green:blue:alpha:));

/**
 * Create a new `Color` in raw `unsigned int` representation from red, green, blue and alpha channels.
 */
+ (const unsigned int)colorCodeWithR:(const unsigned int)red G:(const unsigned int)green B:(const unsigned int)blue A:(const unsigned int)alpha __deprecated_msg("SCIColor.colorCodeWithR:G:B:A is deprecated. Please use SCIColor.sci_colorCodeWithRed:green:blue:alpha instead");

/**
 * Applies specified opacity value to provided color.
 * @param color The input color.
 * @param opacity The opacity value.
 * @return The output color.
 */
+ (unsigned int)argb:(unsigned int)color withOpacity:(float)opacity;

/**
 * Swap bytes from `ARGB` into `ABGR`.
 */
+ (unsigned int)swapBytesFromARGBIntoABGR:(unsigned int)argb;

/**
 * Gets alpha value from color.
 * @param color The color value.
 * @return The alpha value.
 */
+ (unsigned char)alpha:(unsigned int)color;

/**
 * Gets red value from color.
 * @param color The color value.
 * @return The red value.
 */
+ (unsigned char)red:(unsigned int)color;

/**
 * Gets green value from color.
 * @param color The color value.
 * @return The green value.
 */
+ (unsigned char)green:(unsigned int)color;

/**
 * Gets blue value from color.
 * @param color The color value.
 * @return The blue value.
 */
+ (unsigned char)blue:(unsigned int)color;

/**
 * Gets the inverted color for provided color.
 * @param color The input color.
 * @return The inverted color.
 */
+ (unsigned int)getInvertedColor:(unsigned int)color;

/**
 * Check is the passed in `color` is transparent.
 * @param color The color value.
 * @return YES if the color is transparent, otherwise - NO.
 */
+ (BOOL)isTransparent:(unsigned int)color;

@end
