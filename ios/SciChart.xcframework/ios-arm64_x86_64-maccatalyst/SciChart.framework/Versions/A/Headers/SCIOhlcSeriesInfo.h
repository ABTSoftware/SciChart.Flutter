//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIOhlcSeriesInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesInfo.h"
#import "SCIOhlcRenderableSeriesBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines Series Info class for `SCIOhlcRenderableSeriesBase`
 */
@interface SCIOhlcSeriesInfo : SCISeriesInfo

/**
 * The parent renderable series.
 */
@property (strong, nonatomic, readonly) SCIOhlcRenderableSeriesBase *renderableSeries;

/**
 * The `X Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> xValue;

/**
 * The `Open Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> openValue;

/**
 * The `High Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> highValue;

/**
 * The `Low Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> lowValue;

/**
 * The `Close Value` at the `hit-test` site.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> closeValue;

/**
 * Gets the formatted `xValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedXValue;

/**
 * Gets the formatted `openValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedOpenValue;

/**
 * Gets the formatted `highValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedHighValue;

/**
 * Gets the formatted `lowValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedLowValue;

/**
 * Gets the formatted `closeValue`.
 */
@property (strong, nonatomic, readonly) id<ISCIString> formattedCloseValue;

@end

NS_ASSUME_NONNULL_END
