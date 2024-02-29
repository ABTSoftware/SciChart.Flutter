//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisProviderBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisProviderBase.h"

@protocol ISCIAxisCore;

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides abstract base class for axis providers.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIAxisProviderBase<T : id<ISCIAxisCore>> : NSObject<ISCIAxisProviderBase>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIAxisProviderBase` class.
 * @param axisType The type of axis with which this provider will be associated.
 */
- (instancetype)initWithAxisType:(Protocol *)axisType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
