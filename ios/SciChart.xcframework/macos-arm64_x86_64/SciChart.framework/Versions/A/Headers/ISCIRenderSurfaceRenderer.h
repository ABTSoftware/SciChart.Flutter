//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderSurfaceRenderer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDrawable.h"

@protocol ISCIRenderSurface;

/**
 * Defines the protocol for renderer which is used to render content of `ISCIRenderSurface`.
 */
@protocol ISCIRenderSurfaceRenderer <ISCIDrawable>

/**
 * Called when renderer is attached to new `ISCIRenderSurface` instance.
 * @param renderSurface The target render surface.
 */
- (void)onSurfaceAttached:(nullable id<ISCIRenderSurface>)renderSurface;

/**
 * Called when renderer is detached from current `ISCIRenderSurface` instance.
 * @param renderSurface The target render surface.
 */
- (void)onSurfaceDetached:(nullable id<ISCIRenderSurface>)renderSurface;

@end
