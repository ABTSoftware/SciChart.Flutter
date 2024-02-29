//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderableSeriesBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesCore+Protected.h"
#import "SCIFloatValues.h"
#import "SCINotifiableSmartProperty.h"
#import "SCIObservableSmartProperty.h"
#import "SCINotifiableSmartPropertyDouble.h"
#import "SCINotifiableSmartPropertyInt.h"
#import "SCINotifiableSmartPropertyBool.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIRenderableSeriesBase`.
 */
@interface SCIRenderableSeriesBase ()

@property (nonatomic, readonly) SCIAction invalidateRenderPassDataListener;

@property (strong, nonatomic) SCISmartProperty *xAxisIdProperty;
@property (strong, nonatomic) SCISmartProperty *yAxisIdProperty;

@property (strong, nonatomic) SCISmartPropertyInt *resamplingModeProperty;
@property (strong, nonatomic) SCISmartPropertyBool *clipToBoundsProperty;

@property (strong, nonatomic) SCISmartPropertyInt *drawNaNAsProperty;
@property (strong, nonatomic) SCISmartPropertyDouble *zeroLineYProperty;

@property (strong, nonatomic) SCISmartProperty *strokeStyleProperty;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIRenderableSeriesBase`.
 */
@interface SCIRenderableSeriesBase (Protected)

/**
 * Called when `SCIRenderableSeriesBase.strokeStyle` property changes
 * @param oldValue The old stroke style
 * @param newValue The new stroke style
 */
- (void)onStrokeStyleChangedWithOldValue:(SCIPenStyle *)oldValue andNewValue:(SCIPenStyle *)newValue NS_SWIFT_NAME(onStrokeStyleChanged(oldValue:newValue:));

/**
 * Checks whether the data series instance is valid for this series.
 * @param dataSeries The data series instance to check.
 * @return True if this data series is valid for this series.
 */
- (BOOL)isOfValidType:(id<ISCIDataSeries>)dataSeries NS_SWIFT_NAME(isOfValidType(dataSeries:));

/**
 * This method is called when series should dispose any cached data.
 */
- (void)disposeCachedData;

/**
 * Sets the clip rect which is used by this series if `SCIRenderableSeriesBase.clipToBounds` is YES.
 * @param clipRect The clip rect to set.
 */
- (void)setClipRect:(CGRect)clipRect;

/**
 * Draws the series using the `ISCIRenderContext2D`, the `ISCIAssetManager2D` and the `ISCISeriesRenderPassData` passed in.
 * @param renderContext  The render context. This is a graphics object which has methods to draw lines, quads and polygons to the screen.
 * @param assetManager   The asset manager. This is manager for graphic assets which has method for creation pens, brushes and textures.
 * @param renderPassData The render pass data which contain a resampled point series, the index range of point on the screen and the current coordinate calculator of XAxis and YAxis to convert data-point to screen points.
 */
- (void)internalDrawWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager renderPassData:(id<ISCISeriesRenderPassData>)renderPassData NS_SWIFT_NAME(internalDraw(renderContext:assetManager:renderPassData:));

/**
 * Draw the current point marker using the `ISCIRenderContext2D`, the `ISCIAssetManager2D` and coordinates passed in.
 * @param renderContext The render context. This is a graphics object which has methods to draw lines, quads and polygons to the screen.
 * @param assetManager The asset manager. This is manager for graphic assets which has method for creation pens, brushes and textures.
 * @param xCoords The x coordinates to draw point marker at.
 * @param yCoords The y coordinates to draw point marker at.
 */
- (void)drawPointMarkersWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager xCoords:(SCIFloatValues *)xCoords yCoords:(SCIFloatValues *)yCoords NS_SWIFT_NAME(drawPointMarkers(renderContext:assetManager:xCoords:yCoords:));

/**
 * Updates this renderable series instances.
 * @param assetManager2D  The `ISCIAssetManager2D` used for this render pass.
 * @param renderPassState The `SCIRenderPassState` for this render pass.
 */
- (void)internalUpdateWithAssetManager:(id<ISCIAssetManager2D>)assetManager2D renderPassState:(SCIRenderPassState *)renderPassState NS_SWIFT_NAME(internalUpdate(assetManager2D:renderPassState:));

/**
 * Updates the current render pass data using the data series, resampling factory passed in.
 * @param renderPassData The render pass data to update.
 * @param dataSeries The data series associated with this renderable series instance.
 * @param mode The resampling mode associated with this renderable series instance.
 */
- (void)internalUpdateRenderPassData:(id<ISCISeriesRenderPassData>)renderPassData dataSeries:(id<ISCIDataSeries>)dataSeries resamplingMode:(SCIResamplingMode)mode NS_SWIFT_NAME(internalUpdateRenderPassData(renderPassData:dataSeries:resamplingMode:));

/**
 * Checks whether this renderable series need to update its render pass data.
 * @param xCoordCalc The current coordinate calculator for XAxis.
 * @param yCoordCalc The current coordinate calculator for YAxis.
 * @param viewportSize The current viewport manager.
 * @return If YES - update is required and `internalUpdateRenderPassData` should be called.
 */
- (BOOL)isUpdateOfRenderPassDataRequired:(id<ISCICoordinateCalculator>)xCoordCalc yCoordCalc:(id<ISCICoordinateCalculator>)yCoordCalc viewportSize:(CGSize)viewportSize NS_SWIFT_NAME(isUpdateOfRenderPassDataRequired(xCoordCalc:yCoordCalc:viewportSize:));

/**
 * Gets a value that determines the position of Y zero line on a chart.
 * Significant for the series types that render negative data points differently,
 * such as the `SCIFastColumnRenderableSeries`, `SCIFastMountainRenderableSeries`, `SCIFastImpulseRenderableSeries`.
 * @param yCoordCalc The `ISCICoordinateCalculator` for YAxis.
 * @return The value in pixels indicating the position of zero line.
 */
- (float)getYZeroCoord:(id<ISCICoordinateCalculator>)yCoordCalc NS_SWIFT_NAME(getYZeroCoord(yCoordCalc:));

/**
 * Updates specified category XRange (range of indices used by `SCICategoryAxisBase`) on X direction by querying the associated data series
 * @param categoryXRange Category XRange to set
 * @param dataSeries The data series associated with this renderable series
 */
- (void)updateCategoryXRangeInternal:(id<ISCIRange>)categoryXRange dataSeries:(id<ISCIDataSeries>)dataSeries;

@end

NS_ASSUME_NONNULL_END
