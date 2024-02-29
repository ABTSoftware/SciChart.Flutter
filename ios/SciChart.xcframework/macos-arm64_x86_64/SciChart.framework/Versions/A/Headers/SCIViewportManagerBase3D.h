//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIViewportManagerBase3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIViewportManagerBase.h"
#import "ISCIChartSurface3D.h"
#import "ISCIViewportManager3D.h"

/**
 * Defines a base class for a `ViewportManager`, which may be used to control VisibleRange and ranging and to perform zoom operations on a `SCIChartSurface3D`.
 */
@interface SCIViewportManagerBase3D<TParentSurface : id<ISCIChartSurface3D>> : SCIViewportManagerBase<TParentSurface><ISCIViewportManager3D>

@end
