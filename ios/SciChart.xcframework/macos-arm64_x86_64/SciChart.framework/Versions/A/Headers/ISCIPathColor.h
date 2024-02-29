//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPathColor.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDisposable.h"

/**
 * A base interface for `ISCIPen2D` and `ISCIBrush2D`. Used by `ISCIRenderContext2D` to draw fills and lines.
 * @see `ISCIPen2D`.
 * @see `ISCIBrush2D`.
 * @see `ISCIRenderContext2D`.
 * @see `SCICompositePathColor`.
 */
@protocol ISCIPathColor <ISCIDisposable>

/**
 * Gets the color code of this path color instance.
 * @note Used internally by the renderer, gets the integer color-code that represents the Pen color.
 */
@property (nonatomic, readonly) unsigned int colorCode;

/**
 * Gets a value indicating whether this `ISCIPathColor` instance is transparent.
 */
@property (nonatomic, readonly) BOOL isTransparent;

@end
