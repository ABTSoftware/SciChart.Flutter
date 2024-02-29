//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFreeSurfaceRenderableSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFreeSurfaceRenderableSeries3D.h"
#import "SCIContourMeshRenderableSeries3DBase+Protected.h"
#import "SCISmartPropertyInt.h"
#import "SCISmartPropertyFloat.h"
#import "SCISmartProperty.h"
#import "SCISmartPropertyBool.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIFreeSurfaceRenderableSeries3D`.
 */
@interface SCIFreeSurfaceRenderableSeries3D ()

@property (nonatomic, readonly) SCISmartPropertyInt *paletteMinMaxModeProperty;
@property (nonatomic, readonly) SCISmartProperty *paletteMinimumProperty;
@property (nonatomic, readonly) SCISmartProperty *paletteMaximumProperty;

@property (nonatomic, readonly) SCISmartPropertyFloat *paletteRadialFactorProperty;
@property (nonatomic, readonly) SCISmartProperty *paletteAxialFactorProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *paletteAzimuthalFactorProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *palettePolarFactorProperty;

@property (nonatomic, readonly) SCISmartPropertyBool *drawBackSideProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *contourAxisProperty;

@end

NS_ASSUME_NONNULL_END
