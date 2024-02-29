//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIMessageSubscription.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIMessage.h"

@class SCIMessageSubscriptionToken;

/**
 * Represents a message subscription.
 */
@protocol ISCIMessageSubscription <NSObject>

/**
 * Gets token returned to the subscribed to reference this subscription.
 */
@property (strong, nonatomic, readonly, nonnull) SCIMessageSubscriptionToken *subscriptionToken;

/**
 * Deliver the message.
 * @param message The `m`essage` to deliver.
 */
- (void)deliver:(nonnull id<ISCIMessage>)message;

@end
