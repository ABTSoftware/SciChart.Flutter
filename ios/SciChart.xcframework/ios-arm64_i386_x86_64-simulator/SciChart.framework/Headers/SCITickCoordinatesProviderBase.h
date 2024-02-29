//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITickCoordinatesProviderBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisProviderBase.h"
#import "ISCITickCoordinatesProvider.h"

@protocol ISCIAxisCore;

/**
 * Abstract base implementation of `ISCITickCoordinatesProvider`.
 */
@interface SCITickCoordinatesProviderBase : SCIAxisProviderBase<id<ISCIAxisCore>><ISCITickCoordinatesProvider>

/**
 * Creates a new instance of `SCITickCoordinatesProviderBase` class.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

/// :nodoc:
- (instancetype)initWithAxisType:(Protocol *)axisType NS_UNAVAILABLE;

@end
