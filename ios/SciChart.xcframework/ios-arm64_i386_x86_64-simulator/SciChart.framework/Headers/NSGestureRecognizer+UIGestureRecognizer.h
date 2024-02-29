//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// NSGestureRecognizer+UIGestureRecognizer.h is part of SCICHART®, High Performance Scientific Charts
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

#import <TargetConditionals.h>

#if TARGET_OS_OSX

#import <AppKit/NSGestureRecognizer.h>
#import "SCIEventModifierFlags.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSGestureRecognizer (UIGestureRecognizer)

/**
 * Returns the number of touches involved in the gesture represented by the receiver.
 * @note These values are not considered as requirements for the gesture.
 */
@property (nonatomic, readonly) NSUInteger numberOfTouches;

/**
 * Gets values from the last event processed.
 * @note These values are not considered as requirements for the gesture.
 */
@property (nonatomic, readonly) SCIEventModifierFlags modifierFlags;

/**
 * Adds a target and an action to a gesture-recognizer object.
 * @param target An object that is a recipient of action messages sent by the receiver when the represented gesture occurs.
 * @param action A selector identifying a method of a target to be invoked by the action message.
 */
- (void)addTarget:(id)target action:(SEL)action;

/**
 * Removes a target and an action from a gesture-recognizer object.
 * @param target An object that is a recipient of action messages sent by the receiver when the represented gesture occurs.
 * @param action A selector identifying a method of a target to be invoked by the action message.
 */
- (void)removeTarget:(id)target action:(SEL)action;

@end

NS_ASSUME_NONNULL_END

#endif
