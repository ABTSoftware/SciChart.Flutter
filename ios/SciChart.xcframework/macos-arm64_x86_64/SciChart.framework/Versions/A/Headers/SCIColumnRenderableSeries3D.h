//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIColumnRenderableSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzRenderableSeries3DBase.h"
#import "SCIChartMeshTemplate.h"
#import "SCIColumnSpacingMode.h"

/**
 * Provides 3D Columns series rendering.
 */
@interface SCIColumnRenderableSeries3D : SCIXyzRenderableSeries3DBase

/**
 * Defines the Fill color for columns.
 */
@property (nonatomic) unsigned int fillColor;

/**
 * Defines the the value between 0.0 and 1.0 which defines the fraction of available space each column should occupy in `X and Z dimensions`.
 */
@property (nonatomic) double dataPointWidth;

/**
 * Defines the the value between 0.0 and 1.0 which defines the fraction of available space each column should occupy in `X dimension`.
 */
@property (nonatomic) double dataPointWidthX;

/**
 * Defines the the value between 0.0 and 1.0 which defines the fraction of available space each column should occupy in `Z dimension`.
 */
@property (nonatomic) double dataPointWidthZ;

/**
 * Defines the value determining how colum size and spacing between them is calculated.
 *
 * Possible values:
 * - `SCIColumnSpacingMode.SCIColumnSpacingMode_MaxNonOverlapping`.
 * - `SCIColumnSpacingMode.SCIColumnSpacingMode_FixedSize`.
 */
@property (nonatomic) SCIColumnSpacingMode columnSpacingMode;

/**
 * Sets size of column for the `SCIColumnSpacingMode.SCIColumnSpacingMode_FixedSize` mode.
 */
@property (nonatomic) float columnFixedSize;

/**
 * Defines the shape of the columns.
 */
@property (nonatomic) SCIChartMeshTemplate columnShape;

/**
 * Creates a new instance of `SCIColumnRenderableSeries3D` class.
 */
- (nonnull instancetype)init;

@end
