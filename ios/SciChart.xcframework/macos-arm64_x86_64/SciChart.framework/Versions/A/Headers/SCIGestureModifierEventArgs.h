//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGestureModifierEventArgs.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIModifierEventArgs.h"
#import "SCIGestureRecognizer.h"

/**
 * Defines a gesture event args, used by various classes within SciChart to process events produced by gesture recognizers.
 */
@interface SCIGestureModifierEventArgs : SCIModifierEventArgs

/**
 * Defines current gesture recognizer which is used to detect gestures.
 */
@property (weak, nonatomic, nullable) SCIGestureRecognizer *gestureRecognizer;

@end
