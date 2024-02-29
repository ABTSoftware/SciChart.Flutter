//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIStackedSeriesCollectionBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIStackedSeriesCollectionBase.h"
#import "SCINotifiableSmartProperty.h"
#import "SCINotifiableSmartPropertyBool.h"
#import "SCINotifiableSmartPropertyInt.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "SCINotifiableSmartPropertyDouble.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIStackedSeriesCollectionBase`.
 */
@interface SCIStackedSeriesCollectionBase ()

@property (nonatomic, readonly) SCIAction invalidateElementListener;

@property (strong, nonatomic) SCISmartPropertyInt *resamplingModeProperty;

@property (strong, nonatomic) SCISmartProperty *xAxisIdProperty;
@property (strong, nonatomic) SCISmartProperty *yAxisIdProperty;

@property (strong, nonatomic) SCISmartPropertyBool *isVisibleProperty;
@property (strong, nonatomic) SCISmartPropertyBool *isSelectedProperty;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIStackedSeriesCollectionBase`.
 */
@interface SCIStackedSeriesCollectionBase<T : id<ISCIStackedRenderableSeries>> (Protected)

/**
 * Gets the collection of `ISCIStackedRenderableSeries` that are visible.
 */
@property (strong, nonatomic, readonly) NSArray<id<ISCIStackedRenderableSeries>> *visibleSeries;

/**
 * Called during render pass and updates every stacked render pass data of the children series.
 * @param xAxis The XAxis instance that this `SCIStackedSeriesCollectionBase` is associated with.
 * @param yAxis The YAxis instance that this `SCIStackedSeriesCollectionBase` is associated with.
 */
- (void)updateStackedRenderPassDataValuesWithXAxis:(id<ISCIAxis>)xAxis yAxis:(id<ISCIAxis>)yAxis;

/**
 * Updates this renderable series instance and it's children.
 * @param assetManager2D The `ISC*AssetManager2D` used for this render pass.
 * @param renderPassState The `SCIRenderPassState` for this render pass.
 */
- (void)internalUpdateWithAssetManager:(id<ISCIAssetManager2D>)assetManager2D renderPassState:(SCIRenderPassState *)renderPassState;

- (void)initializeProperties;

@end

NS_ASSUME_NONNULL_END
