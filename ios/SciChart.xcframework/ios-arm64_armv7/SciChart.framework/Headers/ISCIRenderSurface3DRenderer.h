//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderSurface3DRenderer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIViewport3D.h"

/**
 * Defines interface for renderer which is used to render content of `ISCIRenderSurface3D`
 */
@protocol ISCIRenderSurface3DRenderer <NSObject>

/**
 * Draws frame using `ISCIViewport3D` instance.
 * @param viewport3D The viewport instance to draw on.
 */
- (void)drawFrame:(nonnull id<ISCIViewport3D>)viewport3D;

@end
