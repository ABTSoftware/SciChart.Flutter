//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIServiceProvider.h"
#import "ISCISuspendable.h"
#import "ISCIInvalidatableElement.h"
#import "ISCIThemeable.h"
#import "ISCIAttachable.h"
#import "SCIDataRangeChangeListener.h"
#import "SCIVisibleRangeChangeListener.h"
#import "ISCIRange.h"
#import "ISCIComparable.h"
#import "SCIRangeClipMode.h"
#import "SCIAutoRange.h"
#import "ISCITickProvider.h"
#import "ISCITickCoordinatesProvider.h"
#import "SCIPenStyle.h"
#import "ISCICoordinateCalculator.h"
#import "ISCILabelProvider.h"
#import "ISCIString.h"
#import "ISCIReadWriteLock.h"

#define DEFAULT_AXIS_ID @"DefaultAxisId"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the base protocol for all axes types used throughout the SciChart SDK.
 */
@protocol ISCIAxisCore <ISCIServiceProvider, ISCISuspendable, ISCIInvalidatableElement, ISCIThemeable, ISCIAttachable>

/**
 * Gets or sets the VisibleRange of the Axis.
 * @note Setting the VisibleRange will cause the axis to redraw.
 */
@property (strong, nonatomic) id<ISCIRange> visibleRange;

/**
 * Gets or sets the GrowBy Factor. e.g. `GrowBy [0.1, 0.2]` will increase the axis extents by 10% (min) and 20% (max) outside of the data range.
 */
@property (strong, nonatomic) id<ISCIRange> growBy;

/**
 * Gets or sets the string Id of this axis. Used to associated `ISCIRenderableSeries`.
 */
@property (copy, nonatomic) NSString *axisId;

/**
 * Gets or sets the visibleRangeLimit of the Axis.
 * @note This will be used to clip the axis during `ZoomExtents` and `AutoRange` operations.
 */
@property (strong, nonatomic, nullable) id<ISCIRange> visibleRangeLimit;

/**
 * Gets or ses the VisibleRangeLimitMode of the Axis.
 * @note This property defines which parts of `visibleRangeLimit` will be used by axis.
 */
@property (nonatomic) SCIRangeClipMode visibleRangeLimitMode;

/**
 * Gets or sets the minimal zoom constrain of the axis.
 * @note Used to set the minimum distance between Min and Max of the VisibleRange.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> minimalZoomConstrain;

/**
 * Gets or sets the maximum zoom constrain of the axis.
 * @note Used to set the maximum distance between Min and Max of the VisibleRange.
 */
@property (strong, nonatomic, nullable) id<ISCIComparable> maximumZoomConstrain;

/**
 * Gets or sets the minor delta value.
 * @note Used for axis minor ticks spacing.
 */
@property (strong, nonatomic) id<ISCIComparable> minorDelta;

/**
 * Gets or sets the major delta value.
 * @note Used for axis major ticks spacing.
 */
@property (strong, nonatomic) id<ISCIComparable> majorDelta;

/**
 * Definies the value that indicates whether to calculate ticks automatically. Default is YES.
 */
@property (nonatomic) BOOL autoTicks;

/**
 * Definies the max auto ticks amount.
 */
@property (nonatomic) unsigned int maxAutoTicks;

/**
 * Definies the number of minor delta ticks per major tick.
 */
@property (nonatomic) unsigned int minorsPerMajor;

/**
 * Gets or sets a flag indicating whether to flip the tick and pixel coordinate generation for this axis, causing the axis ticks to decrement and chart to be flipped in the axis direction.
 * @note If YES - reverses the ticks and coordinates for the axis.
 */
@property (nonatomic) BOOL flipCoordinates;

/**
 * Definies a flag indicating whether to draw major ticks or not.
 */
@property (nonatomic) BOOL drawMajorTicks;

/**
 * Definies a flag indicating whether to draw major grid lines or not.
 */
@property (nonatomic) BOOL drawMajorGridLines;

/**
 * Definies a flag indicating whether to draw major bands or not.
 */
@property (nonatomic) BOOL drawMajorBands;

/**
 * Definies a flag indicating whether to draw minor ticks or not.
 */
@property (nonatomic) BOOL drawMinorTicks;

/**
 * Definies a flag indicating whether to draw minor grid lines or not.
 */
