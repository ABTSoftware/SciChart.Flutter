//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISuspendable.h is part of SCICHART®, High Performance Scientific Charts
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

@protocol ISCIUpdateSuspender;

/**
 * Classes which implement `ISCISuspendable` can have updates suspended/resumed.
 * @note Useful for batch operations.
 */
@protocol ISCISuspendable <NSObject>

/**
 * Gets a value indicating whether updates for the target are currently suspended.
 */
@property (nonatomic, readonly) BOOL isSuspended;

/**
 * Suspends drawing updated on the target until the returned object is disposed, when a final draw call will be issued.
 * @return `ISCIUpdateSuspender` instance which suspends updated until it will be disposed.
 */
- (nonnull id<ISCIUpdateSuspender>)suspendUpdates;

/**
 * Resumes updates on the target, intended to e called by `ISCIUpdateSuspender`.
 * @param suspender `ISCIUpdateSuspender` instance which was created by `-suspendUpdates` call.
 */
- (void)resumeUpdates:(nonnull id<ISCIUpdateSuspender>)suspender;

/**
 * Called by `ISCIUpdateSuspender` each time a target suspender is disposed. When the final target suspender has been disposed.
 */
- (void)decrementSuspend;

@end
