//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartSurfaceBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPropertyHolder.h"
#import "ISCIThemeable.h"
#import "ISCIChartModifierSurface.h"
#import "ISCIPublishEvents.h"
#import "SCIImage.h"
#import "UIView+ISCIHitTestable.h"
#import "SCIChartTheme.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A base interface for `SCIChartSurface` and `SCIPieChartSurface` classes.
 */
@protocol ISCIChartSurfaceBase <ISCIPropertyHolder, ISCIThemeable, ISCIPublishEvents, ISCIView>

/**
 * Defines the current theme applied to this `ISCIChartSurfaceBase`.
 */
@property (copy, nonatomic, readonly) NSString *themeId __deprecated_msg("Please use `theme:` instead");

/**
 * Defines the current theme applied to this `ISCIChartSurfaceBase`.
 */
@property (copy, nonatomic, readonly) SCIChartTheme theme;

/**
 * Gets the background brush style for `SCIChartSurface`.
 */
@property (strong, nonatomic) SCIBrushStyle *backgoundBrushStyle __deprecated_msg("Please use backgroundBrushStyle instead");

/**
* Gets the background brush style for `SCIChartSurface`.
*/
@property (strong, nonatomic) SCIBrushStyle *backgroundBrushStyle;

/**
 * Gets the `ISCIChartModifierSurface` instance for this `SCIChartSurface`.
 */
@property (strong, nonatomic, readonly) id<ISCIChartModifierSurface> modifierSurface;

/**
 * Export current chart surface into `UIImage` object by capturing the whole screen. It is used for taking screenshots.
 */
- (SCIImage *)exportToUIImage;

/**
 * Export current chart surface into `UIImage` object by capturing a custom rectangle. It is used for taking screenshots.
 */
- (SCIImage *)exportUIImageWithRect:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
