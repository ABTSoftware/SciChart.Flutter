//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMessageSubscriptionToken.h is part of SCICHART®, High Performance Scientific Charts
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

@protocol ISCIEventAggregator;

NS_ASSUME_NONNULL_BEGIN

/**
 * Represents an active subscription to a message.
 */
@interface SCIMessageSubscriptionToken : SCIDisposableBase

/**
 * Defines the type of the message.
 */
@property (nonatomic, readonly) Class messageType;

/**
 * Initializes a new instance of the `SCIMessageSubscriptionToken` class.
 * @param eventAggregator The `ISCIEventAggregator` instance to be used in this `SCIMessageSubscriptionToken` instance.
 * @param messageType Type of message.
 */
- (instancetype)initWith:(id<ISCIEventAggregator>)eventAggregator messageType:(Class)messageType;

@end

NS_ASSUME_NONNULL_END
