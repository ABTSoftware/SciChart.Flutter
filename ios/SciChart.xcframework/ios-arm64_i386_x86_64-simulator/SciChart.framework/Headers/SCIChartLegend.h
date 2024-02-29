//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartLegend.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartLegend.h"
#import "SCICollectionView.h"
#import "SCIView.h"

/**
 * Provides a Legend to display series color and name.
 */
@interface SCIChartLegend : SCICollectionView<ISCIChartLegend, ISCILayoutable>

@end

/**
 * Provides a Legend to display series color and name.
 */
@interface SCIChartLegend (Deprecated)

/**
 * Places legend on view
 * @param view The view to place legend on.
 */
- (void)placeLegendOnView:(SCIView *)view __deprecated_msg("To place Legend manually use [view addSybview:] instead");

/**
 * Removes legend from its superview
 */
- (void)removeLegendFromSuperview __deprecated_msg("To remove Legend manually use [view removeFromSuperview] instead");

@end
