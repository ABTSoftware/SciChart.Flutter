//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartHeatmapColourMap.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIThemeable.h"
#import "SCIOrientation.h"
#import "SCIColorMap.h"
#import "SCIFont.h"
#import "SCIView.h"

/**
 * A Legend for the `SCIFastUniformHeatmapRenderableSeries`, which gives a visual representation of double-to-color mapping in the heatmap.
 */
@interface SCIChartHeatmapColourMap : SCIView<ISCIThemeable>

/**
 * Defines the color map for this `SCIChartHeatmapColourMap`
 */
@property (strong, nonatomic, nullable) SCIColorMap *colourMap;

/**
 * Defines the orientation of this `SCIChartHeatmapColourMap`.
 */
@property (nonatomic) SCIOrientation orientation;

/**
 * Defines the minimum value for this `SCIChartHeatmapColourMap`.
 */
@property (nonatomic) double minimum;

/**
 * Defines the maximum value for this `SCIChartHeatmapColourMap`.
 */
@property (nonatomic) double maximum;

/**
 * Fonts of labels.
 */
@property (strong, nonatomic, nonnull) SCIFont *font;

/**
 * Text colors of labels.
 */
@property (strong, nonatomic, nonnull) SCIColor *textColor;

/**
 * Defines the text format for min and max values in labels.
 */
@property (strong, nonatomic, nonnull) NSFormatter *textFormat;

@end
