//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITexturePenStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPenStyle.h"
#import "SCITextureBrushStyle.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a style class for textured lines which is used to draw 2D lines on the `ISCIRenderSurface`.
 */
@interface SCITexturePenStyle : SCIPenStyle

/**
 * Get's the underlying `SCITextureBrushStyle` which is used in this PenStyle instance.
 */
@property (strong, nonatomic, readonly) SCITextureBrushStyle *textureBrushStyle;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/// :nodoc:
- (instancetype)initWithThickness:(float)thickness antiAliasing:(BOOL)antiAliasing strokeDashArray:(nullable NSArray<NSNumber *> *)strokeDashArray NS_UNAVAILABLE;

/**
 * Creates a new `SCITexturePenStyle` instance.
 * @param textureBrushStyle The texture style.
 * @param antiAliasing The value indicating whether the pen should use antialiasing or no.
 * @param thickness The stroke thickness in pixels.
 * @param strokeDashArray The stroke dash pattern.
 */
- (instancetype)initWithGradientStyle:(SCITextureBrushStyle *)textureBrushStyle antiAliasing:(BOOL)antiAliasing thickness:(float)thickness strokeDashArray:(nullable NSArray<NSNumber *> *)strokeDashArray __deprecated_msg("Please use `initWithTextureBrushStyle:thickness:strokeDashArray:antiAliasing:` initializer instead");

/**
 * Creates a new SCITexturePenStyle` instance.
 * @param textureBrushStyle The texture style.
 * @param thickness The stroke thickness in pixels.
 * @param strokeDashArray The stroke dash pattern.
 * @param antiAliasing The value indicating whether the pen should use antialiasing or no.
 */
- (instancetype)initWithTextureBrushStyle:(SCITextureBrushStyle *)textureBrushStyle thickness:(float)thickness  strokeDashArray:(nullable NSArray<NSNumber *> *)strokeDashArray antiAliasing:(BOOL)antiAliasing NS_REFINED_FOR_SWIFT NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
