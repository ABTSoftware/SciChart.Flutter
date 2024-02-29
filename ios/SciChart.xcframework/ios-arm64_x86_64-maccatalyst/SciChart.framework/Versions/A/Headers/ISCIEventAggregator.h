//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIEventAggregator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIMessageSubscriptionToken.h"
#import "ISCIMessage.h"
#import "SCIAction1.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a lightweight Event Aggregator used within SciChart for inter-component communication.
 */
@protocol ISCIEventAggregator <NSObject>

/**
 * Subscribe to a message type with the given destination and delivery action.
 * @param messageType Type of message.
 * @param deliveryAction Action to invoke when message is delivered.
 * @return `SCIMessageSubscriptionToken` used to unsubscribe from messages.
 */
- (SCIMessageSubscriptionToken *)subscribeTo:(Class)messageType action:(SCIAction1)deliveryAction;

/**
 * Subscribe to a message type with the given destination and delivery action.
 * @param messageType Type of message.
 * @param deliveryAction Action to invoke when message is delivered.
 * @param useStrongReferences Use strong references to destination and deliveryAction.
 * @return `SCIMessageSubscriptionToken` used to unsubscribe from messages.
 */
- (SCIMessageSubscriptionToken *)subscribeTo:(Class)messageType action:(SCIAction1)deliveryAction useStrongReference:(BOOL)useStrongReferences;

/**
 * Unsubscribe from a particular message type.
 * @param subscriptionToken Type of message.
 */
- (void)unsubscibe:(SCIMessageSubscriptionToken *)subscriptionToken;

/**
 * Publish a message to any subscribers.
 * @param message The published message.
 */
- (void)publish:(id<ISCIMessage>)message;

@end

NS_ASSUME_NONNULL_END
