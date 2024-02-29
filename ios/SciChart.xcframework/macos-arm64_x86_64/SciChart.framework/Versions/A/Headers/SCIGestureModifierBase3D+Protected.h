//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGestureModifierBase3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase3D.h"
#import "SCIChartModifier3DBase+Protected.h"
#import "SCIGestureModifierEventArgs.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIGestureModifierBase3D`.
 */
@interface SCIGestureModifierBase3D ()

/**
 * Removes current recognizer from view, and adds a new one returned by createGestureRecognizer
 */
- (void)reCreateGestureRecognizer;

/**
 * Creates gesture recognizer for current modifier.
 * @note Should be overriden by inheritors.
 */
- (SCIGestureRecognizer *)createGestureRecognizer;

/**
 * Called when underlying `GestureRecognizer` changes it's state to `began`.
 * @param args The gesture event args for this event.
 */
- (void)onGestureBeganWithArgs:(SCIGestureModifierEventArgs *)args;

/**
 * Called when underlying `GestureRecognizer` changes it's state to `changed`.
 * @param args The gesture event args for this event.
 */
- (void)onGestureChangedWithArgs:(SCIGestureModifierEventArgs *)args;

/**
 * Called when underlying `GestureRecognizer` changes it's state to `ended`.
 * @param args The gesture event args for this event.
 */
- (void)onGestureEndedWithArgs:(SCIGestureModifierEventArgs *)args;

/**
 * Called when underlying `GestureRecognizer` changes it's state to `cancelled`.
 * @param args The gesture event args for this event.
 */
- (void)onGestureCancelledWithArgs:(SCIGestureModifierEventArgs *)args;

@end

NS_ASSUME_NONNULL_END
