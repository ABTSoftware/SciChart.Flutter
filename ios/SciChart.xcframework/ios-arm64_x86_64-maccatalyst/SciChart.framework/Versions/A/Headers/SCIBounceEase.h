//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBounceEase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIEasingFunctionBase.h"

/**
 * Defines an easing function that can be used to simulate bouncing.
 */
@interface SCIBounceEase : SCIEasingFunctionBase

/**
 * Specifies the number of bounces. This does not include the final half bounce.
 */
@property (nonatomic) int bounces;

/**
 * Specifies the amount of bounciness. This corresponds to the scale difference between a bounce and the next bounce.
 * @note For example, `bounciness = 2.0` corresponds to the next bounce being twices as high and taking twice as long.
 */
@property (nonatomic) double bounciness;

@end
