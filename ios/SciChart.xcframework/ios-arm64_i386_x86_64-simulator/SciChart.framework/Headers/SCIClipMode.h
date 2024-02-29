//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIClipMode.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/**
 * Defines constants for behavior of the `SCIZoomPanModifier`.
 *
 * Possible values:
 * - `None` - Means you can pan right off the edge of the data into `uncharted` space.
 * - `StretchAtExtents` - Causes a zooming (stretch) action when you reach the `edge` of the data.
 * - `ClipAtMin` - Forces the panning operation to stop suddenly at the `minimum` of the data, but expand at the `maximum`.
 * - `ClipAtMax` - Forces the panning operation to stop suddenly at the `maximum` of the data, but expand at the `minimum`.
 * - `ClipAtExtents` - Forces the panning operation to stop suddenly at the `extents` of the data.
 */
typedef NS_ENUM(NSUInteger, SCIClipMode) {
    /**
     * Means you can pan right off the edge of the data into `uncharted` space.
     */
    SCIClipMode_None,
    
    /**
     * Causes a zooming (stretch) action when you reach the `edge` of the data.
     */
    SCIClipMode_StretchAtExtents,
    
    /**
     * Forces the panning operation to stop suddenly at the `minimum` of the data, but expand at the `maximum`.
     */
    SCIClipMode_ClipAtMin,
    
    /**
     * Forces the panning operation to stop suddenly at the `maximum` of the data, but expand at the `minimum`.
     */
    SCIClipMode_ClipAtMax,
    
    /**
     * Forces the panning operation to stop suddenly at the `extents` of the data.
     */
    SCIClipMode_ClipAtExtents
};
