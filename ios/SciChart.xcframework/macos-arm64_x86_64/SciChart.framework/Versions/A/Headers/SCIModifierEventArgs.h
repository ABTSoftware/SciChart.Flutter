//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIModifierEventArgs.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIButtonMask.h"
#import <CoreGraphics/CGGeometry.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an event args, used by various classes within SciChart to process motion events.
 */
@interface SCIModifierEventArgs : NSObject<ISCICleanable>

/**
 * Source of the event.
 */
@property (weak, nonatomic) id source;

/**
 * Returns the location at which the associated gesture occurred.
 */
@property (nonatomic) CGPoint location;

/**
 * Gets number of pointers which used to generate this `ISCIEvent`.
 */
@property (nonatomic) NSUInteger pointersCount;

/**
 * A bit mask of the button (or buttons) recognized during the event.
 * @see `SCIButtonMask`
 */
@property (nonatomic, readonly) SCIButtonMask buttonMask API_AVAILABLE(ios(13.4)) API_UNAVAILABLE(tvos, watchos);

/**
 * If YES - then this event occurred on a master `ISCIPublishEvents`.
 */
@property (nonatomic) BOOL isMaster;

/**
 * If YES - then this  event occurred inside the master `ISCIPublishEvents`.
 */
@property (nonatomic) BOOL isInSourceBounds;

/**
 * Gets or sets whether this event is Handled.
 */
@property (nonatomic) BOOL isHandled;

/**
 * Updates current event args, with passed in new args.
 * @param args Arguments to update current instantce of `SCIModifierEventArgs` with.
 */
- (void)updateWithArgs:(SCIModifierEventArgs *)args;

@end

NS_ASSUME_NONNULL_END
