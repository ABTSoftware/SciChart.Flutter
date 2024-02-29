//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxis.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisCore.h"
#import "ISCIDrawable.h"
#import "ISCIAxisGridLinesDrawable.h"
#import "ISCIHitTestable.h"
#import "ISCIUpdatable.h"
#import "ISCILayoutable.h"
#import "ISCIChartResizeListener.h"
#import "ISCIAxisModifierSurface.h"
#import "ISCIRenderSurfaceChangedListener.h"
#import "SCIAxisAlignment.h"
#import "SCIAlignment.h"
#import "SCIOrientation.h"
#import "SCIAxisTitlePlacement.h"
#import "SCIAxisTitleOrientation.h"
#import "ISCIAxisInteractivityHelper.h"
#import "SCIClipMode.h"
#import "SCIClipModeTarget.h"
#import "ISCIAxisInfoProvider.h"
#import "SCIAxisLayoutState.h"
#import "SCIAxisTickLabelStyle.h"
#import "ISCIRange.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base interface to an Axis used throughout SciChart 2D.
 */
@protocol ISCIAxis <ISCIAxisCore, ISCIDrawable, ISCIAxisGridLinesDrawable, ISCIHitTestable, ISCIUpdatable, ISCILayoutable, ISCIRenderSurfaceChangedListener, ISCIChartResizeListener>

/**
 * Gets or sets whether current Axis is the main one in axis collection.
 * @note This is the axis which is responsible for drawing grid lines.
 */
@property (nonatomic) BOOL isPrimaryAxis;

/**
 * Gets or sets whether this axis is an `X-Axis` or not.
 */
@property (nonatomic) BOOL isXAxis;

/**
 * Gets or sets whether current Axis should be placed in the center of the chart or not.
 */
@property (nonatomic) BOOL isCenterAxis;

/**
 * Gets a value indicating whether this instance is a category axis.
 */
@property (nonatomic, readonly) BOOL isCategoryAxis __deprecated_msg("Please use `currentCoordinateCalculator` `ICoordinateCalculator.isCategoryAxisCalculator`");

/**
 * Gets whether this axis is horizontal or not.
 */
@property (nonatomic, readonly) BOOL isHorizontalAxis;

/**
 * Gets whether this axis is flipped (e.g `Y-Axis` on the bottom or top, or `X-Axis` on the left or right).
 */
@property (nonatomic, readonly) BOOL isAxisFlipped;

/**
 * Gets or sets the `SCIAxisAlignment` for this Axis.
 */
@property (nonatomic) SCIAxisAlignment axisAlignment;

/**
 * Gets or sets the Axis Orientation, e.g. Horizontal (XAxis) or Vertical (YAxis).
 */
@property (nonatomic) SCIOrientation orientation;

/**
 * Gets or sets a value indicating whether label culling is enabled (when labels overlap) on this axis instance.
 */
@property (nonatomic) BOOL isLabelCullingEnabled;

/**
 * Gets a value indicating whether marginal labels get shifted to fit inside an axis when too long.
 */
@property (nonatomic) BOOL autoFitMarginalLabels;

/**
 * Gets or sets axis title placement.
 */
@property (nonatomic) SCIAxisTitlePlacement axisTitlePlacement;

/**
 * Gets or sets axis title orientation.
 */
@property (nonatomic) SCIAxisTitleOrientation axisTitleOrientation;

/**
 * Gets or sets axis title alignment.
 */
@property (nonatomic) SCIAlignment axisTitleAlignment;

/**
 * Defines axis title margins.
 * @note Defines spacing to use when laying out content in the view.
 */
@property (nonatomic) SCIEdgeInsets axisTitleMargins;

/**
 * Defines style for axis tick labels.
 */
@property (strong, nonatomic) SCIAxisTickLabelStyle *axisTickLabelStyle;

/**
 * Gets the current `ISCIAxisInteractivityHelper` for this Axis.
 */
@property (strong, readonly) id<ISCIAxisInteractivityHelper> currentInteractivityHelper;

/**
 * Called by the `SCIChartSurface` internally.
 * @note Returns the max range only for that axis(by the data-series on it)
 * @param xCoordCalcs Calculates the max range based on corresponding x coordinate calculators.
 * @return The calculated windowed YRange.
 */
- (id<ISCIRange>)getWindowedYRangeWithXRanges:(nullable NSDictionary<NSString *, id<ISCICoordinateCalculator>> *)xCoordCalcs;

/**
 * Scrolls current `ISCIAxisCore.visibleRange` by specified number of pixels.
 * @param pixelsToScroll Scroll N pixles from the current visible range.
 * @param clipMode Defines how scrolling behaves when you reach the edge of the Axis extents.
 * @note e.g. `SCIClipMode_ClipAtExtents` prevents panning outside of the Axis, `SCIClipMode_None` allows panning outside.
 */
