//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIContourMeshRenderableSeries3DBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIContourMeshRenderableSeries3DBase.h"
#import "SCIBaseRenderableSeries3D+Protected.h"
#import "SCISmartPropertyInt.h"
#import "SCISmartPropertyFloat.h"
#import "SCISmartProperty.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIContourMeshRenderableSeries3DBase`.
 */
@interface SCIContourMeshRenderableSeries3DBase ()

@property (nonatomic, readonly) SCISmartPropertyInt *drawMeshAsProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *strokeProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *strokeThicknessProperty;

@property (nonatomic, readonly) SCISmartProperty *meshColorPaletteProperty;
@property (nonatomic, readonly) SCISmartProperty *meshColorPaletteSizeProperty;

@property (nonatomic, readonly) SCISmartPropertyInt *meshPaletteModeProperty;

@property (nonatomic, readonly) SCISmartPropertyFloat *cellHardnessFactorProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *highlightProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *lightingFactorProperty;

@property (nonatomic, readonly) SCISmartPropertyInt *contourStrokeProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *contourOffsetProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *contourIntervalProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *contourStrokeThicknessProperty;

@end

NS_ASSUME_NONNULL_END
