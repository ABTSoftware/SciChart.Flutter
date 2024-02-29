//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// UIView+Util.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIView.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * :nodoc:
 */
@interface SCIView (Util)

/**
 * Adds a child if the `child` is not nil and if the `View` does not contain the `child`.
 * @param child The child to be added into the `View`.
 */
- (void)safeAddSubview:(SCIView *)child;

/**
 * Adds a child at specified index if the `child` is not nil and if the `View` does not contain the `child`.
 * @param child The child to be added into the `View`.
 * @param index The position at which to add the child.
 */
- (void)safeInsertSubview:(SCIView *)child atIndex:(int)index;

/**
 * Remove a child if the `child` is not nil and if `View` contains the `child`.
 * @param child The child to be removed from the `View`.
 */
- (void)safeRemoveFromSuperview:(NSObject *)child;

@end

NS_ASSUME_NONNULL_END
