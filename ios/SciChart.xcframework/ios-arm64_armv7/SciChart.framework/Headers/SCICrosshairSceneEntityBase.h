//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICrosshairSceneEntityBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseSceneEntity.h"
#import "SCIPoint3D.h"

/**
 * Defines an abstract base class for drawing crosshairs (lines or planes) for `SCITooltipModifier3D` at the hit test point.
 * @see `SCICrosshairLinesSceneEntity`.
 * @see `SCICrosshairPlanesSceneEntity`.
 */
@interface SCICrosshairSceneEntityBase : SCIBaseSceneEntity

/**
 * Updates last hit vertex on `SCITooltipModifier3D`.
 * @param hitVertex The new hit vertex.
 */
- (void)updateHitVertex:(nonnull SCIPoint3D *)hitVertex;

/**
 * Set the crosshaiir visibility.
 * @param isVisible New isVisible value.
 */
- (void)setCroshairVisible:(BOOL)isVisible;

@end
