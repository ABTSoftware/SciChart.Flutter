//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIXyzDataSeries3DValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDataSeries3D.h"

@class SCIDoubleValues;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol to the XyzDataSeries3D values, a series containing X, Y and Z data-points.
 */
@protocol ISCIXyzDataSeries3DValues<ISCIDataSeries3D>

/**
 * Updates specified values with values provided by this `ISCIXyzDataSeries3DValues` instance.
 * @param xValues The `xValues` to set.
 * @param yValues The `yValues` to set.
 * @param zValues The `zValues` to set.
 */
- (void)updateDoubleXValues:(SCIDoubleValues *)xValues yValues:(SCIDoubleValues *)yValues zValues:(SCIDoubleValues *)zValues;

@end

NS_ASSUME_NONNULL_END
