//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIViewportManagerBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIInvalidatableElement.h"
#import "ISCIViewportManager.h"
#import "ISCIChartSurfaceBase.h"

/**
 * Defines a base abstract class for a `ViewportManager`, which may be used to control visible range and ranging on a `SCIChartSurface`.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIViewportManagerBase<TParentSurface : id<ISCIChartSurfaceBase>> : NSObject<ISCIViewportManager>

@end
