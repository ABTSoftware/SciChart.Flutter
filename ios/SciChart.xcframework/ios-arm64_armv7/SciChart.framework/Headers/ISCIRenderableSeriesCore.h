//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderableSeriesCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPropertyHolder.h"
#import "SCIPenStyle.h"
#import "ISCIAttachable.h"
#import "ISCIStyle.h"
#import "SCIRenderableSeriesChangeListener.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines base properties for all RenderableSeries throughout the SciChart SDK.
 */
@protocol ISCIRenderableSeriesCore <ISCIAttachable, ISCIPropertyHolder>

/**
 * Gets or sets whether this series is visible when drawn.
 */
@property (nonatomic) BOOL isVisible;

/**
 * Gets or sets whether this series is selected.
 */
@property (nonatomic) BOOL isSelected;

/**
 * Gets the opacity factor applied to `ISCIRenderableSeries` the when it is rendered on `SCIChartSurface`.
 * @note Default opacity is 1.0. Expected values are between 0.0 and 1.0.
 */
@property (nonatomic) float opacity;

/**
 * Checks whether this series is valid for update.
 */
@property (nonatomic, readonly) BOOL isValidForUpdate;

/**
 * Checks whether this series is valid for drawing.
 */
@property (nonatomic, readonly) BOOL isValidForDrawing;

/**
 * Gets or sets the `ISCIStyle` which is applied when series is selected.
 */
@property (strong, nonatomic, nullable) id<ISCIStyle> selectedSeriesStyle;

/**
 * Add the listener which should be invoked if this series becomes `visible/invisible`.
 * @param listener The listener to add.
 */
- (void)addIsVisibleChangeListener:(SCIRenderableSeriesChangeListener)listener;

/**
 * Removes the listener which should invoke if this series become `visible/invisible`.
 * @param listener The listener to remove.
 */
- (void)removeIsVisibleChangeListener:(SCIRenderableSeriesChangeListener)listener;

/**
 * Add the listener which should be invoked if this series becomes `selected/unselected`.
 * @param listener The listener to add.
 */
- (void)addIsSelectedChangeListener:(SCIRenderableSeriesChangeListener)listener;

/**
 * Removes the listener which should invoke if this series become `selected/unselected`.
 * @param listener The listener to remove.
 */
- (void)removeIsSelectedChangeListener:(SCIRenderableSeriesChangeListener)listener;

@end

NS_ASSUME_NONNULL_END
