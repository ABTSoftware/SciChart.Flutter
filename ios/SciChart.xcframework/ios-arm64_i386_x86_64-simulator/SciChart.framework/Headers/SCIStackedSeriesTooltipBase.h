//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIStackedSeriesTooltipBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCISeriesTooltip.h"
#import "SCIStackedSeriesInfo.h"
#import "SCIFunc1.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class for tooltip for `SCIStackedSeriesInfo`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIStackedSeriesTooltipBase : NSObject<ISCISeriesTooltip>

/**
 * Gets the associated `SCIStackedSeriesInfo` instance.
 */
@property (strong, nonatomic, readonly) SCIStackedSeriesInfo *seriesInfo;

/**
 * Gets the associated renderable series.
 */
@property (strong, nonatomic, readonly, nullable) id<ISCIRenderableSeries> renderableSeries;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIStackedSeriesTooltipBase` class.
 * @param seriesInfo The series info instance.
 */
- (instancetype)initWithSeriesInfo:(SCIStackedSeriesInfo *)seriesInfo NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
