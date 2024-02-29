//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieSegmentRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFontStyle.h"
#import "SCIPenStyle.h"
#import "SCIBrushStyle.h"
#import "ISCICleanable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines render pass data which is required to draw single `ISCIPieSegment`.
 */
@interface SCIPieSegmentRenderPassData : NSObject<ISCICleanable>

/**
 * Gets or sets titleStyle for `SCIPieSegment`.
 */
@property (strong, nonatomic) SCIFontStyle *titleStyle;

/**
 * Gets or sets strokeStyle for `SCIPieSegment`.
 */
@property (strong, nonatomic) SCIPenStyle *strokeStyle;

/**
 * Gets or sets fillStyle for `SCIPieSegment`.
 */
@property (strong, nonatomic) SCIBrushStyle *fillStyle;

/**
 * Gets or sets isSelected for `SCIPieSegment`.
 */
@property (nonatomic) BOOL isSelected;

/**
 * Gets or sets formattedLabel for `SCIPieSegment`.
 */
@property (strong, nonatomic) NSString *formattedLabel;

/**
 * Gets or sets startAngle for `SCIPieSegment`.
 */
@property (nonatomic) CGFloat startAngle;

/**
 * Gets or sets segmentAngle for `SCIPieSegment`.
 */
@property (nonatomic) CGFloat segmentAngle;

@end

NS_ASSUME_NONNULL_END
