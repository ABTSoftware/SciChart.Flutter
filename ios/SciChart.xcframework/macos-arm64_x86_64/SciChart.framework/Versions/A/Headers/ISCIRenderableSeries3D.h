//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderableSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderableSeriesCore.h"
#import "ISCIChartSurface3DProvider.h"
#import "ISCIUpdatable3D.h"
#import "ISCIThemeable.h"
#import "ISCIDataSeries3D.h"
#import "ISCIMetadataProvider3D.h"
#import "ISCISeriesInfo3DProvider.h"
#import "ISCISeriesRenderPassData3D.h"
#import "SCIBaseRenderableSeriesSceneEntity3D.h"
#import "SCIBasePointMarker3D.h"
#import "SCIHitTestInfo3D.h"
#import "ISCIReadWriteLock.h"

@protocol ISCIAxis3D;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for all `RenderableSeries 3D` within SciChart.
 */
@protocol ISCIRenderableSeries3D <ISCIRenderableSeriesCore, ISCIChartSurface3DProvider, ISCIUpdatable3D, ISCIThemeable>

/**
 * Defines the `ISCIDataSeries3D` associated with this series.
 */
@property (strong, nonatomic) id<ISCIDataSeries3D> dataSeries;

/**
 * Gets whether this renderable series has data series to draw.
 */
@property (nonatomic, readonly) BOOL hasDataSeries;

/**
 * Gets the scene entity that represent this `RenderableSeries 3D`.
 * @note This is the `entity` which will actually do the drawing in the `3D Viewport`.
 */
@property (nonatomic, readonly) SCIBaseRenderableSeriesSceneEntity3D *sceneEntity;

/**
 * Gets the current `ISCISeriesRenderPassData3D` instance which is used for render pass.
 */
@property (nonatomic, readonly) id<ISCISeriesRenderPassData3D> currentRenderPassData;

/**
 * Defines the `SCIBasePointMarker3D` for this renderable series.
 */
@property (strong, nonatomic, nullable) SCIBasePointMarker3D *pointMarker;

/**
 * Defines the `ISCIMetadataProvider3D` instance associated with this series.
 */
@property (strong, nonatomic, nullable) id<ISCIMetadataProvider3D> metadataProvider;

/**
 * Defines the `ISCISeriesInfo3DProvider` instance associated with this series.
 */
@property (strong, nonatomic, nullable) id<ISCISeriesInfo3DProvider> seriesInfoProvider;

/**
 * Gets the color which represents this `ISCIRenderableSeries3D` instance.
 */
@property (nonatomic, readonly) SCIColor *seriesColor;

/**
 * Gets the `ISCIReadWriteLock` instance to lock data series
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> renderPassDataLock;

/**
 * Gets the `ISCIReadWriteLock` instance to lock data series
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> dataSeriesLock;

/**
 * Defines the shinines value in [0.0f - 1024.0f] range which defines how much the surface material is shining. Default value of 64.0 is used.
 * @note Small values tend to have more shines overall the entire surface, think like rubber higher values will mean more focused shines, like plastic.
 */
@property (nonatomic) float shininess;

/**
 * Defines specular strength  which defines how bright and visible is the shining spot.
 */
@property (nonatomic) float specularStrength;

/**
 * Defines the material specular color.
 */
@property (nonatomic) unsigned int specularColor;

/**
 * Defines the material diffuse color.
 */
@property (nonatomic) unsigned int diffuseColor;

/**
 * Defines the selected color for vertices selected with `-performSelection:`.
 */
@property (nonatomic) unsigned int selectedVertexColor;

/**
 * Performs a hit-test at the specific point `(x,y coordinate)` on the parent renderableSeries area.
 * @param hitTestResult The `SCIHitTestInfo3D` instance where result of `hit-test` should be stored.
 * @param point The x-y coordinates in pixels relative to parent renderableSeries area.
 */
- (void)hitTest:(SCIHitTestInfo3D *)hitTestResult at:(CGPoint)point;

/**
 * Performs a hit-test at the specific point `(x,y coordinate)` on the parent renderableSeries area.
 * @param hitTestResult The `SCIHitTestInfo3D` instance where result of `hit-test` should be stored.
 * @param selectionID The identifier - an encoded `32-bit` Id which combines vertex and mesh ID.
 */
- (void)hitTest:(SCIHitTestInfo3D *)hitTestResult selection:(unsigned long long)selectionID;

/**
 * Try to switch selection (e.g. from selected to unselected and vice versa) for vertex using `hit-test` results for this renderable series.
 * @param hitTestInfo3D The hit test results to use to perform selection.
 */
- (void)performSelection:(SCIHitTestInfo3D *)hitTestInfo3D;

/**
 * Try to set selection for vertex using hit test results for this renderable series.
 * @param isSelected The selection flag.
 * @param hitTestInfo3D The hit test results to use to perform selection.
 */
- (void)performSelection:(BOOL)isSelected withHitTestInfo:(SCIHitTestInfo3D *)hitTestInfo3D;

/**
 * Deselects all vertices for this renderable series.
 */
- (void)deselectAll;

/**
 * Called during render pass and updates current render pass data.
 * @param xAxis The XAxis instance that this `ISCIRenderableSeries3D` is associated with.
 * @param yAxis The YAxis instance that this `ISCIRenderableSeries3D` is associated with.
 * @param zAxis The ZAxis instance that this `ISCIRenderableSeries3D` is associated with.
 */
- (void)updateRenderPassDataXAxis:(id<ISCIAxis3D>)xAxis yAxis:(id<ISCIAxis3D>)yAxis zAxis:(id<ISCIAxis3D>)zAxis;

/**
 * Asynchronously requests invalidate of metadata provided by `ISCIMetadataProvider3D` and then invalidates this renderable series.
 */
- (void)invalidateMetadata;

@end

NS_ASSUME_NONNULL_END
