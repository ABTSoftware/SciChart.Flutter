//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartLayoutState.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import <CoreGraphics/CGGeometry.h>

/**
 * The class with information about current layout state of `ISCIPieChartSurface`.
 */
@interface SCIPieChartLayoutState : NSObject<ISCICleanable>

/**
 * The Center of `ISCIPieChartSurface`.
 */
@property (nonatomic) CGPoint center;

/**
 * The Radius of `ISCIPieChartSurface`.
 */
@property (nonatomic) float outerRadius;

/**
 * Gets how many pixels are in one relative unit.
 */
@property (nonatomic) float pixelPerRelativeUnit;

/**
 * Gets the value indicating spacing between `ISCIPieRenderableSeries` instances based on pixelPerRelativeUnit.
 */
@property (nonatomic) float absoluteSeriesSpacing;

@end
