//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFastUniformHeatmapRenderableSeries+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesBase+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIFastUniformHeatmapRenderableSeries`.
 */
@interface SCIFastUniformHeatmapRenderableSeries ()

@property (strong, nonatomic) SCISmartPropertyDouble *minimumProperty;
@property (strong, nonatomic) SCISmartPropertyDouble *maximumProperty;

@property (strong, nonatomic) SCISmartProperty *colorMapProperty;

// TODO: Implement drawing text in heatmap cells
@property (strong, nonatomic) SCISmartPropertyBool *drawTextInCellProperty;
//@property (strong, nonatomic) SCISmartProperty *cellTextStyleProperty;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIFastUniformHeatmapRenderableSeries`.
 */
@interface SCIFastUniformHeatmapRenderableSeries (Protected)

/**
 * Gets a string with formatted value for rendering inside cell if `SCIFastUniformHeatmapRenderableSeries.drawTextInCell is YES.
 * @param cellValue The value to formatю
 * @return The formatted valueю
 */
- (NSString *)formatCellToString:(double)cellValue;
    
@end

NS_ASSUME_NONNULL_END
