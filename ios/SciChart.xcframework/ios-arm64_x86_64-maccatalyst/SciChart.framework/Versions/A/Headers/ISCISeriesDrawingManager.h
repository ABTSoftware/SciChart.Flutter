//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesDrawingManager.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDisposable.h"
#import "ISCIRenderContext2D.h"
#import "ISCISeriesRenderPassData.h"
#import "ISCIDrawingContext.h"
#import "ISCIPathColor.h"
#import "ISCIDynamicPathColorProvider.h"
#import "ISCICandlestickDynamicPathColorProvider.h"
#import "SCIFloatValues.h"
#import "SCIDoubleValues.h"
#import "ISCIStrokePaletteProvider.h"
#import "ISCIFillPaletteProvider.h"
#import "ISCIPointMarkerPaletteProvider.h"
#import "ISCITexture2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface with helper methods for rendering of renderable series.
 */
@protocol ISCISeriesDrawingManager <ISCIDisposable>

#pragma mark - Drawing manager drawing cycle

/**
 * Begins drawing with this drawing manager instance.
 * @param renderContext The render context to draw on.
 * @param renderPassData The current render pass data.
 */
- (void)beginDrawWithContext:(id<ISCIRenderContext2D>)renderContext renderPassData:(id<ISCISeriesRenderPassData>)renderPassData;

/**
 * Ends drawing with this drawing manager instance.
 */
- (void)endDraw;

#pragma mark - Iterations without PaletteProvider

/**
 * Draws line strips with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw lines.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param isDigitalLine Value which indicates whether the digital line should or should not be drawn.
 * @param closeGaps Value which indicates whether to close gaps or not.
 */
- (void)iterateLinesWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords isDigitalLine:(BOOL)isDigitalLine closeGaps:(BOOL)closeGaps;

/**
 * Draws line strips with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw lines.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param xaCoords The `SCIFloatValues` collection of `xa-coordinates`.
 * @param yaCoords The `SCIFloatValues` collection of `ya-coordinates`.
 * @param xbCoords The `SCIFloatValues` collection of `xb-coordinates`.
 * @param ybCoords The `SCIFloatValues` collection of `yb-coordinates`.
 */
- (void)iterateCubicLinesWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords xaCoords:(SCIFloatValues *)xaCoords yaCoords:(SCIFloatValues *)yaCoords xbCoords:(SCIFloatValues *)xbCoords ybCoords:(SCIFloatValues *)ybCoords;

/**
 * Draws mountain area with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw mountain area.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param isDigitalLine Value which indicates whether the digital line should or should not be drawn.
 * @param closeGaps Value which indicates whether to close gaps or not.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 */
- (void)iterateMountainAreaWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords isDigitalLine:(BOOL)isDigitalLine closeGaps:(BOOL)closeGaps zeroLine:(float)zeroLine;

/**
 * Draws mountain area using cubic bezier curves with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw lines.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param xaCoords The `SCIFloatValues` collection of `xa-coordinates`.
 * @param yaCoords The `SCIFloatValues` collection of `ya-coordinates`.
 * @param xbCoords The `SCIFloatValues` collection of `xb-coordinates`.
 * @param ybCoords The `SCIFloatValues` collection of `yb-coordinates`.
 * @param zeroLine  Value in pixels that determines the position of Y zero line on a chart.
 */
- (void)iterateCubicMountainAreaWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords xaCoords:(SCIFloatValues *)xaCoords yaCoords:(SCIFloatValues *)yaCoords xbCoords:(SCIFloatValues *)xbCoords ybCoords:(SCIFloatValues *)ybCoords zeroLine:(float)zeroLine;

/**
 * Draws points with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw points.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 */
- (void)iteratePointsWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords;

/**
 * Draws bubbles with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw bubbles.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param zCoords The `SCIFloatValues` collection of `z-coordinates`.
 */
- (void)iterateBubblesWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords zCoords:(SCIFloatValues *)zCoords;

/**
 * Draws columns as vertical lines with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw columns as lines.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 */
- (void)iterateColumnsAsLinesWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords zeroLine:(float)zeroLine;

/**
 * Draws columns with static `ISCIPathColor` instance.
 * @param fillDrawingContext The `ISCIDrawingContext` instance, which will be used to draw columns fill.
 * @param fillPathColor The pen or brush to draw columns fill.
 * @param drawRectsDrawingContext The `ISCIDrawingContext` instance, which will be used to draw columns stroke.
 * @param strokePathColor The pen or brush to draw columns stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 * @param columnWidth Value in pixels that determines each column width.
 */
