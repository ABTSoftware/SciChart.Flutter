//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICompositePathColor.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisposableBase.h"
#import "ISCIPen2D.h"
#import "ISCIBrush2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a composite path color which composes `ISCIPen2D` and `ISCIBrush2D`.
 * @note Used by `ISCIRenderContext2D` to draw fills and lines at the same time..
 */
@interface SCICompositePathColor : SCIDisposableBase<ISCIPathColor>

/**
 * Gets the `ISCIPen2D` instance.
 */
@property (strong, nonatomic, readonly) id<ISCIPen2D> pen;

/**
 * Gets the `ISCIBrush2D` instance.
 */
@property (strong, nonatomic, readonly) id<ISCIBrush2D> brush;

/**
 * Creates a new instance of `SCICompositePathColor` class.
 * @param pen The `ISCIPen2D` instance.
 * @param brush The `ISCIBrush2D` instance.
 */
- (instancetype)initWithPen:(id<ISCIPen2D>)pen andBrush:(id<ISCIBrush2D>)brush;

@end

NS_ASSUME_NONNULL_END
