//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifier3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipModifierBase3D.h"
#import "SCIProjectionMode.h"
#import "SCISolidPenStyle.h"
#import "SCICrossDrawableBehavior.h"
#import "SCICrosshairMode.h"
#import "SCILineProjectionMode.h"
#import "SCIPlacement.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCITooltipModifier3D` provides a touch-over tooltip to a chart, outputting a single `SCISeriesInfo3D` object to bind to which updates as the touch moves over `data-points`.
 */
@interface SCITooltipModifier3D : SCITooltipModifierBase3D

/**
 * Defines the offset on which tooltip and the marker will be shifted in x and y directions.
 */
@property (nonatomic) CGFloat offset;

/**
 * Gets the `CGPoint` value which will replace `offset` property and will be used to shift tooltip and the marker in custom x and y directions.
 */
@property (nonatomic) CGPoint customPointOffset;

/**
 * Gets the `SCIPlacement` mode, to determine where to place tooltip and the marker relatively to the Hit-test point.
 */
@property (nonatomic) SCIPlacement markerPlacement;

/**
 * Defines the `SCICrosshairMode` type of series on which interaction is performed.
 */
@property (nonatomic) SCICrosshairMode crosshairMode;

/**
 * Defines the projection mode used to draw Crosshairs.
 */
@property (nonatomic) SCIProjectionMode projectionMode;

/**
 * Defines the style to draw stroke of Crosshairs.
 */
@property (strong, nonatomic) SCISolidPenStyle *crosshairStrokeStyle;

/**
 * Defines the projection mode used to draw Crosshair lines.
 */
@property (nonatomic) SCILineProjectionMode lineProjectionMode;

/**
 * Defines whether modifier should show axis label.
 */
@property (nonatomic) BOOL showAxisLabels;

/**
 * Defines the color to draw Crosshair planes with.
 */
@property (strong, nonatomic) SCIColor *crosshairPlanesFill;

/**
 * Gets the `SCIPenStyle` instance which will be used by `SCICrossDrawableBehavior` to tooltip marker.
 */
@property (strong, nonatomic) SCIPenStyle *tooltipPointMarkerPaintStyle;

@end

NS_ASSUME_NONNULL_END
