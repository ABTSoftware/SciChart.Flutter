//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipLayoutHelper+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipLayoutHelper.h"
#import "SCIAttachableServiceContainer.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipLayoutHelper`.
 */
@interface SCITooltipLayoutHelper ()

@property (strong, nonatomic) SCIAttachableServiceContainer *services;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipLayoutHelper`.
 */
@interface SCITooltipLayoutHelper (Protected)

/**
 * Update tooltips if the renderable series and new point is valid according to the new x and y values.
 * @param point The (x, y) values of the point.
 * @param tooltipCallback The callback to use for updating of series tooltip
 */
- (void)updateTooltipAt:(CGPoint)point tooltipCallback:(id<ISCISeriesTooltipCallback>)tooltipCallback;

@end

NS_ASSUME_NONNULL_END
