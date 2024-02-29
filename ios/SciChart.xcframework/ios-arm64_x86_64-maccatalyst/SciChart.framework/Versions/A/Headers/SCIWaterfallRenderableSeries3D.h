//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWaterfallRenderableSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseRenderableSeries3D.h"
#import "SCIWaterfallClipMode.h"
#import "SCIMeshColorPalette.h"

/**
 * Provides a series type for Waterfall chart rendering.
 */
@interface SCIWaterfallRenderableSeries3D : SCIBaseRenderableSeries3D

/**
 * Defines the stroke color of the waterfall chart slices.
 */
@property (nonatomic) unsigned int stroke;

/**
 * Defines the stroke thickness to apply to the waterfall chart slice
 */
@property (nonatomic) float strokeThickness;

/**
 * Defines the thickness of waterfall chart slices
 */
@property (nonatomic) float sliceThickness;

/**
 * Defines the color mapping for selected slices of waterfall chart.
 */
@property (strong, nonatomic, nonnull) SCIMeshColorPalette *selectedColorMapping;

/**
 * Defines the Y mapping for filling slices of a waterfall chart.
 */
@property (strong, nonatomic, nullable) SCIMeshColorPalette *yColorMapping;

/**
 * Defines the Z mapping for filling slices of a waterfall chart.
 */
@property (strong, nonatomic, nullable) SCIMeshColorPalette *zColorMapping;

/**
 * Defines the Y mapping for filling slices of a waterfall chart.
 */
@property (strong, nonatomic, nullable) SCIMeshColorPalette *yStrokeColorMapping;

/**
 * Defines the Z mapping for filling slices of a waterfall chart.
 */
@property (strong, nonatomic, nullable) SCIMeshColorPalette *zStrokeColorMapping;

/**
 * Defines how a waterfall chart renders its data.
 */
@property (nonatomic) SCIWaterfallClipMode clipMode;

/**
 * Creates a new instance of `SCIWaterfallRenderableSeries3D` class.
 */
- (nonnull instancetype)init;

@end
