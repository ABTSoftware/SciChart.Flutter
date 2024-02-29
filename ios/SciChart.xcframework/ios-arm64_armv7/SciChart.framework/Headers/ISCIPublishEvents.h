//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPublishEvents.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIReceiveEvents.h"

/**
 * Defines the protocol to a class which publishes motion events.
 */
@protocol ISCIPublishEvents <NSObject>

/**
 * Adds an events receiver to this source.
 * @param receiver The receiver to add.
 */
- (void)addEventReceiver:(nonnull id<ISCIReceiveEvents>)receiver;

/**
 * Removes an events receiver from this source.
 * @param receiver The receiver to remove.
 */
- (void)removeEventReceiver:(nonnull id<ISCIReceiveEvents>)receiver;

@end
