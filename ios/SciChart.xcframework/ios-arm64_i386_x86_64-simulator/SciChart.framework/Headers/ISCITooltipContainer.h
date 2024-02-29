//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCITooltipContainer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIViewContainer.h"
#import "ISCIThemeable.h"
#import "SCITooltipPosition.h"

/**
 * Defines interface for the container, which can contain multiple `ISCITooltip`.
 */
@protocol ISCITooltipContainer <ISCIViewContainer, ISCIThemeable>

/**
 * Gets background color of this `ISCITooltipContainer` instance, which will be used to get inverted color which will be used as default text color.
 */
@property (nonatomic, readonly) unsigned int tooltipContainerBackgroundColor;

/**
 * Arranges child tooltips.
 */
- (void)arrangeSubviews;

/**
 * Place thiis `ISCITooltipContainer` in it's supervieiw at `point` according to passed in `SCITooltipPosition`.
 * @note Frame of the `ISCITooltipContainer` might be adjusted, if it's outside of superview bouds.
 * @param point The `CGPoint` to place tooltip at.
 * @param position The `SCITooltipPosition` which is used during placing this container.
 */
- (void)placeAt:(CGPoint)point withPosition:(SCITooltipPosition)position;
    
@end
