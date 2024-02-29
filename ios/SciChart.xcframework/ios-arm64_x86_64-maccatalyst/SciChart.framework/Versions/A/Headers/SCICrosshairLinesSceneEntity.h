//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICrosshairLinesSceneEntity.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIVector3.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which is responsible for drawing crosshair lines for `SCITooltipModifier3D` at the hit test point.
 */
@interface SCICrosshairLinesSceneEntity : SCICrosshairSceneEntityBase

/**
 * Creates a new instance of `SCICrosshairLinesSceneEntity` class.
 * @param tooltipModifier The associated `SCITooltipModifier3D` instance.
 */
- (instancetype)initWithTooltipModifier:(SCITooltipModifier3D *)tooltipModifier NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
