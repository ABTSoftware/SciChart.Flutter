//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesInfoProvider.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCISeriesTooltip.h"

@class SCISeriesInfo;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface which creates `SCISeriesInfo` and tooltips based on `SCISeriesInfo` values.
 */
@protocol ISCISeriesInfoProvider <ISCIAttachable>

/**
 * Creates `SCISeriesInfo` instance which is attached to current `ISCIRenderableSeries`.
 */
@property (nonatomic, readonly) SCISeriesInfo *seriesInfo;

/**
 * Creates `ISCISeriesTooltip` instance which is attached to current `ISCIRenderableSeries`.
 */
@property (nonatomic, readonly) id<ISCISeriesTooltip> seriesTooltip;

/**
 * Creates `ISCISeriesTooltip` instance for specified `tooltipId` which is attached to current `ISCIRenderableSeries`.
 * @param modifierType The type of modifier for which tooltip will be created.
 * @return Tooltip instance.
 */
- (id<ISCISeriesTooltip>)getSeriesTooltip:(Class)modifierType;

/**
 * When overridden in derived classes, should add all needed `ISCIRenderableSeries` into legend data source.
 */
- (void)tryAddSeriesToLegendDataSource:(NSMutableArray<id<ISCIRenderableSeries>> *)legendDataSource;

@end

NS_ASSUME_NONNULL_END
