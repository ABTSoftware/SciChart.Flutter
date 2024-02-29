//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIVerticallyStackedSeriesCollection+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIStackedSeriesCollectionBase+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIVerticallyStackedSeriesCollection`.
 */
@interface SCIVerticallyStackedSeriesCollection ()

@property (strong, nonatomic) SCISmartPropertyBool *isOneHundredPercentProperty;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIVerticallyStackedSeriesCollection`.
 */
@interface SCIVerticallyStackedSeriesCollection (Protected)

/**
 * Used internally to determine which x Values does have y values, and which doesn't have them.
 * @param xPointHasYValues Array which contains information about the positions of the x values.
 */
- (void)updateXValuesPositions:(SCIIntegerValues *)xPointHasYValues;

@end

NS_ASSUME_NONNULL_END