@property (nonatomic) BOOL drawMinorGridLines;

/**
 * Definies a flag indicating whether to draw tick labels or not.
 */
@property (nonatomic) BOOL drawLabels;

/**
 * Defines the string with value for this axis title.
 */
@property (copy, nonatomic) NSString *axisTitle;

/**
 * Defines the attributed string with value for this axis title.
 * @warning If set - current annotation instance will ignore the `axisTitle` property.
 */
@property (copy, nonatomic) NSAttributedString *attributedAxisTitle;

/**
 * Gets or sets auto range mode for current axis. Default is `SCIAutoRange.SCIAutoRange_Once`.
 *
 * Possible values:
 * - `SCIAutoRange.SCIAutoRange_Once` - the axis will try to fit the data once.
 * - `SCIAutoRange.SCIAutoRange_Always` - the axis should scale to fit the data.
 * - `SCIAutoRange.SCIAutoRange_Never` - then the axis will never auto range.
 */
@property (nonatomic) SCIAutoRange autoRange;

/**
 * Gets or sets a `ISCITickProvider` instance on current axis.
 * @note Used to compute the `data-values` of Axis Grid Lines, Ticks and Labels.
 */
@property (strong, nonatomic) id<ISCITickProvider> tickProvider;

/**
 * Gets or sets a `ISCITickCoordinatesProvider` instance on current axis.
 * @note Used to transform the `data-values` received from `ISCITickProvider` instance to the coordinates for Axis gridlines, ticks and labels drawing
 */
@property (strong, nonatomic) id<ISCITickCoordinatesProvider> tickCoordinatesProvider;

/**
 * Gets or sets a `ISCILabelProvider` instance.
 * @note May be used to programmatically override the formatting of text and cursor labels.
 */
@property (strong, nonatomic) id<ISCILabelProvider> labelProvider;

/**
 * Defines the TextFormatting string for tick labels on this axis.
 * @note The format string uses the format patterns from the `Unicode Technical Standard #35`.
 *
 * - http://www.unicode.org/reports/tr35/tr35-31/tr35-numbers.html#Number_Format_Patterns
 * - https://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 */
@property (copy, nonatomic, nullable) NSString *textFormatting;

/**
 * Defines the text formatting string for labels on this cursor.
 * @note The format string uses the format patterns from the `Unicode Technical Standard #35`.
 *
 * - http://www.unicode.org/reports/tr35/tr35-31/tr35-numbers.html#Number_Format_Patterns
 * - https://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 */
@property (copy, nonatomic, nullable) NSString *cursorTextFormatting;

/**
 * Defines the style which is used to draw all major grid lines on this axis.
 */
@property (strong, nonatomic) SCIPenStyle *majorGridLineStyle;

/**
 * Defines the style which is used to draw all minor grid lines on this axis.
 */
@property (strong, nonatomic) SCIPenStyle *minorGridLineStyle;

/**
 * Defines the style for Axis Bands.
 */
@property (strong, nonatomic) SCIBrushStyle *axisBandsStyle;

/**
 * Defines the style which is used to draw all major ticks on this axis.
 */
@property (strong, nonatomic) SCIPenStyle *majorTickLineStyle;

/**
 * Gets or sets the style which is used to draw all minor ticks on this axis.
 */
@property (strong, nonatomic) SCIPenStyle *minorTickLineStyle;

/**
 * Gets or sets the the length of all major ticks on this axis in pixels.
 */
@property (nonatomic) float majorTickLineLength;

/**
 * Gets or sets the the length of all minor ticks on this axis in pixels.
 */
@property (nonatomic) float minorTickLineLength;

/**
 * Defines the style which is used to draw axis title.
 */
@property (strong, nonatomic) SCIFontStyle *titleStyle;

/**
 * Defines the style which is used to draw all tick labels on this axis.
 */
@property (strong, nonatomic) SCIFontStyle *tickLabelStyle;

/**
 * Gets the current `ISCICoordinateCalculator` for this axis, based on visible range and axis type.
 */
@property (strong, nonatomic, readonly) id<ISCICoordinateCalculator> currentCoordinateCalculator;

/**
 * Creates a coordinate calculator from specified visible range.
 * @param visibleRange The visible range to create coordinate calculator from.
 * @return The coordinate calculator instance.
 */
