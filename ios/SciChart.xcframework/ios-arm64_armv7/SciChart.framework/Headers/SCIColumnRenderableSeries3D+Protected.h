//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIColumnRenderableSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIColumnRenderableSeries3D.h"
#import "SCIRenderableSeriesCore+Protected.h"
#import "SCIBaseRenderableSeries3D+Protected.h"
#import "SCISmartPropertyInt.h"
#import "SCISmartPropertyDouble.h"
#import "SCISmartPropertyFloat.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIColumnRenderableSeries3D`.
 */
@interface SCIColumnRenderableSeries3D ()

@property (strong, nonatomic) SCISmartPropertyInt *fillProperty;
@property (strong, nonatomic) SCISmartPropertyDouble *dataPointWidthProperty;
@property (strong, nonatomic) SCISmartPropertyDouble *dataPointWidthXProperty;
@property (strong, nonatomic) SCISmartPropertyDouble *dataPointWidthZProperty;
@property (strong, nonatomic) SCISmartPropertyInt *columnSpacingModeProperty;
@property (strong, nonatomic) SCISmartPropertyFloat *columnFixedSizeProperty;
@property (strong, nonatomic) SCISmartPropertyInt *columnShapeProperty;

@end

NS_ASSUME_NONNULL_END
