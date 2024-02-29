//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCILayoutable.h is part of SCICHART®, High Performance Scientific Charts
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

#import <CoreGraphics/CGBase.h>
#import <CoreGraphics/CGGeometry.h>

/**
 * Defines interface for elements which can be placed by `ISCILayoutManager`.
 */
@protocol ISCILayoutable <NSObject>

/**
 * Places this instance relative to parent `SCIChartSurface`.
 * @param left left position of area relative to parent `SCIChartSurface`.
 * @param top top position of area relative to parent `SCIChartSurface`.
 * @param right right position of area relative to parent `SCIChartSurface`.
 * @param bottom bottom position of area relative to parent `SCIChartSurface`.
 */
- (void)layoutAreaWithLeft:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom;

/**
 * Gets `CGRect` with layout placement.
 */
@property (nonatomic, readonly) CGRect layoutRect;

/**
 * Get the `CGSize` of layout placement rect.
 */
@property (nonatomic, readonly) CGSize layoutSize;

@end
