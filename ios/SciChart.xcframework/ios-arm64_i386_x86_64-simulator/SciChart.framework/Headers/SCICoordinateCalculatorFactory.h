//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICoordinateCalculatorFactory.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICoordinateCalculator.h"
#import "SCIAxisParams.h"
#import "ISCIIndexCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A factory class which an appropriate coordinate calculator for the axis params passed in.
 */
@interface SCICoordinateCalculatorFactory : NSObject

/**
 * Creates `ISCICoordinateCalculator` for value axis.
 * @param params The SCIAxisParams to create calculator from.
 * @param visibleRangeMin The double representation of min value for visible range to create calculator from.
 * @param visibleRangeMax The double representation of max value for visible range to create calculator from.
 * @return The new `ISCICoordinateCalculator` instance.
 */
+ (id<ISCICoordinateCalculator>)createFromParams:(SCIAxisParams *)params visibleRangeMin:(double)visibleRangeMin visibleRangeMax:(double)visibleRangeMax;

/**
 * Creates `ISCICoordinateCalculator` for logarithmic value axis.
 * @param params The AxisParams to create calculator from
 * @param visibleRangeMin The double representation of min value for visible range to create calculator from.
 * @param visibleRangeMax The double representation of max value for visible range to create calculator from.
 * @param logarithmicBase The base of the logarithmic scale of @see `SCILogarithmicNumericAxis`.
 * @return The new `ISCICoordinateCalculator` instance.
 */
+ (id<ISCICoordinateCalculator>)createLogarithmicCalculatorFromParams:(SCIAxisParams *)params visibleRangeMin:(double)visibleRangeMin visibleRangeMax:(double)visibleRangeMax logarithmicBase:(double)logarithmicBase;

/**
 * Creates `ISCICoordinateCalculator` for category axis.
 * @param params The AxisParams to create calculator from
 * @param visibleRangeMin The double representation of min value for visible range to create calculator from.
 * @param visibleRangeMax The double representation of max value for visible range to create calculator from.
 * @return The new `ISCICoordinateCalculator` instance.
 */
+ (id<ISCICoordinateCalculator>)createCategoryCalculatorFromParams:(SCIAxisParams *)params visibleRangeMin:(double)visibleRangeMin visibleRangeMax:(double)visibleRangeMax;

/**
 * Creates `ISCICoordinateCalculator` for category `ISCIIndexAxis`.
 * @param params The AxisParams to create calculator from
 * @param visibleRangeMin The double representation of min value for visible range to create calculator from.
 * @param visibleRangeMax The double representation of max value for visible range to create calculator from.
 * @return The new `ISCICoordinateCalculator` instance.
 */
+ (id<ISCICoordinateCalculator>)createIndexCalculatorFromParams:(SCIAxisParams *)params visibleRangeMin:(double)visibleRangeMin visibleRangeMax:(double)visibleRangeMax indexCalculator:(id<ISCIIndexCalculator>)indexCalculator;

@end

NS_ASSUME_NONNULL_END
