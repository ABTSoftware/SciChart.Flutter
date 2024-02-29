//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesValueMarkerAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisMarkerAnnotation.h"
#import "SCIDefaultSeriesValueMarkerAnnotationHelper.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a subclass of `SCIAxisMarkerAnnotation` that is used in `SCIDefaultSeriesValueMarker` implementation
 */
@interface SCISeriesValueMarkerAnnotation : SCIAxisMarkerAnnotation

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates new instance of `SCISeriesValueMarkerAnnotation`
 * @param seriesValueMarkerAnnotationHelper Series value marker helper to update annotation with
 */
- (instancetype)initWithHelper:(SCIDefaultSeriesValueMarkerAnnotationHelper<SCISeriesValueMarkerAnnotation *> *)seriesValueMarkerAnnotationHelper NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
