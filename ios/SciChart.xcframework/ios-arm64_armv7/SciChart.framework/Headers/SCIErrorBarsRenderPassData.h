//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIErrorBarsRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIHlRenderPassData.h"
#import "SCIErrorDirection.h"
#import "SCIErrorMode.h"
#import "SCIErrorType.h"

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIFastErrorBarsRenderableSeries`.
 */
@interface SCIErrorBarsRenderPassData : SCIHlRenderPassData

/**
 * Defines the `SCIErrorMode` value for this series.
 */
@property (nonatomic) SCIErrorMode errorMode;

/**
 * Defines  the `SCIErrorDirection` value for this series.
 */
@property (nonatomic) SCIErrorDirection errorDirection;

/**
 * Defines the `SCIErrorType` value for this series.
 */
@property (nonatomic) SCIErrorType errorType;

/**
 * Defines the value in pixels that determines each `ErrorBar` width.
 */
@property (nonatomic) float dataPointWidthPx;

@end
