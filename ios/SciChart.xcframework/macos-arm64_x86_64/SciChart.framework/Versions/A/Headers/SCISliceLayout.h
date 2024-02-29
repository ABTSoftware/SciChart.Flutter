//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISliceLayout.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIViewContainer.h"

@class SCIVerticalSliceBehaviorBase;

NS_ASSUME_NONNULL_BEGIN

/**
 * A default layout which is used to place `SCISlice`.
 */
@interface SCISliceLayout : SCIViewContainer

/// :nodoc:
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;

/// :nodoc:
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCISliceLayout` class.
 * @param behavior The `SCIVerticalSliceBehaviorBase` instance to be used in this `SCISliceLayout` instance.
 */
- (instancetype)initWithBehavior:(SCIVerticalSliceBehaviorBase *)behavior NS_DESIGNATED_INITIALIZER;

/**
 * Arranges child `SCISlice`s.
 */
- (void)arrangeSubviews;

@end

NS_ASSUME_NONNULL_END
