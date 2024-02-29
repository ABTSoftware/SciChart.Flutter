//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRubberBandXyZoomModifier.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCIRubberBandXyZoomModifier` provides a touch move to zoom into a rectangular region, or horizontal section of the chart.
 */
@interface SCIRubberBandXyZoomModifier : SCIGestureModifierBase

/**
 * Defines `UIPanGestureRecognizer` which is used to detect pan gestures.
 */
@property (weak, nonatomic, readonly, nullable) SCIPanGestureRecognizer *gestureRecognizer;

/**
 * Defines whether zoom operations should be animated.
 */
@property (nonatomic) BOOL isAnimated;

/**
 * Defines whether the RubberBand should zoom the X-Axis only.
 * If YES - then the effect will be a horizontal section instead of a rectangle drawn under the touch move gesture.
 */
@property (nonatomic) BOOL isXAxisOnly;

/**
 * Defines whether the RubberBand should perform zoom to extents on the `Y-Axis` on the each zoom operation.
 * If YES - zooms to extents on the `Y-Axis` on each zoom operation.
 * @note Use in conjunction with `SCIRubberBandXyZoomModifier.isXAxisOnly` to achieve different zooming effects.
 */
@property (nonatomic) BOOL zoomExtentsY;

/**
 * Defines the drag sensitivity - rectangles dragged smaller than this size in the diagonal will be ignored when zooming.
 * @note Default is 10 pixels.
 */
@property (nonatomic) double minDragSensitivity;

/**
 * Defines the `SCIPenStyle` of the reticule drawn on the screen as the user zooms.
 */
@property (strong, nonatomic) SCIPenStyle *rubberBandStrokeStyle;

/**
 * Defines the `SCIBrushStyle` of the reticule drawn on the screen as the user zooms.
 */
@property (strong, nonatomic) SCIBrushStyle *rubberBandFillStyle;

@end

NS_ASSUME_NONNULL_END
