//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartLayoutState.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import <CoreGraphics/CoreGraphics.h>

/// Proivdes default size of AxisArea
extern const CGFloat SCIDefaultAxisAreaSize;

/**
 * The helper class with data for the current layout pass.
 */
@interface SCIChartLayoutState : NSObject<ISCICleanable>

/**
 * The size of the left aligned area within `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat leftInnerAreaSize;

/**
 * The size of the top aligned area within `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat topInnerAreaSize;

/**
 * The size of the bottom aligned area within `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat bottomInnerAreaSize;

/**
 * The size of the right aligned area within `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat rightInnerAreaSize;

/**
 * The size of the area which lies to the left of `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat leftOuterAreaSize;

/**
 * The size of the area which lies above `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat topOuterAreaSize;

/**
 * The size of the area which lies below `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat bottomOuterAreaSize;

/**
 * The size of the area which lies to the left of `ISCIRenderableSeriesArea`.
 */
@property (nonatomic) CGFloat rightOuterAreaSize;

@end
