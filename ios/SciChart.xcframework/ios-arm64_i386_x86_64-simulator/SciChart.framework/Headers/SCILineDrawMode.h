//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILineDrawMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumerates constants to define how `NaN` is treated in the `SCIFastLineRenderableSeries` and `SCIFastMountainRenderableSeries`.
 */
typedef NS_ENUM(NSUInteger, SCILineDrawMode) {
    
    /**
     * `NaN` gaps are treated as closed lines.
     */
    SCILineDrawMode_ClosedLines = 0,
    
    /**
     * `NaN` gaps are rendered as gaps.
     */
    SCILineDrawMode_Gaps = 1,
};
