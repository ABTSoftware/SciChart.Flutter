//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieDonutRenderableSeriesBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPieDonutRenderableSeriesBase.h"
#import "SCIRenderableSeriesCore+Protected.h"
#import "SCINotifiableSmartProperty.h"
#import "SCINotifiableSmartPropertyBool.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "SCINotifiableSmartPropertyInt.h"
#import "ISCIPieDonutRenderPassData.h"
#import "ISCIPieChartHitProvider.h"
#import "ISCISeriesAnimator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIPieDonutRenderableSeriesBase`.
 */
@interface SCIPieDonutRenderableSeriesBase ()

@property (nonatomic) SCIAction invalidateLayoutListener;

@property (strong, nonatomic) SCINotifiableSmartProperty *seriesNameProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyBool *drawLabelsProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *startAngleProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *heightProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *selectedSegmentOffsetProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyInt *heightSizingModeProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *segmentSpacingProperty;
@property (strong, nonatomic) SCINotifiableSmartPropertyFloat *scaleProperty;

@property (nonatomic) CGPoint center;
@property (nonatomic) float outerRadius;

/**
 * Desines a `ISCISeriesAnimator` instance used to animate this series.
 */
@property (strong, nonatomic) id<ISCISeriesAnimator> seriesAnimator;

/**
 * Checks whether this pie renderable series need to update its render pass data.
 * @return If true update is required and [SCIPieDonutRenderableSeriesBase internalDrawWithContext:renderPassData:] should be called.
 */
@property (nonatomic) BOOL isUpdateOfRenderPassDataRequired;

/**
 * This method is called when series should dispose any cached data
 */
- (void)disposeCachedData;

/**
 * Draws the series using the `ISCIPieDonutRenderPassData passed in.
 * @param context The `CGContext` to draw on.
 * @param renderPassData The render pass data which contain a pre-calculated data to draw this `ISCIPieRenderableSeries` instance.
 */
- (void)internalDrawOnCGContext:(CGContextRef)context renderPassData:(id<ISCIPieDonutRenderPassData>)renderPassData;

/**
 * Updates the current render pass data.
 * @param renderPassDataToUpdate The render pass data to update.
 */
- (void)internalUpdateRenderPassData:(id<ISCIPieDonutRenderPassData>)renderPassDataToUpdate;

@end

NS_ASSUME_NONNULL_END
