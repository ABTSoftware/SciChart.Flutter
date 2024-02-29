//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIResamplingMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines the ResamplingMode used by a RenderableSeries.
 */
enum SCIResamplingMode {
    /**
     * Do not use resampling when redrawing a series.
     */
    SCIResamplingMode_None = 0,
    
    /**
     * Assumes Evenly-spaced data (TimeSeries). Resample by taking the min-max of oversampled data.
     * This results in the most visually accurate resampling, with the most performant rendering.
     */
    SCIResamplingMode_MinMax = 1,
    
    /**
     * Assumes Evenly-spaced data (TimeSeries). Resample by taking the median point of oversampled data.
     */
    SCIResamplingMode_Mid = 2,
    
    /**
     * Assumes Evenly-spaced data (TimeSeries). Resample by taking the maximum point of oversampled data.
     */
    SCIResamplingMode_Max = 3,
    
    /**
     * Assumes Evenly-spaced data (TimeSeries). Resample by taking the minimum point of oversampled data.
     */
    SCIResamplingMode_Min = 4,
    
    /**
     * Assumes Evenly-spaced data (TimeSeries). Resample by taking the mininun or maximum point of oversampled data.
     */
    SCIResamplingMode_MinOrMax = 5,
    
    /**
     * Auto-detect the most suitable resampling algorithm (Fastest, plus most accurate) for the type of data appended.
     */
    SCIResamplingMode_Auto = SCIResamplingMode_MinMax
};

/**
 * Defines the ResamplingMode used by a RenderableSeries.
 */
typedef enum SCIResamplingMode SCIResamplingMode;
