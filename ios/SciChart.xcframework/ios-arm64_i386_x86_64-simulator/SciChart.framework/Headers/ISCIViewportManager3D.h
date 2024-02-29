//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIViewportManager3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIViewportManager.h"
#import "ISCIChartController3D.h"

/**
 * Defines the interface to a `ViewportManager3D`, which may be used to intercept the `X-Axis`, `Y-Axis` and `Z-Axis` ranging during render and invalidate the parent surface.
 */
@protocol ISCIViewportManager3D <ISCIViewportManager, ISCIChartController3D>

/**
 * Called by the `SCIChartSurface3D` during render to update `Z-Axis` `ISCIAxisCore.visibleRange`.
 * @note Override in derived types to set a custom value.
 * @param zAxis The `Z-Axis` to update.
 */
- (void)updateZAxis:(nonnull id<ISCIAxisCore>)zAxis;

@end
