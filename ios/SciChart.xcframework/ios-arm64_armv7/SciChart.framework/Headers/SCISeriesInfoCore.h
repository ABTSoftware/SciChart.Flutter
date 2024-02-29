//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesInfoCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import "ISCIRenderableSeries.h"
#import "ISCIRenderableSeriesCore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the core base class which contains information about series throughout the SciChart SDK.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCISeriesInfoCore : NSObject<ISCICleanable>

/**
 * The parent renderable series
 */
@property (strong, nonatomic, readonly) id<ISCIRenderableSeriesCore> renderableSeries;

/**
 * The color of the renderable series associated with this series info
 */
@property (strong, nonatomic) SCIColor *seriesColor;

/**
 * The name of the `ISCIDataSeries` associated with this series info.
 */
@property (nonatomic, strong, nullable) NSString *seriesName;

/**
 * The value indicating whether the `HitTest` operation was a hit or not
 */
@property (nonatomic) BOOL isHit;

/**
 * Gets the value indicating whehter the parent renderable series is visible or not.
 */
@property (nonatomic, readonly) BOOL isVisible;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCISeriesInfoCore` class.
 * @param series The parent renderable series.
 */
- (instancetype)initWithSeries:(id<ISCIRenderableSeriesCore>)series NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
