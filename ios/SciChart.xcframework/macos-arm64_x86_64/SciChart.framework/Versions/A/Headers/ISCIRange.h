//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRange.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIMath.h"
#import "ISCIComparable.h"
#import "SCIRangeClipMode.h"
#import "SCIRangeChangeObserver.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines protcol for ranges. Range is defined by min, max values and type.
 */
@protocol ISCIRange <NSObject>

/**
 * Gets the `ISCIMath` associated with this range.
 */
@property (strong, nonatomic, readonly) id<ISCIMath> math;

/**
 * Gets or sets the min value of this range.
 */
@property (strong, nonatomic) id<ISCIComparable> min;

/**
 * Gets or sets the max value of this range.
 */
@property (strong, nonatomic) id<ISCIComparable> max;

/**
 * Gets the difference - `max - min` - of this range.
 */
@property (strong, nonatomic, readonly) id<ISCIComparable> diff;

/**
 * Gets whether this Range is defined.
 */
@property (nonatomic, readonly) BOOL isDefined;

/**
 * Gets whether the range is Zero, where max equals min.
 */
@property (nonatomic, readonly) BOOL isZero;

/**
 * Gets whether the min and max value are valid `min <= max `.
 */
@property (nonatomic, readonly) BOOL isMinMaxValid;

/**
 * Gets the double representation of min value.
 */
@property (nonatomic, readonly) double minAsDouble;

/**
 * Gets the double representation of max value.
 */
@property (nonatomic, readonly) double maxAsDouble;

/**
 * Returns true if the value is within the min and max of the Range.
 * @param value the value to test.
 * @return true if the value is within the Min and Max of the Range.
 */
- (BOOL)isValueWithinTheRange:(id<ISCIComparable>)value;

/**
 * Grows the current `ISCIRange` by the min and max fraction.
 * @param minFraction The min fraction to grow by. For example, `min = -10` and `minFraction = 0.1` will result in the new `min = -11`.
 * @param maxFraction The max fraction to grow by. For example, `max = 10` and `minFraction = 0.2` will result in the new `max = 12`.
 */
- (void)growMinBy:(double)minFraction maxBy:(double)maxFraction;

/**
 * Sets the min, max values on the `ISCIRange` with a max range to clip values to.
 * @param min New min value.
 * @param max New max value.
 * @param maximumRange The max range, which is used to clip values.
 */
- (void)setDoubleMinTo:(double)min maxTo:(double)max withLimit:(id<ISCIRange>)maximumRange;

/**
 * Sets the min, max values on the `ISCIRange`.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setDoubleMinTo:(double)min maxTo:(double)max;

/**
 * Sets the min, max values on the `ISCIRange` without equals checks.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setForcedDoubleMinTo:(double)min maxTo:(double)max;

/**
 * Sets the min, max values on the `ISCIRange` with a max range to clip values to.
 * @param min New min value.
 * @param max New max value.
 * @param maximumRange The max range, which is used to clip values.
 */
- (void)setMinTo:(id<ISCIComparable>)min maxTo:(id<ISCIComparable>)max withLimit:(id<ISCIRange>)maximumRange;

/**
 * Sets the min, max values on the `ISCIRange`.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setMinTo:(id<ISCIComparable>)min maxTo:(id<ISCIComparable>)max;

/**
 * Sets the min, max values on the `ISCIRange` without equals checks.
 * @param min New min value.
 * @param max New max value.
 */
- (void)setForcedMinTo:(id<ISCIComparable>)min maxTo:(id<ISCIComparable>)max;

/**
 * Sets the min, max values on the `ISCIRange` with a range.
 * @param range input range.
 */
- (void)setRange:(id<ISCIRange>)range;

/**
 * Performs the union of two `ISCIRange` instances.
 * @param range input range.
 */
- (void)unionWith:(id<ISCIRange>)range;

/**
 * Performs the union of two `ISCIRange` instances.
 * @param min The min value.
 * @param max The max value.
 */
- (void)unionWithMin:(id<ISCIComparable>)min max:(id<ISCIComparable>)max;

/**
 * Clips the current `ISCIRange` to a maximum range with MinMax mode.
 * @param maximumRange range to compare.
 */
- (void)clipTo:(id<ISCIRange>)maximumRange;

/**
 * Clips the current `ISCIRange` to a maximum according to clip mode.
 * @param maximumRange range to compare.
 * @param clipMode clip mode which defines how to clip range.
 */
- (void)clipTo:(id<ISCIRange>)maximumRange clipMode:(SCIRangeClipMode)clipMode;

/**
 * Creates and returns a copy of this object.
 * @return A clone of this instance.
 */
- (id<ISCIRange>)clone;

/**
 * Adds `SCIRangeChangeObserverProtocol` instance to listen changes of this `ISCIRange` instance.
 * @param observer The observer to add.
 */
- (void)addRangeChangeObserver:(SCIRangeChangeObserver)observer;

/**
 * Removes `SCIRangeChangeObserverProtocol` instance from list of change listeners for this `ISCIRange` instance.
 * @param observer The observer to remove.
 */
- (void)removeRangeChangeObserver:(SCIRangeChangeObserver)observer;

@end

NS_ASSUME_NONNULL_END
