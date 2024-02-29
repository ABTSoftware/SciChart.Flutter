//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisCore.h"
#import "SCIAxisParams.h"

/**
 * Defines a base class for axes used throughout SciChart SDK.
 * @note `T` is the type of data used by this axis.
 */
@interface SCIAxisCore<T : id<ISCIComparable>> : NSObject<ISCIAxisCore> {
@protected
    /// :nodoc:
    SCIAxisParams _axisParams;
}

/**
 * Creates a new instance of `SCIAxisCore` class.
 * @param defaultNonZeroRange The default non zero ISCIRange` instance for this axis.
 */
- (nonnull instancetype)initWithDefaultRange:(nonnull id<ISCIRange>)defaultNonZeroRange NS_DESIGNATED_INITIALIZER;

/**
 * Invalidate current axis.
 * @param isAxisDirty YES - if axis layout has changed.
 */
- (void)invalidateElementWithAxisDirty:(BOOL)isAxisDirty;

/**
 * Checks whether `ISCIRange` instance is valid for current axis.
 * @param visibleRange The range to check.
 * @return YES - if range instance is valid, otherwise - NO.
 */
- (BOOL)isValidVisibleRange:(nullable id<ISCIRange>)visibleRange;

@end
