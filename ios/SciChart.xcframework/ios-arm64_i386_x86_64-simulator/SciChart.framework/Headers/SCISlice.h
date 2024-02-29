//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISlice.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIProjectionCollection.h"
#import "ISCISeriesTooltip.h"
#import "ISCIRenderableSeries.h"
#import "SCIFunc1.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which is represent vertical slice with tooltips to be used in `SCIRolloverModifier`.
 */
@interface SCISlice : NSObject<ISCIThemeable>

/**
 * Collection of `ISCISeriesTooltip` for this slice.
 */
@property (strong, nonatomic) SCIProjectionCollection<ISCISeriesTooltip, ISCIRenderableSeries> *sliceTooltips;

/**
 * A point snapped to the `X-Y` value of the series.
 */
@property (nonatomic) CGPoint xyCoordinate;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Create a new `SCISlice` instance.
 * @param getSeriesTooltipFunc A `SCIFunc1` used to get tooltip for `ISCIRenderableSeries`.
 */
- (instancetype)initWithGetSeriesTooltipFunc:(SCIFunc1)getSeriesTooltipFunc NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
