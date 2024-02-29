//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIVerticalSliceBehaviorBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIVerticalSliceBehaviorBase.h"
#import "SCITooltipBehaviorBase+Protected.h"
#import "SCIFunc1.h"
#import "SCISlice.h"
#import "SCISliceLayout.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIVerticalSliceBehaviorBase`.
 */
@interface SCIVerticalSliceBehaviorBase (Protected)

/**
 * Create new layout which will be used for layout of `slices` collection.
 * @return The layout to use
 */
- (SCISliceLayout *)createSliceLayout;

/**
 * Tries to update all of the `slice` instance tooltips.
 * @param slice The `Slice` to update.
 * @param point The point where the slice should be updated.
 */
- (void)tryUpdateSliceTooltips:(SCISlice *)slice atPoint:(CGPoint)point;

/**
 * Removes slice from specified `SCISliceLayout`.
 * @param slice The slice to remove.
 * @param sliceLayout The parent layout to remove from.
 */
- (void)removeSlice:(SCISlice *)slice fromLayout:(SCISliceLayout *)sliceLayout;

@end

NS_ASSUME_NONNULL_END
