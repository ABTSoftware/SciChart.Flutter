//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICompositeHitProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIHitProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a composite `hit provider` which composes hit results from several `ISCIHitProvider`s.
 */
@interface SCICompositeHitProvider : NSObject<ISCIHitProvider>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCICompositeHitProvider`.
 * @param provider1 The first `ISCIHitProvider`.
 * @param provider2 The second `ISCIHitProvider`.
 */
- (instancetype)initWithProvider1:(id<ISCIHitProvider>)provider1 provider2:(id<ISCIHitProvider>)provider2;

/**
 * Creates a new instance of `SCICompositeHitProvider`.
 * @param provider1 The first `ISCIHitProvider`.
 * @param provider2 The second `ISCIHitProvider`.
 * @param provider3 The third `ISCIHitProvider`.
 */
- (instancetype)initWithProvider1:(id<ISCIHitProvider>)provider1 provider2:(id<ISCIHitProvider>)provider2 provider3:(id<ISCIHitProvider>)provider3;

@end

NS_ASSUME_NONNULL_END
