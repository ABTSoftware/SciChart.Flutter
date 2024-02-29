//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISurfaceMeshRenderableSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISurfaceMeshRenderableSeries3D.h"
#import "SCIContourMeshRenderableSeries3DBase+Protected.h"
#import "SCISmartPropertyDouble.h"
#import "SCISmartPropertyBool.h"
#import "SCISurfaceMeshRenderPassData3D.h"
#import "ISCIGridDataSeries3DValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCISurfaceMeshRenderableSeries3D`.
 */
@interface SCISurfaceMeshRenderableSeries3D ()

@property (nonatomic, readonly) SCISmartPropertyBool *drawSkirtProperty;
@property (nonatomic, readonly) SCISmartPropertyDouble *minimumProperty;
@property (nonatomic, readonly) SCISmartPropertyDouble *maximumProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *meshResolutionProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *heightScaleFactorProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *yOffsetProperty;

+ (void)updateGridRenderPassData3D:(SCISurfaceMeshRenderPassData3D *)renderPassData withValues:(id<ISCIGridDataSeries3DValues>)xyzDataSeries3DValues;

@end

NS_ASSUME_NONNULL_END