- (void)iterateColumnsWith:(id<ISCIDrawingContext>)fillDrawingContext fillPathColor:(id<ISCIPathColor>)fillPathColor drawRectsDrawingContext:(id<ISCIDrawingContext>)drawRectsDrawingContext strokePathColor:(id<ISCIPathColor>)strokePathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords zeroLine:(float)zeroLine columnWidth:(float)columnWidth;

/**
 * Draws stacked columns as vertical lines with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw stacked columns as vertical lines.
 * @param pathColor The pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param prevSeriesYCoords The `SCIFloatValues` collection of previous series `y-coordinates`.
 */
- (void)iterateStackedColumnsAsLinesWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords prevSeriesYCoords:(SCIFloatValues *)prevSeriesYCoords;

/**
 * Draws stacked columns with static `ISCIPathColor` instance.
 * @param fillDrawingContext The `ISCIDrawingContext` instance, which will be used to draw columns fill.
 * @param fillPathColor The pen or brush to draw the columns fill.
 * @param drawRectsDrawingContext The `ISCIDrawingContext` instance, which will be used to draw columns stroke.
 * @param strokePathColor The pen or brush to draw the columns stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param prevSeriesYCoords The `SCIFloatValues` collection of previous series `y-coordinates`.
 * @param columnWidth Value in pixels that determines each column width.
 */
- (void)iterateStackedColumnsWith:(id<ISCIDrawingContext>)fillDrawingContext fillPathColor:(id<ISCIPathColor>)fillPathColor drawRectsDrawingContext:(id<ISCIDrawingContext>)drawRectsDrawingContext strokePathColor:(id<ISCIPathColor>)strokePathColor xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords prevSeriesYCoords:(SCIFloatValues *)prevSeriesYCoords columnWidth:(float)columnWidth;

/**
 * Draws band area with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw band area.
 * @param pathColor The pen or brush to draw the first band line.
 * @param pathColorY1 The pen or brush to draw the second band line.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param y1Coords The `SCIFloatValues` collection of `y1-coordinates`.
 * @param isDigitalLine Value which indicates whether the digital line should or should not be drawn.
 * @param closeGaps Value which indicates whether to close gaps or not.
 * @param isFlippedCoords Value which indicates whether coordinates are flipped.
 */
- (void)iterateBandAreaWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor pathColorY1:(id<ISCIPathColor>)pathColorY1 xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords y1Coords:(SCIFloatValues *)y1Coords isDigitalLine:(BOOL)isDigitalLine closeGaps:(BOOL)closeGaps isFlippedCoords:(BOOL)isFlippedCoords;

/**
 * Draws cubic band area with static `ISCIPathColor` instance.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw band area.
 * @param pathColor The pen or brush to draw the first band line.
 * @param pathColorY1 The pen or brush to draw the second band line.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param y1Coords The `SCIFloatValues` collection of `y1-coordinates`.
 * @param xaCoords The `SCIFloatValues` collection of `xa-coordinates`.
 * @param yaCoords The `SCIFloatValues` collection of `ya-coordinates`.
 * @param xbCoords The `SCIFloatValues` collection of `xb-coordinates`.
 * @param ybCoords The `SCIFloatValues` collection of `yb-coordinates`.
 * @param xa1Coords The `SCIFloatValues` collection of `xa1-coordinates`.
 * @param ya1Coords The `SCIFloatValues` collection of `ya1-coordinates`.
 * @param xb1Coords The `SCIFloatValues` collection of `xb1-coordinates`.
 * @param yb1Coords The `SCIFloatValues` collection of `yb1-coordinates`.
 * @param isFlippedCoords Value which indicates whether coordinates are flipped.
 */
- (void)iterateCubicBandAreaWith:(id<ISCIDrawingContext>)drawingContext pathColor:(id<ISCIPathColor>)pathColor pathColorY1:(id<ISCIPathColor>)pathColorY1 xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords y1Coords:(SCIFloatValues *)y1Coords xaCoords:(SCIFloatValues *)xaCoords yaCoords:(SCIFloatValues *)yaCoords xbCoords:(SCIFloatValues *)xbCoords ybCoords:(SCIFloatValues *)ybCoords xa1Coords:(SCIFloatValues *)xa1Coords ya1Coords:(SCIFloatValues *)ya1Coords xb1Coords:(SCIFloatValues *)xb1Coords yb1Coords:(SCIFloatValues *)yb1Coords isFlippedCoords:(BOOL)isFlippedCoords;

