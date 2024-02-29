//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieSegment.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIThemeable.h"
#import "SCIPenStyle.h"
#import "SCIBrushStyle.h"
#import "SCIFontStyle.h"
#import "ISCIStyle.h"
#import "SCIPieSegmentChangeListener.h"
#import "ISCISuspendable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface for `SCIPieSegment`.
 */
@protocol ISCIPieSegment <ISCIThemeable, ISCISuspendable>

/**
 * Gets or sets the value of this segment.
 */
@property (nonatomic) double value;

/**
 * Gets or sets whether this segment is selected.
 */
@property (nonatomic) bool isSelected;

/**
 * Gets or sets the title of this segment.
 */
@property (strong, nonatomic) NSString *title;

/**
 * Gets or sets the stroke style of this segment.
 */
@property (strong, nonatomic) SCIPenStyle *strokeStyle;

/**
* Gets or sets the fill style of this segment.
*/
@property (strong, nonatomic) SCIBrushStyle *fillStyle;

/**
 * Gets or sets the font style of the title of this segment.
 */
@property (strong, nonatomic) SCIFontStyle *titleStyle;

/**
 * Gets or sets the `ISCIStyle` which is applied when segment is selected.
 */
@property (strong, nonatomic) id<ISCIStyle> selectedSegmentStyle;

/**
 * Add the listener which should be invoked if this segment becomes selected/unselected.
 * @param listener The listener to add.
 */
- (void)addIsSelectedChangeListener:(SCIPieSegmentChangeListener)listener;

/**
 * Removes the listener which should invoke if this segment become selected/unselected.
 * @param listener The listener to remove
 */
- (void)removeIsSelectedChangeListener:(SCIPieSegmentChangeListener)listener;

/**
 * Add the listener which should be invoked if this segment changes.
 * @param listener The listener to add.
 */
- (void)addChangeListener:(SCIPieSegmentChangeListener)listener;

/**
 * Removes the listener which should invoke if this segment changes.
 * @param listener The listener to remove.
 */
- (void)removeChangeListener:(SCIPieSegmentChangeListener)listener;

@end

NS_ASSUME_NONNULL_END
