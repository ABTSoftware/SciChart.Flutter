//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeries+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIDataSeries`.
 */
@interface SCIDataSeries (SCIDataSeriesProtected)

/**
 * Sets the total extents of the `SCIDataSeries` in the X-direction.
 * @param xRange The range to set.
 */
- (void)updateXRange:(id<ISCIRange>)xRange;

/**
 * Sets the total extents of the `SCIDataSeries` in the Y-direction.
 * @param yRange The range to set.
 */
- (void)updateYRange:(id<ISCIRange>)yRange;

@end

NS_ASSUME_NONNULL_END
