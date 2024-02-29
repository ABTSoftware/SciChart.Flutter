//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisLayoutState.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * The class with information about current layout state of `SCIAxisBase`.
 */
@interface SCIAxisLayoutState : NSObject<ISCICleanable>

/**
 * The axis size in pixels.
 */
@property (nonatomic) CGFloat axisSize;

/**
 * Additional left size required by axis for correct rendering.
 */
@property (nonatomic) CGFloat additionalLeftSize;

/**
 * Additional top size required by axis for correct rendering.
 */
@property (nonatomic) CGFloat additionalTopSize;

/**
 * Additional right size required by axis for correct rendering.
 */
@property (nonatomic) CGFloat additionalRightSize;

/**
 * Additional bottom size required by axis for correct rendering.
 */
@property (nonatomic) CGFloat additionalBottomSize;

@end
