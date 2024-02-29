//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesTooltipBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesTooltipCore.h"
#import "ISCISeriesTooltip.h"
#import "SCISeriesInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A base class for `ISCISeriesTooltip` implementors.
 */
@interface SCISeriesTooltipBase<T: SCISeriesInfo *> : SCISeriesTooltipCore<T><ISCISeriesTooltip>

/**
 * Creates a new instance of `SCISeriesTooltipBase` class.
 * @param seriesInfo The series info instance.
 */
- (instancetype)initWithSeriesInfo:(T)seriesInfo NS_DESIGNATED_INITIALIZER;

/**
 * Draws tooltip overlay at specified coordinate with provided color.
 * @param rect The portion of the view’s bounds that needs to be updated.
 * @param coordinate The point to draw overlay at.
 * @param color The color of overlay.
 */
- (void)onDrawTooltipOverlayInRect:(CGRect)rect atCoordinate:(CGPoint)coordinate withColor:(SCIColor *)color;

@end

NS_ASSUME_NONNULL_END