/**
 * Draws ohlc series with static `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw ohlc series.
 * @param upWickColor The pen or brush to draw the up ohlc stroke.
 * @param downWickColor The pen or brush to draw the down ohlc stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param openCoords The `SCIFloatValues` collection of `open-coordinates`.
 * @param highCoords The `SCIFloatValues` collection of `high-coordinates`.
 * @param lowCoords The `SCIFloatValues` collection of `low-coordinates`.
 * @param closeCoords The `SCIFloatValues` collection of `close-coordinates`.
 * @param openValues The `SCIDoubleValues` collection of open values.
 * @param closeValues The `SCIDoubleValues` collection of close values.
 * @param ohlcWidth Value in pixels that determines each ohlc width.
 */
- (void)iterateOhlcWith:(id<ISCIDrawingContext>)drawingContext upWickColor:(id<ISCIPathColor>)upWickColor downWickColor:(id<ISCIPathColor>)downWickColor xCoords:(SCIFloatValues *)xCoords openCoords:(SCIFloatValues *)openCoords highCoords:(SCIFloatValues *)highCoords lowCoords:(SCIFloatValues *)lowCoords closeCoords:(SCIFloatValues *)closeCoords openValues:(SCIDoubleValues *)openValues closeValues:(SCIDoubleValues *)closeValues ohlcWidth:(float)ohlcWidth;

/**
 * Draws candlesticks as vertical lines with static `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw ohlc series.
 * @param upWickColor The pen or brush to draw the up ohlc stroke.
 * @param downWickColor The pen or brush to draw the down ohlc stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param highCoords The `SCIFloatValues` collection of `high-coordinates`.
 * @param lowCoords The `SCIFloatValues` collection of `low-coordinates`.
 * @param openValues The `SCIDoubleValues` collection of open values.
 * @param closeValues The `SCIDoubleValues` collection of close values.
 */
- (void)iterateCandlesticksAsLinesWith:(id<ISCIDrawingContext>)drawingContext upWickColor:(id<ISCIPathColor>)upWickColor downWickColor:(id<ISCIPathColor>)downWickColor xCoords:(SCIFloatValues *)xCoords highCoords:(SCIFloatValues *)highCoords lowCoords:(SCIFloatValues *)lowCoords openValues:(SCIDoubleValues *)openValues closeValues:(SCIDoubleValues *)closeValues;

/**
 * Draws candlesticks with static `ISCIPathColor` provider.
 * @param fillDrawingContext The `ISCIDrawingContext` instance, which will be used to draw candles fill.
 * @param upBodyBrush The pen or brush to draw the up candles fill.
 * @param downBodyBrush The pen or brush to draw the down candles fill.
 * @param strokeDrawingContext The `ISCIDrawingContext` instance, which will be used to draw candles stroke.
 * @param upWickColor The pen or brush to draw the up candles stroke.
 * @param downWickColor The pen or brush to draw the down candles stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param openCoords The `SCIFloatValues` collection of `open-coordinates`.
 * @param highCoords The `SCIFloatValues` collection of `high-coordinates`.
 * @param lowCoords The `SCIFloatValues` collection of `low-coordinates`.
 * @param closeCoords The `SCIFloatValues` collection of `close-coordinates`.
 * @param openValues The `SCIDoubleValues` collection of open values.
 * @param closeValues The `SCIDoubleValues` collection of close values.
 * @param candleWidth Value in pixels that determines each candle width.
 */
- (void)iterateCandlesticksWith:(id<ISCIDrawingContext>)fillDrawingContext upBodyBrush:(id<ISCIPathColor>)upBodyBrush downBodyBrush:(id<ISCIPathColor>)downBodyBrush strokeDrawingContext:(id<ISCIDrawingContext>)strokeDrawingContext upWickColor:(id<ISCIPathColor>)upWickColor downWickColor:(id<ISCIPathColor>)downWickColor xCoords:(SCIFloatValues *)xCoords openCoords:(SCIFloatValues *)openCoords highCoords:(SCIFloatValues *)highCoords lowCoords:(SCIFloatValues *)lowCoords closeCoords:(SCIFloatValues *)closeCoords openValues:(SCIDoubleValues *)openValues closeValues:(SCIDoubleValues *)closeValues candleWidth:(float)candleWidth;

#pragma mark - Iterations with PaletteProvider

