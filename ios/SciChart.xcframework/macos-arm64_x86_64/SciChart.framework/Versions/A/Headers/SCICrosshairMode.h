//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICrosshairMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines constants for different cursor modes.
 * @see `SCITooltipModifier3D`
 */
typedef NS_ENUM(NSUInteger, SCICrosshairMode) {
    
    /**
     * Crosshair does not appear.
     */
    SCICrosshairMode_None,

    /**
     * Crosshair appears at the cursor point, consisting of the three lines which protrude from the corresponding walls of the viewport box.
     */
    SCICrosshairMode_Lines,
    
    /**
     * Crosshair appears at the cursor point, consisting of two intersecting planes.
     */
    SCICrosshairMode_Planes
};
