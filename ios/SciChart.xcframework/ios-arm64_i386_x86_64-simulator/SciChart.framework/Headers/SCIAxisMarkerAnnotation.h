//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisMarkerAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAnchorPointAnnotation.h"
#import "ISCIFormattedValueProvider.h"

/**
 * The `SCIAxisMarkerAnnotation` provides an axis label which is data-bound to its data X or Y value.
 * @note Used to place a marker on the `X` or `Y` Axis it can give feedback about the latest value of a series, or important points in a series.
 */
@interface SCIAxisMarkerAnnotation : SCIAnchorPointAnnotation

/**
 * Defines the `NSString` with formatted value for this axis marker annotation.
 */
@property (copy, nonatomic, nullable) NSString *formattedValue;

/**
 * Defines the `ISCIFormattedValueProvider` which formats data value for this axis marker annotation.
 */
@property (strong, nonatomic, nonnull) id<ISCIFormattedValueProvider> formattedLabelValueProvider;

/**
 * Defines the font style for text.
 */
@property (strong, nonatomic, nonnull) SCIFontStyle *fontStyle;

/**
 * Defines the size of marker pointer in points.
 */
@property (nonatomic) CGFloat markerPointSize;

/**
 * Defines the Pen with which outline of axis marker annotation is drawn on chart surface.
 */
@property (strong, nonatomic, nonnull) SCIPenStyle *borderPen;

/**
 * Defines the Brush with which axis marker annotation is drawn on chart surface.
 */
@property (strong, nonatomic, nonnull) SCIBrushStyle *backgroundBrush;

/**
 * Gets axis instance where current `SCIAxisMarkerAnnotation` is placed.
 */
@property (strong, nonatomic, readonly, nullable) id<ISCIAxis> axis;

/**
 * Gets the `SCIAxisInfo` instance with current marker value.
 */
@property (strong, nonatomic, readonly, nullable) SCIAxisInfo *axisInfo;

@end