/**
 * Draws lines with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw lines.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 * @param isDigitalLine Value which indicates whether the digital line should or should not be drawn.
 * @param closeGaps Value which indicates whether to close gaps or not.
 */
- (void)iterateLinesWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords paletteProvider:(id<ISCIStrokePaletteProvider>)paletteProvider isDigitalLine:(BOOL)isDigitalLine closeGaps:(BOOL)closeGaps;

/**
 * Draws cubic lines with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw lines.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param xaCoords The `SCIFloatValues` collection of `xa-coordinates`.
 * @param yaCoords The `SCIFloatValues` collection of `ya-coordinates`.
 * @param xbCoords The `SCIFloatValues` collection of `xb-coordinates`.
 * @param ybCoords The `SCIFloatValues` collection of `yb-coordinates`.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 */
- (void)iterateCubicLinesWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider paletteProvider:(id<ISCIStrokePaletteProvider>)paletteProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords xaCoords:(SCIFloatValues *)xaCoords yaCoords:(SCIFloatValues *)yaCoords xbCoords:(SCIFloatValues *)xbCoords ybCoords:(SCIFloatValues *)ybCoords;

/**
 * Draws mountain area with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw mountain area.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 * @param isDigitalLine Value which indicates whether the digital line should or should not be drawn.
 * @param closeGaps Value which indicates whether to close gaps or not.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 */
- (void)iterateMountainAreaWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords paletteProvider:(id<ISCIFillPaletteProvider>)paletteProvider isDigitalLine:(BOOL)isDigitalLine closeGaps:(BOOL)closeGaps zeroLine:(float)zeroLine;

/**
 * Draws cubic mountain area with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw mountain area.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param xaCoords The `SCIFloatValues` collection of `xa-coordinates`.
 * @param yaCoords The `SCIFloatValues` collection of `ya-coordinates`.
 * @param xbCoords The `SCIFloatValues` collection of `xb-coordinates`.
 * @param ybCoords The `SCIFloatValues` collection of `yb-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 */
- (void)iterateCubicMountainAreaWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider paletteProvider:(id<ISCIFillPaletteProvider>)paletteProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords xaCoords:(SCIFloatValues *)xaCoords yaCoords:(SCIFloatValues *)yaCoords xbCoords:(SCIFloatValues *)xbCoords ybCoords:(SCIFloatValues *)ybCoords zeroLine:(float)zeroLine;

/**
 * Draws points with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw points.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 */
- (void)iteratePointsWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords paletteProvider:(id<ISCIPointMarkerPaletteProvider>)paletteProvider;

/**
 * Draws bubbles with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw bubbles.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param zCoords The `SCIFloatValues` collection of `z-coordinates`.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 */
- (void)iterateBubblesWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords zCoords:(SCIFloatValues *)zCoords paletteProvider:(id<ISCIFillPaletteProvider>)paletteProvider;

/**
 * Draws columns as vertical lines with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw column as lines.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param paletteProvider The `ISCIStrokePaletteProvider` instance.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 */
- (void)iterateColumnsAsLinesWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords paletteProvider:(id<ISCIStrokePaletteProvider>)paletteProvider zeroLine:(float)zeroLine;

/**
 * Draws columns with dynamic `ISCIPathColor` provider.
 * @param fillDrawingContext The `ISCIDrawingContext` instance, which will be used to draw columns fill.
 * @param dynamicFillPathColorProvider Dynamic pen or brush to draw columns fill.
 * @param drawRectsDrawingContext The `ISCIDrawingContext` instance, which will be used to draw columns stroke.
 * @param dynamicStrokePathColorProvider Dynamic pen or brush to draw columns stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param strokePaletteProvider The `ISCIStrokePaletteProvider` instance used to provide stroke colors.
 * @param fillPaletteProvider The `ISCIFillPaletteProvider` instance used to provide fill colors.
 * @param zeroLine Value in pixels that determines the position of Y zero line on a chart.
 * @param columnWidth Value in pixels that determines each column width.
 */
- (void)iterateColumnsWith:(id<ISCIDrawingContext>)fillDrawingContext dynamicFillPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicFillPathColorProvider drawRectsDrawingContext:(id<ISCIDrawingContext>)drawRectsDrawingContext dynamicStrokePathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicStrokePathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords strokePaletteProvider:(id<ISCIStrokePaletteProvider>)strokePaletteProvider fillPaletteProvider:(id<ISCIFillPaletteProvider>)fillPaletteProvider zeroLine:(float)zeroLine columnWidth:(float)columnWidth;

