//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRangeCalculationHelper3DBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRangeCalculatorHelperBase+Protected.h"
#import "ISCIChartSurface3D.h"

NS_ASSUME_NONNULL_BEGIN
/**
 * The extensions in this header are to be used only by subclasses of `SCIRangeCalculationHelper3DBase`.
 */
@interface SCIRangeCalculationHelper3DBase ()

@property (weak, nonatomic, nullable) id<ISCIChartSurface3D> parentSurface;

/**
 * Checks if specified series is valid for data range update of YAxis with `yAxisId`.
 * @param rSeries The `ISCIRenderableSeries3D` instance to check.
 * @return True if associated `ISCIRenderableSeries3D` instance is valid. Otherwise - false.
 */
- (BOOL)isValidSeries:(id<ISCIRenderableSeries3D>)rSeries;

@end

NS_ASSUME_NONNULL_END
