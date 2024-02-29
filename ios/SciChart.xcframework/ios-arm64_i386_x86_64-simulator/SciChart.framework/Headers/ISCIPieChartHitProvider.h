//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieChartHitProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "SCIPieHitTestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a hit provider which perform hit test check on pie chart renderable series.
 * @see `-[ISCIPieRenderableSeries hitTestWithResult:x:y:]`.
 */
@protocol ISCIPieChartHitProvider <ISCIAttachable>

/**
 * Performs 2D hit test on specified pie chart renderable series.
 * @param hitTestInfo The hit test info instance to update.
 * @param point The coordinate of hit test point.
 */
- (void)updateWithHitTestInfo:(SCIPieHitTestInfo *)hitTestInfo atPoint:(CGPoint)point;

@end

NS_ASSUME_NONNULL_END
