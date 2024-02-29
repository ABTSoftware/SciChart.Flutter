//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCISeriesRenderPassData.h"
#import "SCIIndexRange.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base implementation of `ISCISeriesRenderPassData`, the data used in a single render pass by `ISCIRenderableSeriesBase` derived types.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCISeriesRenderPassData : SCIDisposableBase<ISCISeriesRenderPassData> {
    /// Below fields for internal use only. For any other usage there's readonly properties available through `ISCISeriesRenderPassData`
@protected
    /// Defines the current `X-Axis` coordinate calculator.
    id<ISCICoordinateCalculator> _xCoordCalc;
    
    /// Defines the current `Y-Axis` coordinate calculator.
    id<ISCICoordinateCalculator> _yCoordCalc;
    
    /// Defines the current viewport size.
    CGSize _viewportSize;
}

/**
 * Gets the point range in `X-Direction` for the current render pass.
 */
@property (strong, nonatomic, readonly) SCIIndexRange *xPointRange;

/**
 * Creates a new instance of `SCISeriesRenderPassData` class.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
