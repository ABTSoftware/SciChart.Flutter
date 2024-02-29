//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRangeChangeObserver.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIComparable.h"
#import "SCIRangeClipMode.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the block for listening changes of `ISCIRange` implementors.
 * Called when observed range instance has changed.
 * @param oldMin The old min value.
 * @param oldMax The old max value.
 * @param newMin The new min value.
 * @param newMax The new max value.
 * @param changedProperty The flags indicating which parts of range has changed.
 */
typedef void (^SCIRangeChangeObserver) (id<ISCIComparable> oldMin, id<ISCIComparable> oldMax, id<ISCIComparable> newMin, id<ISCIComparable> newMax, SCIRangeClipMode changedProperty);

NS_ASSUME_NONNULL_END