/**
 * Draws stacked columns as vertical lines with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw stacked columns.
 * @param dynamicPathColorProvider Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param prevSeriesYCoords The `SCIFloatValues` collection of previous series `y-coordinates`.
 * @param strokePaletteProvider The `ISCIStrokePaletteProvider` instance.
 */
- (void)iterateStackedColumnsAsLinesWith:(id<ISCIDrawingContext>)drawingContext dynamicPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicPathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords prevSeriesYCoords:(SCIFloatValues *)prevSeriesYCoords strokePaletteProvider:(id<ISCIStrokePaletteProvider>)strokePaletteProvider;

/**
 * Draws stacked columns with dynamic `ISCIPathColor` provider.
 * @param fillDrawingContext The `ISCIDrawingContext` instance, which will be used to draw stacked columns fill.
 * @param dynamicFillPathColorProvider Dynamic pen or brush to draw columns fill.
 * @param drawRectsDrawingContext The `ISCIDrawingContext` instance, which will be used to draw stacked columns stroke.
 * @param dynamicStrokePathColorProvider Dynamic pen or brush to draw columns stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param yCoords The `SCIFloatValues` collection of `y-coordinates`.
 * @param prevSeriesYCoords The `SCIFloatValues` collection of previous series `y-coordinates`.
 * @param strokePaletteProvider The `ISCIStrokePaletteProvider` instance used to provide stroke colors.
 * @param fillPaletteProvider The `ISCIFillPaletteProvider` instance used to provide fill colors.
 * @param columnWidth Value in pixels that determines each column width.
 */
- (void)iterateStackedColumnsWith:(id<ISCIDrawingContext>)fillDrawingContext dynamicFillPathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicFillPathColorProvider drawRectsDrawingContext:(id<ISCIDrawingContext>)drawRectsDrawingContext dynamicStrokePathColorProvider:(id<ISCIDynamicPathColorProvider>)dynamicStrokePathColorProvider xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords prevSeriesYCoords:(SCIFloatValues *)prevSeriesYCoords strokePaletteProvider:(id<ISCIStrokePaletteProvider>)strokePaletteProvider fillPaletteProvider:(id<ISCIFillPaletteProvider>)fillPaletteProvider columnWidth:(float)columnWidth;

/**
 * Draws ohlc series with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw ohlc series.
 * @param dynamicPen Dynamic `ISCICandlestickDynamicPathColorProvider` which could be pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param openCoords The `SCIFloatValues` collection of `open-coordinates`.
 * @param highCoords The `SCIFloatValues` collection of `high-coordinates`.
 * @param lowCoords The `SCIFloatValues` collection of `low-coordinates`.
 * @param closeCoords The `SCIFloatValues` collection of `close-coordinates`.
 * @param openValues The `SCIDoubleValues` collection of open values.
 * @param closeValues The `SCIDoubleValues` collection of close values.
 * @param strokePaletteProvider The `ISCIStrokePaletteProvider` instance.
 * @param ohlcWidth Value in pixels that determines each ohlc width.
 */
- (void)iterateOhlcWith:(id<ISCIDrawingContext>)drawingContext dynamicPen:(id<ISCICandlestickDynamicPathColorProvider>)dynamicPen xCoords:(SCIFloatValues *)xCoords openCoords:(SCIFloatValues *)openCoords highCoords:(SCIFloatValues *)highCoords lowCoords:(SCIFloatValues *)lowCoords closeCoords:(SCIFloatValues *)closeCoords openValues:(SCIDoubleValues *)openValues closeValues:(SCIDoubleValues *)closeValues strokePaletteProvider:(id<ISCIStrokePaletteProvider>)strokePaletteProvider ohlcWidth:(float)ohlcWidth;

/**
 * Draws candlesticks as vertical lines with dynamic `ISCIPathColor` provider.
 * @param drawingContext The `ISCIDrawingContext` instance, which will be used to draw candlestick as lines.
 * @param dynamicPen Dynamic pen or brush for the drawing operation.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param highCoords The `SCIFloatValues` collection of `high-coordinates`.
 * @param lowCoords The `SCIFloatValues` collection of `low-coordinates`.
 * @param openValues The `SCIDoubleValues` collection of open values.
 * @param closeValues The `SCIDoubleValues` collection of close values.
 * @param strokePaletteProvider The `ISCIStrokePaletteProvider` instance.
 */
