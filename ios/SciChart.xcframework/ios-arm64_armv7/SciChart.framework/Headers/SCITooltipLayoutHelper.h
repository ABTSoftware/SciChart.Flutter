//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipLayoutHelper.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIThemeable.h"
#import "ISCISeriesTooltipCore.h"
#import "ISCITooltipContainer.h"
#import "SCITooltipPosition.h"
#import "SCIRenderableSeriesCollection.h"
#import "SCIProjectionCollection.h"
#import "ISCISeriesTooltipCallback.h"

NS_ASSUME_NONNULL_BEGIN

@protocol IRenderableSeriesCore;

/**
 * Defines the class which is used as helper while work with tooltip layout.
 */
@interface SCITooltipLayoutHelper : NSObject<ISCIAttachable, ISCIThemeable>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCITooltipLayoutHelper` class.
 * @param tooltipContainer Container to place tooltips into.
 * @param seriesTooltips Tooltips which will be placed into passed in container.
 * @param callback Callback which is used to update tooltips from behavior.
 */
- (instancetype)initWithTooltipContainer:(id<ISCITooltipContainer>)tooltipContainer seriesTooltips:(SCIProjectionCollection<id<ISCISeriesTooltipCore>, id<ISCIRenderableSeriesCore>> *)seriesTooltips andUpdateTooltipCallback:(id<ISCISeriesTooltipCallback>)callback NS_DESIGNATED_INITIALIZER;

/**
 * Defines the position of the tooltip related to the current touch point.
 */
@property (nonatomic) SCITooltipPosition tooltipPosition;

/**
 * Sets the `observableSeries` from the parent `SCITooltipBehavior`.
 */
- (void)setObservableSeries:(SCIObservableCollection<id<ISCIRenderableSeriesCore>> *)observableSeries;

/**
 * Tries to update series tooltip on screen.
 * @param point The `[x, y]` coordinates of the tooltip on screen.
 */
- (void)tryUpdateTooltipAt:(CGPoint)point;

/**
 * Tries to remove series tooltip from screen.
 */
- (void)tryRemoveTooltip;
    
@end

NS_ASSUME_NONNULL_END
