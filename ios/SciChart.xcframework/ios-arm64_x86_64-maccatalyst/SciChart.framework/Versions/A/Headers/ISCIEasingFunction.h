//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIEasingFunction.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * This protocol represents a transformation of `normalizedTime`.
 * Animations use it to transform their progress before computing an interpolation.
 * @note Classes that implement this interface can control the pace at which an animation is performed.
 */
@protocol ISCIEasingFunction <NSObject>

/**
 * Transforms normalized time to control the pace of an animation.
 * @param normalizedTime The progress of the animation.
 * @return Transformed progress of animation.
 */
- (double)easeWithNormalizedTime:(double)normalizedTime;

@end
