//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICrosshairSceneEntityBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICrosshairSceneEntityBase.h"
#import "SCITooltipModifier3D.h"
#import "SCIPoint3D.h"
#import "ISCIChartSurface3D.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCICrosshairSceneEntityBase`.
 */
@interface SCICrosshairSceneEntityBase ()

@property (weak, nonatomic, nullable) SCITooltipModifier3D *tooltipModifier;

- (nonnull instancetype)initWithTooltipModifier:(nonnull SCITooltipModifier3D *)tooltipModifier;

- (void)renderScene:(nonnull SCIPoint3D *)hitVertex worldDimensions:(nonnull SCIVector3 *)worldDimensions;

@end
