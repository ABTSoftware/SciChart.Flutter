//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesTooltip.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIHitTestInfoUpdatable.h"
#import "ISCIThemeable.h"
#import "SCIUpdateSeriesTooltipAction.h"
#import <CoreGraphics/CoreGraphics.h>

@class SCISeriesInfo;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol for `ISCIRenderableSeries` tooltips.
 */
@protocol ISCISeriesTooltip <ISCISeriesTooltipCore, ISCIHitTestInfoUpdatable, ISCIThemeable>

/**
 * Gets the associated `SCISeriesInfo` instance.
 */
@property (strong, nonatomic, readonly) SCISeriesInfo *seriesInfo;

/**
 * Draws overlay provided by this tooltip.
 * @param rect The portion of the view’s bounds that needs to be updated.
 */
- (void)onDrawTooltipOverlayInRect:(CGRect)rect;

/**
 * Checks whether series info contains passed in `ISCIRenderableSeries` instance.
 * Used mostly `SCIStackedSeriesTooltipBase` and inheritors.
 * @param renderableSeries The `ISCIRenderableSeries` instance.
 * @return YES - if the underlying `SCISeriesInfo` contains passed in renderableSeries instance. Otherwise - NO.
 */
- (BOOL)containsHitRenderableSeries:(id<ISCIRenderableSeries>)renderableSeries;

/**
 * Updates tooltips with specified `updateAction`.
 * @param updateAction The action which updated this tooltip.
 * @param xyCoordinate The coordinate to update tooltip at.
 */
- (void)updateTooltipAt:(CGPoint)xyCoordinate withUpdateAction:(SCIUpdateSeriesTooltipAction)updateAction;

@end

NS_ASSUME_NONNULL_END
