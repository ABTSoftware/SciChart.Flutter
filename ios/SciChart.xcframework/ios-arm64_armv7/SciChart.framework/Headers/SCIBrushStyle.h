//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBrushStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIStyle.h"
#import "ISCIFillPaint.h"
#import "SCIColor.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class for specifying 2D brush style used to paint fill on the `ISCIRenderSurface`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 * @see `SCISolidBrushStyle`.
 * @see `SCILinearGradientBrushStyle`.
 * @see `SCIRadialGradientBrushStyle`.
 * @see `SCITextureBrushStyle`.
 */
@interface SCIBrushStyle : SCIStyle<NSCopying>

/**
 * Provides default instance of `SCISolidPenStyle`.
 */
@property (class, nonatomic, readonly) SCIBrushStyle *DEFAULT;

/**
 * Provides transparent (clear) instance of `SCISolidPenStyle`.
 */
@property (class, nonatomic, readonly) SCIBrushStyle *TRANSPARENT;

/**
 * Gets the color for this `SCIBrushStyle`.
 */
@property (nonatomic, readonly) SCIColor *color;

/**
 * Gets the rgba color code for this `SCIBrushStyle`.
 */
@property (nonatomic, readonly) unsigned int colorCode;

/**
 * Gets paint for drawing fill primitives using current SCIBrush style
 * @return ISCIFillPaint conforming object, which can fill primitives using current style
 */
@property (nonatomic, nonnull, readonly) id<ISCIFillPaint> paint;

@end

NS_ASSUME_NONNULL_END
