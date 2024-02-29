//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFontStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFontDescriptor.h"
#import "SCILabel.h"
#import "SCIColor.h"
#import "SCIStyle.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class for specifying of 2D font style used to draw text on the `ISCIRenderSurface`.
 */
@interface SCIFontStyle : SCIStyle

/**
 * Defines the default font style.
 */
@property (class, nonatomic, readonly) SCIFontStyle *DEFAULT;

/**
 * Defines the default font style.
 */
@property (class, nonatomic, readonly) SCIFontStyle *defaultFontStyle __deprecated_msg("SCIFontStyle.defaultFontStyle is deprecated. Please use SCIFontStyle.DEFAULT instead");

/**
 * Defines the descriptor for the font.
 */
@property (nonatomic, readonly) SCIFontDescriptor *fontDescriptor;

/**
 * Gets text color as hex color code in the following color format `0xAARRGGBB`.
 */
@property (nonatomic, readonly) unsigned int colorCode;

/**
 * Gets text color as UIColor.
 */
@property (nonatomic, readonly) SCIColor *color;

/**
 * Creates an instance of `SCIFontStyle` with specified arguments.
 * @param textColor The text color.
 */
- (instancetype)initWithTextColor:(SCIColor *)textColor;

/**
 * Creates an instance of `SCIFontStyle` with specified arguments.
 * @param textColor The text color.
 */
- (instancetype)initWithTextColorCode:(unsigned int)textColor;

/**
 * Creates an instance of `SCIFontStyle` with specified arguments.
 * @param fontSize The value which determines the font size.
 * @param textColor The text color code.
 */
- (instancetype)initWithFontSize:(float)fontSize andTextColor:(SCIColor *)textColor;

/**
 * Creates an instance of `SCIFontStyle` with specified arguments.
 * @param fontSize The value which determines the font size.
 * @param textColor The text color.
 */
- (instancetype)initWithFontSize:(float)fontSize andTextColorCode:(unsigned int)textColor;

/**
 * Creates an instance of `SCIFontStyle` with specified arguments.
 * @param fontDescriptor The font descriptor value.
 * @param textColor The text color.
 */
- (instancetype)initWithFontDescriptor:(SCIFontDescriptor *)fontDescriptor andTextColor:(SCIColor *)textColor;

/**
 * Creates an instance of `SCIFontStyle` with specified arguments.
 * @param fontDescriptor The font descriptor value.
 * @param textColor The text color code.
 */
- (instancetype)initWithFontDescriptor:(SCIFontDescriptor *)fontDescriptor andTextColorCode:(unsigned int)textColor;

#pragma mark - Apply this style on

/**
 * Initialises a Label with this `SCIFontStyle` values.
 * @param label The Label to init.
 */
- (void)initUILabel:(SCILabel *)label;

@end

NS_ASSUME_NONNULL_END