- (void)iterateCandlesticksAsLinesWith:(id<ISCIDrawingContext>)drawingContext dynamicPen:(id<ISCICandlestickDynamicPathColorProvider>)dynamicPen xCoords:(SCIFloatValues *)xCoords highCoords:(SCIFloatValues *)highCoords lowCoords:(SCIFloatValues *)lowCoords openValues:(SCIDoubleValues *)openValues closeValues:(SCIDoubleValues *)closeValues strokePaletteProvider:(id<ISCIStrokePaletteProvider>)strokePaletteProvider;

/**
 * Draws candlesticks with dynamic `ISCIPathColor` provider.
 * @param fillDrawingContext The `ISCIDrawingContext` instance, which will be used to draw stacked candles fill.
 * @param dynamicBrush Dynamic pen or brush to draw candles fill.
 * @param strokeDrawingContext The `ISCIDrawingContext` instance, which will be used to draw stacked candles stroke.
 * @param dynamicPen Dynamic pen or brush to draw candles stroke.
 * @param xCoords The `SCIFloatValues` collection of `x-coordinates`.
 * @param openCoords The `SCIFloatValues` collection of `open-coordinates`.
 * @param highCoords The `SCIFloatValues` collection of `high-coordinates`.
 * @param lowCoords The `SCIFloatValues` collection of `low-coordinates`.
 * @param closeCoords The `SCIFloatValues` collection of `close-coordinates`.
 * @param openValues The `SCIDoubleValues` collection of open values.
 * @param closeValues The `SCIDoubleValues` collection of close values.
 * @param fillPaletteProvider The `ISCIFillPaletteProvider` instance used to provide fill colors.
 * @param strokePaletteProvider The `ISCIStrokePaletteProvider` instance used to provide stroke colors.
 * @param candleWidth Value in pixels that determines each candle width.
 */
- (void)iterateCandlesticksWith:(id<ISCIDrawingContext>)fillDrawingContext dynamicBrush:(id<ISCICandlestickDynamicPathColorProvider>)dynamicBrush strokeDrawingContext:(id<ISCIDrawingContext>)strokeDrawingContext dynamicPen:(id<ISCICandlestickDynamicPathColorProvider>)dynamicPen xCoords:(SCIFloatValues *)xCoords openCoords:(SCIFloatValues *)openCoords highCoords:(SCIFloatValues *)highCoords lowCoords:(SCIFloatValues *)lowCoords closeCoords:(SCIFloatValues *)closeCoords openValues:(SCIDoubleValues *)openValues closeValues:(SCIDoubleValues *)closeValues strokePaletteProvider:(id<ISCIStrokePaletteProvider>)strokePaletteProvider fillPaletteProvider:(id<ISCIFillPaletteProvider>)fillPaletteProvider candleWidth:(float)candleWidth;

#pragma mark - drawing primitives

/**
 * Draws single box with specified `fill` and `stroke`.
 * @param rect The `CGRect` coordinates in pixels.
 * @param pen The `ISCIPen2D` pen to draw rect stroke with.
 * @param brush The `SCIBrush2DProtocol` brush to fill rect with.
 */
- (void)drawRect:(CGRect)rect withPen:(id<ISCIPen2D>)pen andBrush:(id<ISCIBrush2D>)brush;

/**
 * Draws a single line using the specified `ISCIPen2D`.
 * @param pen The pen to draw line with.
 * @param start The start point coordinates in pixels.
 * @param end The end point coordinates in pixels.
 */
- (void)drawLineWithPen:(id<ISCIPen2D>)pen atStart:(CGPoint)start end:(CGPoint)end;

/**
 * Draws texture in specified rect bounds.
 * @param texture The `ISCITexture2D` texture instance to draw.
 * @param rect The rect coordinates in pixels to draw texture in.
 * @param opacity The opacity to draw texture with.
 */
- (void)drawTexture:(id<ISCITexture2D>)texture inRect:(CGRect)rect withOpacity:(float)opacity;

/**
 * Draws a single heatmap using the specified float texture and gradient color map.
 * @param heatmap The heatmap texture with normalized float values which will be converted to colors using colorMap.
 * @param rect The rect coordinates in points to draw texture in.
 * @param colorMap The colorMap texture, which will be used to calculate colors for heatmap normalized values.
 * @param min The minimum value for this heatmap texture.
 * @param max The maximum value for this heatmap texture.
 */
- (void)drawHeatmapTexure:(id<ISCITexture2D>)heatmap inRect:(CGRect)rect withColorMapTexture:(id<ISCITexture2D>)colorMap min:(double)min andMax:(double)max;

@end

NS_ASSUME_NONNULL_END
