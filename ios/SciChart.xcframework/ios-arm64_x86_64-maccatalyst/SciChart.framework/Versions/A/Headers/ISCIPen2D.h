//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPen2D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIPathColor.h"

/**
 * Defines the interface to a 2D pen, used to draw lines on the `ISCIRenderSurface`.
 */
@protocol ISCIPen2D <NSObject, ISCIPathColor>

/**
 * Get the stroke thickness of this pen in pixels.
 */
@property (nonatomic, readonly) float thickness;

/**
 * Gets the value indicating whether this pen should use antialiasing.
 */
@property (nonatomic, readonly) BOOL antialised;

/**
 * Gets the value indicating whether this pen has dash array.
 */
@property (nonatomic, readonly) BOOL hasDashes;

@end
