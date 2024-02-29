//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SciChart.Charting3d.h is part of SCICHART®, High Performance Scientific Charts
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

#import <SciChart/SciChart.Core.h>
#import <SciChart/SciChart.Data.h>
#import <SciChart/SciChart.Drawing.h>
#import <SciChart/SciChart.Charting.h>

// MARK: - <--- SciChart.Charting3d ---> -

#import <SciChart/SCIChartSurface3D.h>
#import <SciChart/SCIRenderPassState3D.h>

#import <SciChart/ISCISelectionPassManager.h>
#import <SciChart/SCISelectionPassManager.h>

#import <SciChart/SCIChartModifier3DCollection.h>
#import <SciChart/SCIRenderableSeries3DCollection.h>

#import <SciChart/SCIMath3D.h>
#import <SciChart/SCIMeshIndexCalculator.h>

// MARK: Viewport
#import <SciChart/ISCIViewport3D.h>
#import <SciChart/SCIViewport3D.h>
#import <SciChart/SCIViewportManagerBase3D.h>
#import <SciChart/SCIDefaultViewportManager3D.h>
#import <SciChart/ISCICameraAnimator.h>
#import <SciChart/ISCICameraController.h>
#import <SciChart/SCICamera3D.h>

// MARK: Rendering
#import <SciChart/ISCIRenderSurface3D.h>
#import <SciChart/SCIMetalRenderSurface3D.h>
#if TARGET_OS_IOS
#import <SciChart/SCIOpenGLRenderSurface3D.h>
#endif
#import <SciChart/ISCIRenderSurface3DRenderer.h>
#import <SciChart/SCIChart3DRenderer.h>
#import <SciChart/SCIChartTextureTemplate.h>
#import <SciChart/SCIChartMeshTemplate.h>

// MARK: - Axes 3D
#import <SciChart/SCIAxisCubeEntity.h>
#import <SciChart/SCINumericAxis3D.h>
#import <SciChart/SCIDateAxis3D.h>
#import <SciChart/SCILogarithmicNumericAxis3D.h>

// MARK: Range Calculation Helpers 3D
#import <SciChart/ISCIRangeCalculationHelper3D.h>
#import <SciChart/SCIRangeCalculationHelper3DBase.h>
#import <SciChart/SCINumericRangeCalculationHelper3D.h>
#import <SciChart/SCIDateRangeCalculationHelper3D.h>
#import <SciChart/SCILogarithmicRangeCalculationHelper3D.h>

// MARK: Metadata Providers
#import <SciChart/ISCIMetadataProvider3D.h>
#import <SciChart/ISCIPointMetadataProvider3D.h>
#import <SciChart/ISCIStrokeMetadataProvider3D.h>
#import <SciChart/ISCIFillMetadataProvider3D.h>
#import <SciChart/ISCISurfaceMeshMetadataProvider3D.h>
#import <SciChart/SCIMetadataProvider3DBase.h>
#import <SciChart/SCIDefaultSelectableMetadataProvider3D.h>
#import <SciChart/SCIPointMetadataProvider3D.h>
#import <SciChart/SCIPointMetadata3D.h>

// MARK: Data Series
#import <SciChart/SCIDataSeries3DUpdate.h>
#import <SciChart/SCIXyzDataSeries3D.h>
#import <SciChart/ISCIGridDataSeries3DValues.h>
#import <SciChart/ISCIUniformGridDataSeries3DValues.h>
#import <SciChart/SCIGridData.h>
#import <SciChart/SCIBaseGridDataSeries3D.h>
#import <SciChart/SCIUniformGridDataSeries3D.h>
#import <SciChart/SCICustomSurfaceDataSeries3D.h>
#import <SciChart/SCICylindroidDataSeries3D.h>
#import <SciChart/SCIEllipsoidDataSeries3D.h>
#import <SciChart/SCIPolarDataSeries3D.h>
#import <SciChart/SCIWaterfallDataSeries3D.h>

// MARK: - Renderable Series 3D

#import <SciChart/SCIPointLineRenderableSeries3D.h>
#import <SciChart/SCIScatterRenderableSeries3D.h>
#import <SciChart/SCIImpulseRenderableSeries3D.h>
#import <SciChart/SCIColumnRenderableSeries3D.h>
#import <SciChart/SCISurfaceMeshRenderableSeries3D.h>
#import <SciChart/SCIWaterfallRenderableSeries3D.h>
#import <SciChart/SCIFreeSurfaceRenderableSeries3D.h>

