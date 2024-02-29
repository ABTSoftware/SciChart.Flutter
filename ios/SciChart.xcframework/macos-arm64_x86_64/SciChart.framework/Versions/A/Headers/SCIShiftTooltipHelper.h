//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIShiftTooltipHelper.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "SCIView.h"
#import "SCIPlacement.h"
#import "SCIModifierEventArgs.h"

/**
 * Helper class which used to shift tooltip placement point .
 */
@interface SCIShiftTooltipHelper : NSObject

/**
 * Compute the shifted point according to passed in params.
 * @param point The original point which is going to be shifter.
 * @param customPointOffset If it's not `CGPointZero` - then `offset` will be ignored, and this custom one will be applied.
 * @param markerPlacement The marker placement to be used during calculations.
 * @param offset The offset which is applied in X-Y directions, according to `markerPlacement.
 * @return Computed shifited point.
 */
+ (CGPoint)getShiftedPoint:(CGPoint)point customPointOffset:(CGPoint)customPointOffset markerPlacement:(SCIPlacement)markerPlacement offset:(CGFloat)offset;

@end
