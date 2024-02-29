//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISourceMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines constants for different series sources in `SCIChartSurface`.
 */
typedef NS_OPTIONS(NSUInteger, SCISourceMode) {
    /**
     * The modifier uses `All Series` as inputs.
     */
    SCISourceMode_AllSeries,
    
    /**
     * The modifier uses `All Visible Series` as inputs.
     */
    SCISourceMode_AllVisibleSeries,
    
    /**
     * The modifier uses `Selected Series` as inputs.
     */
    SCISourceMode_SelectedSeries,
    
    /**
     * The modifier uses `Unselected Series` as inputs.
     */
    SCISourceMode_UnselectedSeries
};
