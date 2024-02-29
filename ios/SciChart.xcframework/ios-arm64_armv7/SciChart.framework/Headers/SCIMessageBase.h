//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMessageBase.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 *  Base class for messages published/delivered by `ISCIEventAggregator`.
 */
@interface SCIMessageBase : NSObject<ISCIMessage>

/**
 * Initializes a new instance of the `SCIMessageBase` class.
 * @param sender The sender of message.
 */
- (instancetype)initWithSender:(id)sender;

@end

NS_ASSUME_NONNULL_END