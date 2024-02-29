//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesInfo3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesInfo3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCISeriesInfo3D`.
 */
@interface SCISeriesInfo3D ()

/**
 * Returns a value formatted using X axis format for cursors.
 *
 * @param xValue The value to format
 * @return The formatted value
 */
- (id<ISCIString>)formatXCursorValue:(id<ISCIComparable>)xValue;

/**
 * Returns a value formatted using Y axis format for cursors.
 *
 * @param yValue The value to format
 * @return The formatted value
 */
- (id<ISCIString>)formatYCursorValue:(id<ISCIComparable>)yValue;

/**
 * Returns a value formatted using Z axis format for cursors.
 *
 * @param zValue The value to format
 * @return The formatted value
 */
- (id<ISCIString>)formatZCursorValue:(id<ISCIComparable>)zValue;

@end

NS_ASSUME_NONNULL_END
