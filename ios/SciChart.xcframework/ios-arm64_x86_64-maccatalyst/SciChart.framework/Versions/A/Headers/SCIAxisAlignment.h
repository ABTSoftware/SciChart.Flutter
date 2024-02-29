//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisAlignment.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define the alignment mode used to place an axis.
 *
 * Possible values:
 * - `Auto` - An element stretched to fill the entire layout slot for the parent element.
 * - `Right` - An element aligned to the right of the layout slot for the parent element.
 * - `Left` - An element aligned to the left of the layout slot for the parent element.
 * - `Top` - An element aligned to the top of the layout slot for the parent element.
 * - `Bottom` - An element aligned to the bottom of the layout slot for the parent element.
 */
typedef NS_ENUM(NSUInteger, SCIAxisAlignment) {
    /**
     * Axis is placed based on `default` settings of chart.
     */
    SCIAxisAlignment_Auto,
    
    /**
     * Axis is on the `Left-side` of the chart.
     */
    SCIAxisAlignment_Left,
    
    /**
     * Axis is on the `Top-edge` of the chart.
     */
    SCIAxisAlignment_Top,
    
    /**
     * Axis is on the `Right-side` of the chart.
     */
    SCIAxisAlignment_Right,
    
    /**
     * Axis is on the `Bottom-edge` of the chart.
     */
    SCIAxisAlignment_Bottom
};