// MARK: Render Pass Data 3D
#import <SciChart/ISCISeriesRenderPassData3D.h>
#import <SciChart/SCISeriesRenderPassData3D.h>
#import <SciChart/SCIGridXyzRenderPassData3D.h>
#import <SciChart/SCIYSeriesRenderPassData3D.h>
#import <SciChart/SCIXyzRenderPassData3D.h>
#import <SciChart/SCIScatterRenderPassData3D.h>
#import <SciChart/SCIPointLineRenderPassData3D.h>
#import <SciChart/SCIColumnRenderPassData3D.h>
#import <SciChart/SCIImpulseRenderPassData3D.h>
#import <SciChart/SCIFreeSurfaceRenderPassData3D.h>
#import <SciChart/SCISurfaceMeshRenderPassData3D.h>
#import <SciChart/SCIWaterfallRenderPassData3D.h>

// MARK: Entities
#import <SciChart/ISCIEntityIdProvider.h>
#import <SciChart/SCIDefaultEntityIdProvider.h>
#import <SciChart/SCIBaseRenderableSeriesSceneEntity3D.h>
#import <SciChart/SCIPoints3DSceneEntity.h>
#import <SciChart/SCIPointLineSceneEntity.h>
#import <SciChart/SCIColumnSceneEntity.h>
#import <SciChart/SCIImpulseSceneEntity.h>
#import <SciChart/SCIContourMeshRenderableSeriesEntityBase.h>
#import <SciChart/SCISurfaceMeshSceneEntity.h>
#import <SciChart/SCIFreeSurfaceSceneEntity.h>
#import <SciChart/SCIWaterfallSceneEntity.h>

// MARK: ColorPalettes
#import <SciChart/SCIMeshColorPalette.h>
#import <SciChart/SCIBrushColorPalette.h>
#import <SciChart/SCISolidColorBrushPalette.h>
#import <SciChart/SCIGradientColorPalette.h>

// MARK: - Chart Modifiers 3D

#import <SciChart/SCIModifierGroup3D.h>
#import <SciChart/SCILegendModifier3D.h>

// MARK: Gesture Modifiers
#import <SciChart/SCIZoomExtentsModifier3D.h>
#import <SciChart/SCIOrbitModifier3D.h>
#import <SciChart/SCIPinchZoomModifier3D.h>
#if TARGET_OS_IOS
#import <SciChart/SCIFreeLookModifier3D.h>
#endif
#import <SciChart/SCIVertexSelectionModifier3D.h>

// MARK: Touch Modifiers
#import <SciChart/SCITooltipModifier3D.h>

// MARK: Modifier Behaviors
#import <SciChart/SCITooltipBehavior3D.h>
#import <SciChart/SCITooltipBehavioWithCrosshairBehavior3D.h>
#import <SciChart/SCICrosshairSceneEntityBase.h>
#import <SciChart/SCICrosshairLinesSceneEntity.h>
#import <SciChart/SCICrosshairPlanesSceneEntity.h>

// MARK: Point markers 3D
#import <SciChart/SCIBasePointMarker3D.h>
#import <SciChart/SCIPixelPointMarker3D.h>
// Mesh Point Markers
#import <SciChart/SCIPyramidPointMarker3D.h>
#import <SciChart/SCISpherePointMarker3D.h>
#import <SciChart/SCICylinderPointMarker3D.h>
#import <SciChart/SCICubePointMarker3D.h>
// Texture Point Markers
#import <SciChart/SCITrianglePointMarker3D.h>
#import <SciChart/SCIQuadPointMarker3D.h>
#import <SciChart/SCIEllipsePointMarker3D.h>
#import <SciChart/SCICustomPointMarker3D.h>

// MARK: Series info 3D
#import <SciChart/SCIHitTestInfo3D.h>
#import <SciChart/SCISeriesInfo3D.h>
#import <SciChart/SCIXyzSeriesInfo3D.h>
#import <SciChart/SCIMeshSeriesInfo3D.h>
#import <SciChart/SCIWaterfallSeriesInfo3D.h>

// MARK: Tooltips 3D
#import <SciChart/ISCISeriesTooltip3D.h>
#import <SciChart/SCISeriesTooltip3DBase.h>
#import <SciChart/SCIMeshSeriesTooltip3D.h>
#import <SciChart/SCIWaterfallSeriesTooltip3D.h>
#import <SciChart/SCIXyzSeriesTooltip3D.h>

// MARK: Series Info providers 3D
#import <SciChart/ISCIHitTestInfoUpdatable3D.h>
#import <SciChart/ISCISeriesInfo3DProvider.h>
#import <SciChart/SCISeriesInfo3DProviderBase.h>
#import <SciChart/SCIDefaultXyzSeriesInfo3DProvider.h>
#import <SciChart/SCIDefaultMeshSeriesInfoProvider3D.h>
#import <SciChart/SCIDefaultWaterfallSeriesInfoProvider.h>
