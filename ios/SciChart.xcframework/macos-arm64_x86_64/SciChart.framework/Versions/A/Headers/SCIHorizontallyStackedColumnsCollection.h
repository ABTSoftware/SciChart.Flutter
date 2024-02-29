//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIHorizontallyStackedColumnsCollection.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIStackedSeriesCollectionBase.h"
#import "SCISpacingMode.h"

/**
 * Provides Horizontally Stacked Columns rendering.
 */
@interface SCIHorizontallyStackedColumnsCollection : SCIStackedSeriesCollectionBase

/**
 * Sets the value which specifies the width of the gap between horizontally stacked columns.
 * Can be set to either a relative or absolute value depending on the `SCISpacingMode` used.
 */
@property (nonatomic) double spacing;

/**
 * Sets the `SCISpacingMode` to use for the space between columns computations.
 * @note the default of Absolute requires that the spacing value is in pixels. The value of Relative requires that the spacing value is a double value from 0.0 to 1.0.
 */
@property (nonatomic) SCISpacingMode spacingMode;

/**
 * Gets a value between 0.0 and 1.0 which defines the fraction of available space each column should occupy
 */
@property (nonatomic) double dataPointWidth;

@end
