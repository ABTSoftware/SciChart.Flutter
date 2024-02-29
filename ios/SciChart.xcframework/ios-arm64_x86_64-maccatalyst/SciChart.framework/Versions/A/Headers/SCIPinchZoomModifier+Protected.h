//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPinchZoomModifier+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPinchZoomModifier.h"
#import "SCIGestureModifierBase+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIPinchZoomModifier`.
 */
@interface SCIPinchZoomModifier (Protected)

/**
 * Gets the `ISCIAxis` collection of the XAxes to which this modifier may be applicable on.
 */
@property (strong, nonatomic, readonly) SCIAxisCollection *applicableXAxes;

/**
 * Gets the `ISCIAxis` collection of the YAxes to which this modifier may be applicable on.
 */
@property (strong, nonatomic, readonly) SCIAxisCollection *applicableYAxes;

/**
 * Performs the zoom function. Called when the user double taps. May be overridden in derived classes to customize what the zoom actually does.
 */
- (void)performZoom;

/**
 * Performs a zoom around the passed in point by the specified X and Y factor.
 * @param point  The point to perform zoom around.
 * @param xScaleFactor The x zoom factor.
 * @param yScaleFactor The y zoom factor.
 */
- (void)performZoom:(CGPoint)point xScaleFactor:(CGFloat)xScaleFactor yScaleFactor:(CGFloat)yScaleFactor;

@end

NS_ASSUME_NONNULL_END
