//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieSeriesTooltip.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCISeriesTooltipCore.h"
#import "ISCIPieHitTestInfoUpdatable.h"
#import "SCIPieSeriesInfo.h"
#import "SCIUpdateSeriesTooltipAction.h"

@protocol ISCIPieHitTestInfoUpdatable;
@class SCIPieSeriesInfo;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for tooltips for `ISCIPieRenderableSeries`.
 */
@protocol ISCIPieSeriesTooltip <ISCISeriesTooltipCore, ISCIPieHitTestInfoUpdatable>

/**
 * Gets the associated `SCIPieSeriesInfo` instance.
 */
@property (nonatomic, readonly) SCIPieSeriesInfo *seriesInfo;

/**
 * Updates tooltips with specified updateAction.
 * @param xyCoordinate The `CGPoint` coordinate to update tooltip at.
 * @param updateAction The action which updated this tooltip.
 */
- (void)updateTooltipAt:(CGPoint)xyCoordinate withUpdateAction:(SCIUpdateSeriesTooltipAction)updateAction;

@end

NS_ASSUME_NONNULL_END
