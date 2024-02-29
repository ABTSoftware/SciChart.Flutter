//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMetalRenderSurfaceBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import <MetalKit/MetalKit.h>
#import "ISCIRenderSurfaceBase.h"
#import "ISCICommonInitializer.h"

/**
 * Provides the `MTKView` based render surface base implementation which is used for `Metal` renderinig.
 */
@interface SCIMetalRenderSurfaceBase : MTKView<ISCIRenderSurfaceBase, ISCICommonInitializer>

/**
 * Checks if metal is supported on current device.
 */
@property (class, nonatomic, readonly) BOOL isMetalSupported;

@end
