//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAttachable.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIServiceContainer.h"

/**
 * Defines interface with methods which allows to attach/detach this instance to `ISCIServiceContainer`.
 */
@protocol ISCIAttachable <NSObject>

/**
 * Attaches this instance to the instance of `ISCIServiceContainer`.
 * @param services The target instance of `ISCIServiceContainer`.
 */
- (void)attachTo:(nonnull id<ISCIServiceContainer>)services;

/**
 * Detaches this instance from currently attached `ISCIServiceContainer`
 */
- (void)detach;

/**
 * Gets whether this instance is attached on not.
 */
@property (nonatomic, readonly) BOOL isAttached;

@end
