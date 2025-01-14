//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUpdateSuspender.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIUpdateSuspender.h"
#import "SCIAction.h"

@protocol ISCISuspendable;

/**
 * A disposable class which allows nested suspend/resume operations on an `ISCISuspendable` target.
 */
@interface SCIUpdateSuspender : SCIDisposableBase<ISCIUpdateSuspender>

/**
 * Initializes a new instance of the `SCIUpdateSuspender` class.
 * @param target The target instance.
 */
- (nonnull instancetype)initWithTarget:(nonnull id<ISCISuspendable>)target;

/**
 * Gets a value indicating whether updates for this instance are currently suspended.
 * @param target Target to check.
 * @return YES if target's updates are suspended.
 */
+ (BOOL)isTargetSuspended:(nonnull id<ISCISuspendable>)target;

/**
 * Helper method which suspend updates on target instance while runnable is executing.
 * @param suspendable The `ISCISuspendable` which need to suspend before running runnable.
 * @param block The `SCIAction` to run code of changing state of target is suspended.
 */
+ (void)usingWithSuspendable:(nonnull id<ISCISuspendable>)suspendable withBlock:(nonnull SCIAction)block;

/**
 * Gets a value indicating whether updates for this instance are currently suspended.
 * @return List of suspended instances.
 */
+ (nonnull NSMapTable<id<ISCISuspendable>, NSNumber*> *)suspendedInstances;

@end
