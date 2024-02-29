//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderableSeriesProviderBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "ISCIRenderableSeriesCore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides base class for renderable series providers.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIRenderableSeriesProviderBase<TRenderableSeries: id<ISCIRenderableSeriesCore>> : NSObject<ISCIAttachable>

/**
 * Gets associated `ISCIRenderableSeriesCore` iinstance.
 */
@property (weak, nonatomic, readonly) TRenderableSeries renderableSeries;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIRenderableSeriesProviderBase` class.
 * @param renderableSeriesType The type of supported renderable series
 */
- (instancetype)initWithRenderableSeriesType:(Class)renderableSeriesType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
