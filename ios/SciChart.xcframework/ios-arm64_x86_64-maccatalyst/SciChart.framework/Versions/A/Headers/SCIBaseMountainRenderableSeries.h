//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseMountainRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyRenderableSeriesBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * An abstract base class for mountain series.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIBaseMountainRenderableSeries : SCIXyRenderableSeriesBase

/**
 * Gets the or sets `SCIBrushStyle` to fill mountain area with.
 */
@property (strong, nonatomic) SCIBrushStyle *areaStyle;

/**
 * Gets the or sets `SCITextureMappingMode` which defines how mountain area is filled when a gradient is used.
 */
@property (nonatomic) SCITextureMappingMode areaBrushMappingMode;

@end

NS_ASSUME_NONNULL_END
