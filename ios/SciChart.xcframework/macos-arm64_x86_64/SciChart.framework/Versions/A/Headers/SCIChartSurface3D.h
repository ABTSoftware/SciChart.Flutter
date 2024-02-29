//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartSurface3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartSurfaceBase.h"
#import "ISCIChartSurface3D.h"
#import "SCIChart3DRootSceneEntity.h"
#import "ISCICameraController.h"
#import "ISCIRenderableSeries3D.h"
#import "SCIAxisPlaneDrawLabelsMode.h"
#import "SCIAxisPlaneVisibility.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides a high performance `Metal` (or OpenGL) powered 3D chart surface.
 * Multiple `ISCIRenderableSeries3D` are drawn over an `Axis Cube`, which contains the visual representation of X,Y and Z `ISCIAxis3D` instances.
 * Each Renderable Series has a `ISCIDataSeries3D`, which provides the data-source.
 * The `SCIChartSurface3D` supports one or more `ISCIChartModifier3D` via the `ISCIChartSurface3D.chartModifiers` property.
 * These are used to affect behaviour such as zooming, panning and tooltips.
 * Finally, a `ISCICameraController` instance is applied to the `SCIChartSurface3D` to define the view into the 3D scene.
 * @see `ISCIRenderableSeries3D`.
 * @see `ISCIDataSeries3D`.
 * @see `ISCIChartModifier3D`.
 * @see `ISCIAxis3D`.
 * @see `ISCICameraController`.
 */
@interface SCIChartSurface3D : SCIChartSurfaceBase<ISCIChartSurface3D>

/**
 * Defines the `Z-Axis` used by 3D chart.
 */
@property (strong, nonatomic) id<ISCIAxis3D> xAxis;

/**
 * Defines the `Y-Axis` used by 3D chart.
 */
@property (strong, nonatomic) id<ISCIAxis3D> yAxis;

/**
 * Defines the `Z-Axis` used by 3D chart.
 */
@property (strong, nonatomic) id<ISCIAxis3D> zAxis;

/**
 * Defines the Camera used by 3D chart.
 */
@property (strong, nonatomic) id<ISCICameraController> camera;

/**
 * Defines the collection of `ISCIChartModifier3D` that this `SCIChartSurface3D` uses.
 */
@property (strong, nonatomic) SCIChartModifier3DCollection *chartModifiers;

/**
 * Defines the collection of `ISCIRenderableSeries3D` that this `SCIChartSurface3D` draws.
 */
@property (strong, nonatomic) SCIRenderableSeries3DCollection *renderableSeries;

/**
 * Gets or sets visibility of the FPS Count.
 * @note When True, the FPS Count (Refresh Rate, Hz) is shown in the bottom left corner of the chart.
 */
@property (nonatomic) BOOL isFpsCounterVisible;

/**
 * Gets or sets the visibility of the XYZ Orientation Gizmo.
 * @note When True, the XYZ Orientation Gizmo is drawn in the bottom left of the chart.
 */
@property (nonatomic) BOOL isXyzGizmoVisible;

/**
 * Defines the `SCIAxisPlaneVisibility` used to render axis cube.
 */
@property (nonatomic) SCIAxisPlaneVisibility axisPlaneVisibilityMode;

/**
 * Defines the `SCIAxisPlaneDrawLabelsMode` for the `XY` axis plane.
 */
@property (nonatomic) SCIAxisPlaneDrawLabelsMode xyAxisPlaneDrawLabelsMode;

/**
 * Defines the `SCIAxisPlaneDrawLabelsMode` for the `ZY` axis plane.
 */
@property (nonatomic) SCIAxisPlaneDrawLabelsMode zyAxisPlaneDrawLabelsMode;

/**
 * Defines the `SCIAxisPlaneDrawLabelsMode` for the `ZX` axis plane.
 */
@property (nonatomic) SCIAxisPlaneDrawLabelsMode zxAxisPlaneDrawLabelsMode;

@end

NS_ASSUME_NONNULL_END
