//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesSelectionModifier+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesSelectionModifier.h"
#import "SCIGestureModifierBase+Protected.h"
#import "SCIAction2.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCISeriesSelectionModifier`.
 */
@interface SCISeriesSelectionModifier (Protected)

/**
 * Try to perform selection at specified coordinates.
 * @param point The coordinates of point to hit test.
 */
- (void)tryPerformSelectionAt:(CGPoint)point;

/**
 * Performs selection on specified `ISCIRenderableSeries` instance.
 * @param renderableSeries The series to perform selection on
 */
- (void)performSelection:(id<ISCIRenderableSeries>)renderableSeries;

/**
 * Tries to set `SCISeriesSelectionModifier.selectedSeriesStyle` on the passed in `ISCIRenderableSeries` instance.
 * @param renderableSeries The `ISCIRenderableSeries` instance to set style on.
 */
- (void)trySetStyleOnRenderableSeries:(id<ISCIRenderableSeries>)renderableSeries;

/**
 * Deselects all selected `ISCIRenderableSeries` instance  except passed in `renderableSeries`.
 * @param renderableSeries The `ISCIRenderableSeries` which should remain selected.
 */
- (void)deselectAllBut:(id<ISCIRenderableSeries>)renderableSeries;

/**
 * Deselects all selected `ISCIRenderableSeries` instances.
 */
- (void)deselectAll;

/**
 * When overridden in derived classes, indicates whether `SCIHitTestInfo` result of hit-test
 * should be returned from the `updateSeriesInfos:hitTestMethod:` method.
 * @param hitTestInfo The `SCIHitTestInfo` instance which will be checked.
 * @return YES if the associated instance of the `SCIHitTestInfo` is valid, else - NO.
 */
- (BOOL)isHitPointValid:(SCIHitTestInfo *)hitTestInfo;

@end

NS_ASSUME_NONNULL_END
