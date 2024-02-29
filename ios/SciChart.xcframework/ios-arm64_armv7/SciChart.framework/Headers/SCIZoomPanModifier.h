//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIZoomPanModifier.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIDirection2D.h"
#import "SCIClipMode.h"
#import "SCIClipModeTarget.h"

/**
 * The `SCIZoomPanModifier` provides a touch move to pan the X and Y Axes.
 * @note Add to the `SCIChartSurface` and set `isEnabled` to YES to enable this behaviour.
 */
@interface SCIZoomPanModifier : SCIGestureModifierBase

/**
 * Defines `PanGestureRecognizer` which is used to detect pan gestures.
 */
@property (weak, nonatomic, readonly, nullable) SCIPanGestureRecognizer *gestureRecognizer;

/**
 * Defines the `SCIDirection2D` which restricts zoom interactivity to.
 */
@property (nonatomic) SCIDirection2D direction;

/**
 * Defines how panning behaves when you reach the edge of the `X-Axis` extents.
 * e.g. `SCIClipMode.SCIClipMode_ClipAtExtents` prevents panning outside of the X-Axis, `SCIClipMode.SCIClipMode_None` allows panning outside.
 */
@property (nonatomic) SCIClipMode clipModeX;

/**
 * Defines how panning behaves when you reach the edge of the `Y-Axis` extents.
 * e.g. `SCIClipMode.SCIClipMode_ClipAtExtents` prevents panning outside of the Y-Axis, `SCIClipMode.SCIClipMode_None` allows panning outside.
 */
@property (nonatomic) SCIClipMode clipModeY;

/**
 * Gets or sets which target is used as limit by `clipModeX` when you reach the edge of the `X-Axis` extents.
 */
@property (nonatomic) SCIClipModeTarget clipModeTargetX;

/**
 * Gets or sets which target is used as limit by `clipModeY` when you reach the edge of the `Y-Axis` extents.
 */
@property (nonatomic) SCIClipModeTarget clipModeTargetY;

/**
 * Gets or sets whether the `SCIZoomPanModifier` should perform zoom to extents on the `Y-Axis` on the each zoom operation when panning in X-Direction only.
 * If `YES` - zoom to extents on the `Y-Axis` on the each zoom operation when panning in X-Direction only.
 * @note Use in conjunction with `direction` to achieve different zooming effects.
 */
@property (nonatomic) BOOL zoomExtentsY;

/**
 * Defines the property which determines whether this pan modifier will be inertial.
 */
@property (nonatomic) BOOL inertial;

/**
 * Creates a new instance of the `SCIZoomPanModifier` class.
 * @param numberOfTouches The default number of touches which will be used by underlying gestureRecognizer.
 */
- (nonnull instancetype)initWithDefaultNumberOfTouches:(NSUInteger)numberOfTouches NS_DESIGNATED_INITIALIZER;

@end
