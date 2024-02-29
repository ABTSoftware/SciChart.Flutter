//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChart3DRenderer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRenderSurface3DRenderer.h"

@protocol ISCIChartSurface3D;

NS_ASSUME_NONNULL_BEGIN

/**
 * Default the `ISCIRenderSurface3DRenderer` implementation used `SCIChartSurface3D` to render its content.
 */
@interface SCIChart3DRenderer : NSObject<ISCIRenderSurface3DRenderer>

/**
 * Creates a new instance of `SCIChart3DRenderer` class.
 * @param surface The `ISCIChartSurface3D` instance.
 */
- (instancetype)initWithChartSurface:(id<ISCIChartSurface3D>)surface;

@end

NS_ASSUME_NONNULL_END
