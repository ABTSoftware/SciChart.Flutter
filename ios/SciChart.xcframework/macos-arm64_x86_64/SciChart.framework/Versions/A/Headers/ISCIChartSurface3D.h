//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartSurface3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICameraController.h"
#import "ISCIChartController3D.h"
#import "ISCIRootSceneEntity.h"
#import "SCIVector3.h"
#import "ISCIChartSurfaceBase.h"
#import "ISCIRenderableSeries3D.h"
#import "SCIRenderableSeries3DCollection.h"
#import "ISCIViewportManager3D.h"
#import "ISCIViewport3D.h"
#import "ISCIRenderSurface3D.h"
#import "SCIChartModifier3DCollection.h"
#import "ISCIAxis3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a `SCIChartSurface3D` a high performance `Metal` (or OpenGL) powered 3D chart surface.
 * Multiple `ISCIRenderableSeries3D` are drawn over an `Axis Cube`, which contains the visual representation of X,Y and Z `ISCIAxis3D` instances.
 * Each Renderable Series has a `ISCIDataSeries3D`, which provides the data-source.
 * The `SCIChartSurface3D` supports one or more `ISCIChartModifier3D` via the `ISCIChartSurface3D.chartModifiers` property.
 * These are used to affect behaviour such as zooming, panning and tooltips.
 * Finally, a `ISCICameraController` instance is applied to the `SCIChartSurface3D` to define the view into the 3D scene.
 * @see `SCIChartSurface3D`.
 * @see `ISCIRenderableSeries3D`.
 * @see `ISCIDataSeries3D`.
 * @see `ISCIChartModifier3D`.
 * @see `ISCIAxis3D`.
 * @see `ISCICameraController`.
 */
@protocol ISCIChartSurface3D <ISCIChartSurfaceBase, ISCIChartController3D>

/**
 * Gets the `X-Axis` used by 3D chart.
 */
@property (nonatomic, readonly) id<ISCIAxis3D> xAxis;

/**
 * Gets the `Y-Axis` used by 3D chart.
 */
@property (nonatomic, readonly) id<ISCIAxis3D> yAxis;

/**
 * Gets the `Z-Axis` used by 3D chart.
 */
@property (nonatomic, readonly) id<ISCIAxis3D> zAxis;

/**
 * Gets the `ISCIViewport3D` which hosts the 3D Scene.
 * @note This may be nil if the chart has not yet loaded or initialized.
 */
@property (nonatomic, readonly) id<ISCIViewport3D> viewport;

/**
 * Gets the ViewportManager instance on the chart, which handles behavior of the viewport on render.
 */
@property (nonatomic, readonly) id<ISCIViewportManager3D> viewportManager;

/**
 * Gets the Root Scene Entity which exists in the Viewport.
 */
@property (nonatomic, readonly) id<ISCIRootSceneEntity> rootSceneEntity;

/**
 * Gets the Camera used by 3D chart.
 */
@property (nonatomic, readonly) id<ISCICameraController> camera;

/**
 * Gets the World Dimensions as `SCIVector3`.
 */
@property (nonatomic, readonly) SCIVector3 *worldDimensions;

/**
 * Gets the collection of `ISCIChartModifier3D` that this `SCIChartSurface3D` uses.
 */
@property (nonatomic, readonly) SCIChartModifier3DCollection *chartModifiers;

/**
 * Gets the collection of `ISCIRenderableSeries3D` that this `SCIChartSurface3D` draws.
 */
@property (nonatomic, readonly) SCIRenderableSeries3DCollection *renderableSeries;

/**
 * Gets the collection of `ISCIRenderableSeries3D` that are selected
 */
@property (nonatomic, readonly) SCIRenderableSeries3DCollection *selectedRenderableSeries;

/**
 * Gets or sets the `ISCIRenderSurface3D` instance for this `SCIChartSurface3D`
 */
@property (strong, nonatomic) id<ISCIRenderSurface3D> renderSurface;

@end

NS_ASSUME_NONNULL_END
