//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIInvalidatableElement.h"
#import <QuartzCore/QuartzCore.h>
#import "ISCIRenderableSeriesCore.h"
#import "ISCIPieChartSurfaceProvider.h"
#import "ISCIThemeable.h"
#import "ISCIPieDonutRenderPassData.h"
#import "ISCIPieSeriesInfoProvider.h"
#import "ISCIPieSegmentLabelFormatter.h"
#import "SCIPieChartLayoutState.h"
#import "SCIPieSegmentCollection.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for renderable series which are used within `ISCIPieChartSurface`.
 */
@protocol ISCIPieRenderableSeries <ISCIRenderableSeriesCore, ISCIPieChartSurfaceProvider, ISCIInvalidatableElement, ISCIAttachable, ISCIThemeable>

/**
 * Gets or sets a flag indicating whether to draw labels over segments, or not.
 */
@property (nonatomic) BOOL drawLabels;

/**
 * Gets or sets the start angle value from which this series will be drawn.
 */
@property (nonatomic) float startAngle;

/**
 * Gets or sets the value which specifies the offset from center, which will be used for selected `ISCIPieSegment`s.
 */
@property (nonatomic) float selectedSegmentOffset;

/**
 * Gets or sets the `ISCIPieRenderableSeries` height considering `heightSizingMode`.
 */
@property (nonatomic) float height;

/**
 * Gets or sets the `SCISizingMode` to use for computation of this series height.
 * E.g. the default of Absolute requires that the spacing value is in pixels. The value of Relative requires relative spacing value.
 */
@property (nonatomic) SCISizingMode heightSizingMode;

/**
 * Gets or sets the value indicating spacing between segments of current `ISCIPieRenderableSeries`.
 */
@property (nonatomic) float segmentSpacing;

/**
 * Gets or sets the value determines which percentage of the circumference is occupied by the series.
 */
@property (nonatomic) float scale;

/**
 * Gets or sets the name of this series.
 */
@property (strong, nonatomic) NSString *seriesName;

/**
 * Gets the collection of `ISCIPieSegment` that this `ISCIPieRenderableSeries` draws.
 */
@property (strong, nonatomic, readonly) SCIPieSegmentCollection *segmentsCollection;

/**
 * Gets the collection of `ISCIPieSegment` that are selected.
 */
@property (strong, nonatomic, readonly) SCIPieSegmentCollection *selectedSegmentsCollection;

/**
 * Checks if this `ISCIPieRenderableSeries` has segments in it's `SCIPieSegmentCollection`.
 * @return true if this `ISCIPieRenderableSeries` has at least one segment. Otherwise - false.
 */
@property (nonatomic, readonly) BOOL hasSegments;

/**
 * Returns the current `ISCIPieDonutRenderPassData` instance which is used for render pass.
 */
@property (strong, nonatomic, readonly) id<ISCIPieDonutRenderPassData> currentRenderPassData;

/**
 * Performs a hit-test at the specific point `[x, y]` coordinate on the parent `SCIPieChartSurface`.
 * @param hitTestResult The SCIPieHitTestInfo instance where result of hit-test should be stored.
 * @param point point The x-y coordinates in pixels relative to parent SCIPieChartSurface.
 */
- (void)hitTest:(SCIPieHitTestInfo *)hitTestResult at:(CGPoint)point;

/**
 * Gets or sets the `ISCIPieSeriesInfoProvider` instance associated with this series.
 */
@property (strong, nonatomic) id<ISCIPieSeriesInfoProvider> seriesInfoProvider;

/**
 * Gets or sets label formatter for `ISCIPieSegment` collection use by this series.
 */
@property (strong, nonatomic, nullable) id<ISCIPieSegmentLabelFormatter> pieSegmentLabelFormatter;

/**
 * Asynchronously requests layout for the parent `ISCIPieChartSurface` instance.
 */
- (void)invalidateLayout;

/**
 * Called during layout pass and updates current layout pass data.
 */
- (void)updateLayoutPassDataWithState:(SCIPieChartLayoutState *)pieChartLayoutState;

/**
 * Draws this ISCIPieRenderableSeries instance.
 * @param context The `CGContext` to draw on.
*/
- (void)onDrawOnCGContext:(CGContextRef)context;

/**
 * Animates this series with specified duration.
 * @param duration The duration of animation in milliseconds.
 */
- (void)animateWithDuration:(NSTimeInterval)duration;

@end

NS_ASSUME_NONNULL_END
