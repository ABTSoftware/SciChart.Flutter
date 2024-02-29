//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieSegmentSelectionModifier+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPieSegmentSelectionModifier.h"
#import "ISCIPieRenderableSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIPieSegmentSelectionModifier`.
 */
@interface SCIPieSegmentSelectionModifier (Protected)

/**
 * Tries to set `SCIPieSegmentSelectionModifier.selectedSegmentStyle` on the passed in `ISCIPieSegment` instance.
 * @param segment The `ISCIPieSegment` instance to set style on.
 */
- (void)trySetStyleOnSegment:(id<ISCIPieSegment>)segment;

/**
 * Try to perform selection at specified coordinates.
 * @param point The coordinates of point to hit test.
 */
- (void)tryPerformSelectionAt:(CGPoint)point;

/**
 * Performs selection on specified `ISCIPieSegment` instance.
 * @param segment The segment to perform selection on
 */
- (void)performSelection:(id<ISCIPieSegment>)segment;

/**
 * When overridden in derived classes, indicates whether `SCIPieHiTestInfo` result of hit-test is valid
 * @param hitTestInfo The `SCIPieHiTestInfo` instance which will be checked.
 * @return True if the associated instance of the `SCIPieHiTestInfo` is valid, else - false.
 */
- (BOOL)isHitPointValid:(SCIPieHitTestInfo *)hitTestInfo;

/**
 * Deselects all selected `ISCIPieSegment` instance  except passed in `segment`.
 * @param segment The `ISCIPieSegment` which should remain selected.
 */
- (void)deselectAllBut:(id<ISCIPieSegment>)segment;

/**
 * Deselects all selected `ISCIPieSegment` instances.
 */
- (void)deselectAll;

@end

NS_ASSUME_NONNULL_END
