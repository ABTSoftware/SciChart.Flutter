//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIColumnRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzRenderPassData3D.h"
#import "SCIUnsignedIntegerValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines `SCIColumnRenderPassData3D`, the data used in a single render pass by `SCIColumnRenderableSeries3D`.
 */
@interface SCIColumnRenderPassData3D : SCIXyzRenderPassData3D

/**
 * Defines the collection of scales for the `column`.
 */
@property (strong, nonatomic) SCIFloatValues *instanceScales;

/**
 * Provides a collection of column colors which is used for the single render pass.
 */
@property (strong, nonatomic) SCIUnsignedIntegerValues *colors;

/**
 * Defines the value in pixels that determines each `column` size.
 */
@property (nonatomic) float columnSize;

@end

NS_ASSUME_NONNULL_END
