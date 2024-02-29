//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIMeshBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIImediateDrawContext.h"

/**
 * Defines the interface to a Mesh, a re-usable 3D model which may be dynamically created, frozen, and repeatedly drawn.
 */
@protocol ISCIMeshBase <ISCIImediateDrawContext>

/**
 * Freezes this instance. No further drawing may be done.
 */
- (void)freeze;

/**
 * Draws this instance.
 */
- (void)draw;

/**
 * Sets the `[X, Y, Z, W]` values of the current vertex.
 * @param x The x value.
 * @param y The y value.
 * @param z The z value.
 * @param w The z value.
 */
- (void)setVertext4X:(float)x Y:(float)y Z:(float)z W:(float)w;

/**
 * Sets the opacity for the current vertex.
 * @param opacity The opacity.
 */
- (void)setOpacity:(float)opacity;

@end
