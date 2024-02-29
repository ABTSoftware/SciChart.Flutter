//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIZoomExtentsModifier3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase3D.h"
#import "SCIExecuteOn.h"
#import "SCIVector3.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SCIZoomExtentsModifier3D` provides the behaviour of zoom camera to fit on mouse double click on a `3D chart`.
 */
@interface SCIZoomExtentsModifier3D : SCIGestureModifierBase3D

/**
 * Defines the reset target.
 * @note This is the `SCIVector3` in 3D world coordinates where the `ISCIChartSurface3D.camera` `ISCICameraController.target` is moved to.
 */
@property (strong, nonatomic) SCIVector3 *resetTarget;

/**
 * Defines the reset position.
 * @note This is the `SCIVector3` in 3D world coordinates where the `ISCIChartSurface3D.camera` `ISCICameraController.position` is moved to.
 */
@property (strong, nonatomic) SCIVector3 *resetPosition;

/**
 * Definies when the `SCIZoomExtentsModifier3D` should be executed.
 * @note e.g. `SCIExecuteOn.SCIExecuteOn_DoubleTap` will cause a zoom to extents on double tap on the parent `SCIChartSurface3D` instance.
 */
@property (nonatomic) SCIExecuteOn executeOn;

/**
 * When YES, attempts to `auto-fit` the camera radius to fit the scene. When NO - uses the `resetPosition` and `resetTarget` instead.
 */
@property (nonatomic) BOOL autoFitRadius;

/**
 * Defines the animation duration in milliseconds for any zoom operations
 */
@property (nonatomic) NSTimeInterval animationDuration;

@end

NS_ASSUME_NONNULL_END
