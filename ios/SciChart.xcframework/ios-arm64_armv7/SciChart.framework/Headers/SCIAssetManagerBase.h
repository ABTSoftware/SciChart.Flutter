//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAssetManagerBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisposableBase.h"
#import "ISCIAssetManager2D.h"

/**
 * An abstract base class for the AssetManager, which handles all assets which are used for drawing on `ISCIRenderSurface` instance via `ISCIRenderContext2D` methods.
 * @see `ISCIRenderSurface`.
 * @see `ISCIRenderContext2D`.
 */
@interface SCIAssetManagerBase : SCIDisposableBase<ISCIAssetManager2D>

@end
