//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipBehaviorBase3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipBehaviorBase3D.h"
#import "SCIFunc1.h"
#import "SCIModifierBehavior+Protected.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipBehaviorBase3D`.
 */
@interface SCITooltipBehaviorBase3D<__covariant T : id<ISCIChartModifier3D>> ()

// This needed to omit the cast to associated type `T` under the hood.
@property (weak, nonatomic, nullable) SCITooltipModifier3D *modifier;

@property (nonatomic, readonly, nonnull) SCIFunc1 projectionFunction;

- (nonnull instancetype)initWithModifierType:(nonnull Class)modifierType;

/**
 * Called when the `SCITooltipBehaviorBase3D.observableSeries` has drastically changed.
 */
- (void)onObservableSeriesDrasticallyChanged;

/**
 * Gets the value indicating whether the `SCIHitTestInfo3D` instance is valid.
 * @param hitTestInfo The `SCIHitTestInfo3D` instance to test.
 * @return YES if hit point is Valid.
 */
- (BOOL)isHitPointValid:(nonnull SCIHitTestInfo3D *)hitTestInfo;

/**
 * Gets the value indicating whether the `ISCIRenderableSeries3D` instance is valid.
 * @param renderableSeries The `ISCIRenderableSeries3D` instance to check.
 * @return YES if the passed `ISCIRenderableSeries3D` instance is valid.
 */
- (BOOL)isSeriesValid:(nullable id<ISCIRenderableSeries3D>)renderableSeries;

@end
