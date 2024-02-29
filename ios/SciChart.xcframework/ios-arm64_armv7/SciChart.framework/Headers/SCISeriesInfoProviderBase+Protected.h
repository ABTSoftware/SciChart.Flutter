//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesInfoProviderBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderableSeries.h"
#import "SCITooltipModifier.h"
#import "SCIRolloverModifier.h"
#import "SCICursorModifier.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCISeriesInfoProviderBase`.
 */
@interface SCISeriesInfoProviderBase<TSeries : id<ISCIRenderableSeries>, TSeriesInfo : SCISeriesInfo *> ()

- (TSeriesInfo)getSeriesInfoInternal;

/**
 * Creates a new `ISCISeriesTooltip`.
 * @param seriesInfo The series info instance.
 * @param modifierType The type of modifier for which tooltip will be created.
 * @return The `ISCISeriesTooltip` instance.
 */
- (id<ISCISeriesTooltip>)getSeriesTooltipInternalWithSeriesInfo:(TSeriesInfo)seriesInfo modifierType:(Class)modifierType NS_SWIFT_NAME(getSeriesTooltipInternal(seriesInfo:modifierType:));

@end

NS_ASSUME_NONNULL_END
