//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIVisibleRangeAnimatorListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAnimatorListener.h"
#import "SCIValueAnimator.h"
#import "SCIAxisBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the `ISCIAnimatorListener` which is used in `SCIVisibleRangeAnimator`.
 */
@interface SCIVisibleRangeAnimatorListener : NSObject<ISCIAnimatorListener>

/**
 * The `ISCIAxisCore` to animate its visible range.
 */
@property (weak, nonatomic) id<ISCIAxisCore> axis;

/**
 * The Min value to start animation from.
 */
@property (nonatomic, readonly) double fromMin;

/**
 * The Max value to start animation from.
 */
@property (nonatomic, readonly) double fromMax;

/**
 * The Min value to animate to.
 */
@property (nonatomic) double toMin;

/**
 * The Max value to animate to.
 */
@property (nonatomic) double toMax;

@end

NS_ASSUME_NONNULL_END
