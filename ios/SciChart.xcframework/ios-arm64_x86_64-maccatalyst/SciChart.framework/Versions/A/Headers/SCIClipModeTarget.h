//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIClipModeTarget.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines constants for behavior of the `SCIZoomPanModifier`.
 *
 * Possible values:
 * - `MaximumRange` - Means that you can pan within `MaximumRange` of axis which includes `ISCIAxisCore.growBy` factor.
 * - `DataRange` - Means that you can pan within `DataRange` of axis which does not include `ISCIAxisCore.growBy` factor.
 * - `VisibleRangeLimit` - Means that you can pan within `ISCIAxisCore.visibleRangeLimit`.
 */
typedef NS_ENUM(NSUInteger, SCIClipModeTarget) {
    /**
     * Means that you can pan within `ISCIAxisCore.maximumRange` which includes `ISCIAxisCore.growBy` factor.
     */
    SCIClipModeTarget_MaximumRange,
    
    /**
     * Means that you can pan within `ISCIAxisCore.dataRange` which does not include `ISCIAxisCore.growBy` factor.
     */
    SCIClipModeTarget_DataRange,
    
    /**
     * Means that you can pan within `ISCIAxisCore.visibleRangeLimit`.
     */
    SCIClipModeTarget_VisibleRangeLimit
};
