//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGradientColorPalette.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBrushColorPalette.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a linear gradient color palette which can be used with `SCISurfaceMeshRenderableSeries3D` and `SCIFreeSurfaceRenderableSeries3D` e.g. to give a height-map at runtime.
 */
@interface SCIGradientColorPalette : SCIBrushColorPalette

/// :nodoc:
- (instancetype)initWithBrushStyle:(SCIBrushStyle *)brushStyle NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIGradientColorPalette` class.
 * @param colors The array with gradient colors.
 * @param stops The array with gradient stops.
 */
- (instancetype)initWithColors:(const unsigned int *)colors stops:(const float *)stops count:(NSInteger)count NS_REFINED_FOR_SWIFT;

/**
 * Creates a new instance of `SCIGradientColorPalette` class.
 * @param colors The array with gradient colors.
 * @param stops The array with gradient stops.
 * @param isStepped The value indicating whether the palette is stepped (true), or linear interpolated (false).
 */
- (instancetype)initWithColors:(const unsigned int *)colors stops:(const float *)stops count:(NSInteger)count isStepped:(BOOL)isStepped NS_REFINED_FOR_SWIFT;

@end

NS_ASSUME_NONNULL_END
