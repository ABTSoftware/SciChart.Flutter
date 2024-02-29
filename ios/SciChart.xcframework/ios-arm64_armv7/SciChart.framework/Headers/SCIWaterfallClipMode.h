//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWaterfallClipMode.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines an enumeration of possible clipping modes for data points in `SCIWaterfallRenderableSeries3D`.
 */
typedef NS_ENUM(NSUInteger, SCIWaterfallClipMode) {
    
    /**
     * All vertices that have `Y values` greater than zero will be clipped to zero.
     */
    SCIWaterfallClipMode_AboveZero,

    /**
     * All vertices that have `Y values` less than zero will be clipped to zero.
     */
    SCIWaterfallClipMode_BelowZero,
    
    /**
     * All vertices will appear as they are.
     * @note This is the default mode.
     */
    SCIWaterfallClipMode_None
};
