//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIVisibleRangeChangeListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRange.h"

@protocol ISCIAxisCore;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines interface for listening of visible range changes for this axis.
 * Called when `ISCIAxisCore.visibleRange` property changed.
 * @param axis The target axis.
 * @param oldRange The old VisibleRange.
 * @param newRange The new VisibleRange.
 * @param isAnimating Flag indicating whether the VisibleRange is animating.
 */
typedef void (^SCIVisibleRangeChangeListener) (id<ISCIAxisCore> axis, id<ISCIRange> oldRange, id<ISCIRange> newRange, BOOL isAnimating);

NS_ASSUME_NONNULL_END
