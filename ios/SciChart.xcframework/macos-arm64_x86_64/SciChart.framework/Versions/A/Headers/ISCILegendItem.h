//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCILegendItem.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIThemeable.h"
#import "ISCIChartLegend.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an interface for legend item which is used by `SCIChartLegend`.
 */
@protocol ISCILegendItem

/**
 * Binds data provided by `source` to this `ISCILegendItem` instance.
 * @param source Source to bind with.
 * @param legend The parent `SCIChartLegend`.
 */
- (void)bindSeriesInfoWith:(id)source legend:(id<ISCIChartLegend>)legend;

@end

NS_ASSUME_NONNULL_END
