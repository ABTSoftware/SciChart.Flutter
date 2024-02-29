//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDefaultSeriesValueMarkerAnnotationHelper+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDefaultSeriesValueMarkerAnnotationHelper.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIDefaultSeriesValueMarkerAnnotationHelper`.
 */
@interface SCIDefaultSeriesValueMarkerAnnotationHelper<TAnnotation: SCIAnnotationBase *> (Protected)

/**
 * Updates axis marker with latest values provided by renderable series
 * @param annotation The annotation to update
 * @param renderableSeries The source renderable series
 * @param dataSeries The source data series
 * @return True if update was successful, otherwise false
 */
- (BOOL)tryUpdateAnnotation:(TAnnotation)annotation renderableSeries:(id<ISCIRenderableSeries>)renderableSeries dataSeries:(id<ISCIDataSeries>)dataSeries;

/**
 * Checks if axis marker should be updated with latest values from renderable series
 * @param renderableSeries The target renderable series
 * @param dataSeries The target data series
 * @return True if axis marker should be updated
 */
- (BOOL)canUpdateAnnotationForRenderableSeries:(id<ISCIRenderableSeries>)renderableSeries dataSeries:(id<ISCIDataSeries>)dataSeries;

/**
 * Update axis marker with specified values
 * @param lastValue The last value of renderable series
 * @param lastColor The color of last point renderable series
 */
- (void)updateAnnotation:(TAnnotation)annotation lastValue:(id<ISCIComparable>)lastValue lastColor:(SCIColor *)lastColor NS_SWIFT_NAME(updateAnnotation(annotation:lastValue:lastColor:));

/**
 * Formats specified value using specified axis
 * @param axis The axis to use to format value
 * @param value The value to format
 * @return Formatted value
 */
- (id<ISCIString>)formatAxisMarkerAnnotation:(id<ISCIAxis>)axis value:(id<ISCIComparable>)value;

@end

NS_ASSUME_NONNULL_END