- (id<ISCICoordinateCalculator>)createCoordinateCalculatorFromRange:(id<ISCIRange>)visibleRange;

/**
 * Animates the visible range of the axis to the destination visible range, over the specified duration.
 * @param range The end range.
 * @param duration The duration of the animation.
 */
- (void)animateVisibleRangeTo:(id<ISCIRange>)range withDuration:(float)duration;

/**
 * Gets whether the passed range is valid.
 * @param range Passed range, that should be validated.
 */
- (BOOL)isValidRange:(id<ISCIRange>)range;

/**
 * Gets whether `visibleRange` is valid, e.g. is not `nil`, the difference between `Max` and `Min` is positive.
 */
@property (nonatomic, readonly) BOOL hasValidVisibleRange;

/**
 * Gets whether the `visibleRange` has default value.
 */
@property (nonatomic, readonly) BOOL hasDefaultVisibleRange;

/**
 * Gets the default non zero `ISCIRange`, called internally by SciChart to reset the `visibleRange` of an axis to an default state.
 */
@property (strong, nonatomic, readonly) id<ISCIRange> defaultNonZeroRange;

/**
 * Used internally for notification of axis when data range changes.
 */
- (void)onDataRangeChanged;

/**
 * Converts given the x or y pixel coordinate to the data value at this coordinate.
 * @param pixelCoordinate The coordinate in pixels to convert.
 * @return The data value.
 */
- (id<ISCIComparable>)getDataValueFrom:(float)pixelCoordinate NS_SWIFT_NAME(getDataValue(_:));

/**
 * Converts given data value to the x or y pixel coordinate on this axis.
 * @param value The data value to convert.
 * @return The coordinate in pixels.
 */
- (float)getCoordinateFrom:(id<ISCIComparable>)value NS_SWIFT_NAME(getCoordinate(_:));

/**
 * Gets or sets the visibility of the Axis.
 */
@property (nonatomic) BOOL isVisible;

/**
 * Gets the axis viewport dimension, which is used by `ISCICoordinateCalculator` of the Axis.
 */
@property (nonatomic, readonly) CGFloat axisViewportDimension;

#pragma mark - Text Formatting

/**
 * String formats the text.
 * @param value The data value to format.
 * @return The string formatted data value.
 */
- (id<ISCIString>)formatText:(id<ISCIComparable>)value;

/**
 * String formats text for the cursor.
 * @param value The data value to format.
 * @return The string formatted data value.
 */
- (id<ISCIString>)formatCursorText:(id<ISCIComparable>)value;

#pragma mark - Operations with Ranges

/**
 * Gets the maximum range of the axis, based on the `data-range` of all series.
 * @note Computed property, which is calculated via `-getMaximumRange:` without force cache updating.
 */
@property (nonatomic, readonly) id<ISCIRange> maximumRange;

/**
 * Gets the maximum range of the axis, based on the `data-range` of all series.
 * @param forceCacheUpdate Flag indicating whether the cached results should be updated.
 * @return The maximum range for this axis.
 */
- (id<ISCIRange>)getMaximumRange:(BOOL)forceCacheUpdate;

/**
 * Gets the data range (full extents of the data) of the Axis.
 * @note Computed property, which is calculated via `-getDataRange:` without force cache updating.
 */
@property (nonatomic, readonly) id<ISCIRange> dataRange;

/**
 * Gets the data range (full extents of the data) of the Axis.
 * @param forceCacheUpdate Flag indicating whether the cached results should be updated.
 * @return The data range for this axis.
 */
- (id<ISCIRange>)getDataRange:(BOOL)forceCacheUpdate;

/**
 * Defines the `SCIVisibleRangeChangeListener` for this axis instance.
 */
@property (strong, nonatomic, nullable) SCIVisibleRangeChangeListener visibleRangeChangeListener;

/**
 * Defines the `SCIDataRangeChangeListener` for this axis instance.
 */
@property (strong, nonatomic, nullable) SCIDataRangeChangeListener dataRangeChangeListener;

/**
 * Gets the lock for current axis params. Used internally for synchronization of axis updated during render pass
 */
@property (nonatomic, readonly) id<ISCIReadWriteLock> axisParamsLock;

@end

NS_ASSUME_NONNULL_END
