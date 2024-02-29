//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISolidColorBrushPalette.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines a color palette with single color which can be used with `SCSurfaceMeshRenderableSeries3D` and `SCIFreeSurfaceRenderableSeries3D` e.g. to give a height-map at runtime.
 */
@interface SCISolidColorBrushPalette : SCIBrushColorPalette

/// :nodoc:
- (instancetype)initWithBrushStyle:(SCIBrushStyle *)brushStyle NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCISolidColorBrushPalette` class.
 * @param color The color to use by palette
 */
- (instancetype)initWithColor:(unsigned int)color;

@end

NS_ASSUME_NONNULL_END
