//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartSurface+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPieChartSurface.h"
#import "SCIAction.h"
#import "SCINotifiableSmartProperty.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "SCINotifiableSmartPropertyInt.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIPieChartSurface`.
 */
@interface SCIPieChartSurface ()

@property (nonatomic, readonly) SCIAction invalidateElementListener;
@property (nonatomic, readonly) SCIAction invalidateLayoutListener;

@property (strong, nonatomic, readonly) SCISmartProperty *backgroundBrushStyleProperty;

@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *holeRadiusProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyInt *holeRadiusSizingModeProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *seriesSpacingProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyInt *seriesSpacingModeProperty;

@end

NS_ASSUME_NONNULL_END
