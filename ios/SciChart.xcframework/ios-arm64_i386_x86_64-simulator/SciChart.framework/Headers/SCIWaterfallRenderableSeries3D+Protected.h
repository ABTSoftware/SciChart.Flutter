//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWaterfallRenderableSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIWaterfallRenderableSeries3D.h"
#import "SCISmartPropertyInt.h"
#import "SCISmartPropertyFloat.h"
#import "SCISmartProperty.h"
#import "SCIBrushColorPalette.h"
#import "SCIBaseRenderableSeries3D+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIWaterfallRenderableSeries3D`.
 */
@interface SCIWaterfallRenderableSeries3D ()

@property (nonatomic, readonly) SCISmartPropertyInt *strokeProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *strokeThicknessProperty;

@property (nonatomic, readonly) SCISmartPropertyFloat *sliceThicknessProperty;

@property (nonatomic, readonly) SCISmartProperty *selectedColorMappingProperty;

@property (nonatomic, readonly) SCISmartProperty *yColorMappingProperty;
@property (nonatomic, readonly) SCISmartProperty *zColorMappingProperty;

@property (nonatomic, readonly) SCISmartProperty *yStrokeColorMappingProperty;
@property (nonatomic, readonly) SCISmartProperty *zStrokeColorMappingProperty;

@property (nonatomic, readonly) SCISmartPropertyInt *clipModeProperty;

@end

NS_ASSUME_NONNULL_END
