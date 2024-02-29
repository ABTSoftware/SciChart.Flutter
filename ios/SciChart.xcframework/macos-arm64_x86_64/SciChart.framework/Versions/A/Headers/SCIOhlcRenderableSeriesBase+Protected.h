//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIOhlcRenderableSeriesBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesBase+Protected.h"
#import "SCIOhlcRenderPassData.h"
#import "ISCISeriesDrawingManager.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIOhlcRenderableSeriesBase`.
 */
@interface SCIOhlcRenderableSeriesBase ()

@property (strong, nonatomic) SCISmartProperty *strokeUpStyleProperty;
@property (strong, nonatomic) SCISmartProperty *strokeDownStyleProperty;

@property (strong, nonatomic) SCISmartPropertyDouble *dataPointWidthProperty;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIOhlcRenderableSeriesBase`.
 */
@interface SCIOhlcRenderableSeriesBase (Protected)

/**
 * Draws this series as vertical lines.
 * @param assetManager The `ISCIAssetManager2D` for this render pass.
 * @param drawingManager The `ISCISeriesDrawingManager` for this render pass.
 * @param renderPassData The current render pass data.
 */
- (void)drawAsLinesWithAssetManager:(id<ISCIAssetManager2D>)assetManager drawingManager:(id<ISCISeriesDrawingManager>)drawingManager renderPassData:(SCIOhlcRenderPassData *)renderPassData;

@end

NS_ASSUME_NONNULL_END
