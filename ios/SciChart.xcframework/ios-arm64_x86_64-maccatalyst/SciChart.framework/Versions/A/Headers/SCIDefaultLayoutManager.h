//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDefaultLayoutManager.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILayoutManagerBase.h"
#import "ISCIAxisLayoutStrategy.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a default layout manager implementation for `SCIChartSurface`.
 */
@interface SCIDefaultLayoutManager : SCILayoutManagerBase

/**
 * Layout strategy for layout of left aligned axis outside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> leftOuterAxisLayoutStrategy;

/**
 * Layout strategy for layout of right aligned axis outside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> rightOuterAxisLayoutStrategy;

/**
 * Layout strategy for layout of top aligned axis outside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> topOuterAxisLayoutStrategy;

/**
 * Layout strategy for layout of bottom aligned axis outside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> bottomOuterAxisLayoutStrategy;

/**
 * Layout strategy for layout of left aligned axis inside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> leftInnerAxisLayoutStrategy;

/**
 * Layout strategy for layout of right aligned axis inside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> rightInnerAxisLayoutStrategy;

/**
 * Layout strategy for layout of top aligned axis inside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> topInnerAxisLayoutStrategy;

/**
 * Layout strategy for layout of bottom aligned axis inside `ISCIRenderableSeriesArea`.
 */
@property (strong, nonatomic) id<ISCIAxisLayoutStrategy> bottomInnerAxisLayoutStrategy;

/**
 * Creates a new instance of `SCIDefaultLayoutManager` class.
 * @param leftOuter Layout strategy for layout of left aligned axis outside `ISCIRenderableSeriesArea`.
 * @param rightOuter Layout strategy for layout of right aligned axis outside `ISCIRenderableSeriesArea`.
 * @param topOuter Layout strategy for layout of top aligned axis outside `ISCIRenderableSeriesArea`.
 * @param bottomOuter Layout strategy for layout of bottom aligned axis outside `ISCIRenderableSeriesArea`.
 * @param leftInner Layout strategy for layout of left aligned axis inside `ISCIRenderableSeriesArea`.
 * @param rightInner Layout strategy for layout of right aligned axis inside `ISCIRenderableSeriesArea`.
 * @param topInner Layout strategy for layout of top aligned axis inside `ISCIRenderableSeriesArea`.
 * @param bottomInner Layout strategy for layout of bottom aligned axis inside `ISCIRenderableSeriesArea`.
 */
- (instancetype)initWithLeftOuterAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)leftOuter rightOuterAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)rightOuter
                         topOuterAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)topOuter bottomOuterAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)bottomOuter
                         leftInnerAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)leftInner rightInnerAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)rightInner
                         topInnerAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)topInner bottomInnerAxisLayoutStrategy:(id<ISCIAxisLayoutStrategy>)bottomInner;

@end

NS_ASSUME_NONNULL_END