- (void)scrollByPixels:(CGFloat)pixelsToScroll clipMode:(SCIClipMode)clipMode;

/**
 * Scrolls current `ISCIAxisCore.visibleRange` by the specified number of pixels with the specified animation duration.
 * @param pixelsToScroll Scroll N pixels from the current visible range
 * @param clipMode Defines how scrolling behaves when you reach the edge of the Axis extents.
 * @note e.g. `SCIClipMode_ClipAtExtents` prevents panning outside of the Axis, `SCIClipMode_None` allows panning outside.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)scrollByPixels:(CGFloat)pixelsToScroll clipMode:(SCIClipMode)clipMode duration:(NSTimeInterval)duration;

/**
 * Scrolls current `ISCIAxisCore.visibleRange` by the specified number of pixels with the specified animation duration.
 * @param pixelsToScroll Scroll N pixels from the current visible range.
 * @param clipMode Defines how scrolling behaves when you reach the edge of the Axis extents.
 * @param clipTarget Defines target which is used for clipping.
 */
- (void)scrollByPixels:(CGFloat)pixelsToScroll clipMode:(SCIClipMode)clipMode clipTarget:(SCIClipModeTarget)clipTarget;

/**
 * Scrolls current `ISCIAxisCore.visibleRange` by the specified number of pixels with the specified animation duration.
 * @param pixelsToScroll Scroll N pixels from the current visible range.
 * @param clipMode Defines how scrolling behaves when you reach the edge of the Axis extents.
 * @param clipTarget Defines target which is used for clipping.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)scrollByPixels:(CGFloat)pixelsToScroll clipMode:(SCIClipMode)clipMode clipTarget:(SCIClipModeTarget)clipTarget duration:(NSTimeInterval)duration;

/**
 * Performs zoom on current Axis, using `fromCoord` as a coordinate of new range start and `toCoord` as a coordinate of new range end.
 * @param fromCoord The coordinate of new range start in pixels.
 * @param toCoord The coordinate of new range end in pixels.
 */
- (void)zoomFrom:(CGFloat)fromCoord to:(CGFloat)toCoord;

/**
 * Performs zoom on current Axis, using `fromCoord` as a coordinate of new range start and `toCoord` as a coordinate of new range end.
 * @param fromCoord The coordinate of new range start in pixels.
 * @param toCoord The coordinate of new range end in pixels.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)zoomFrom:(CGFloat)fromCoord to:(CGFloat)toCoord duration:(NSTimeInterval)duration;

/**
 * Performs zoom on current Axis, using `minFraction` as a multuplier of range start and `maxFraction` as a multiplier of range end.
 * @param minFraction The miltiplier of range start.
 * @param maxFraction The miltiplier of range end.
 */
- (void)zoomByFractionMin:(CGFloat)minFraction max:(CGFloat)maxFraction;

/**
 * Performs zoom on current Axis, using `minFraction` as a multuplier of range start and `maxFraction` as a multiplier of range end.
 * @param minFraction The miltiplier of range start.
 * @param maxFraction The miltiplier of range end.
 * @param duration The duration of animation when zooming to extents.
 */
- (void)zoomByFractionMin:(CGFloat)minFraction max:(CGFloat)maxFraction duration:(NSTimeInterval)duration;

/**
 * Perform a HitTest on this Axis at specified data point.
 * @param value data value for hit test.
 * @return The `SCIAxisInfo` which contains the HitTest results.
 */
- (SCIAxisInfo *)hitTestValue:(id<ISCIComparable>)value;

/**
 * Gets or sets the `ISCIAxisInfoProvider` instance associated with this axis.
 */
@property (strong, nonatomic) id<ISCIAxisInfoProvider> axisInfoProvider;

/**
 * Gets or sets the `ISCIAxisInfoProvider` instance associated with this axis.
 */
@property (strong, nonatomic, readonly) id<ISCIAxisModifierSurface> axisModifierSurface;

/**
 * Updates measurements of axis for proper layout of its content.
 */
- (void)updateAxisMeasurements;

/**
 * Gets current `SCIAxisLayoutState` for this axis instance.
 */
@property (strong, nonatomic, readonly) SCIAxisLayoutState *axisLayoutState;

/**
 * Gets offset, which is used by `ISCICoordinateCalculator` of this Axis.
 */
@property (nonatomic, readonly) CGFloat axisOffset;

/**
 * Performs core update of axis.
 * @param renderPassState The `SCIRenderPassState` instance for current render pass.
 */
- (void)updateCore:(SCIRenderPassState *)renderPassState;

@end

NS_ASSUME_NONNULL_END
