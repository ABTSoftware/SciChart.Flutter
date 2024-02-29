//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeriesType.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define the Type of `SCIDataSeries`.
 */
typedef NS_ENUM(NSUInteger, SCIDataSeriesType) {
    
    /**
     * The `SCIDataSeries` which contains the Xy data.
     */
    SCIDataSeriesType_Xy,
    
    /**
     * The `SCIDataSeries` which contains the Xyy data.
     */
    SCIDataSeriesType_Xyy,
    
    /**
     * The `SCIDataSeries` which contains the Xyz data.
     */
    SCIDataSeriesType_Xyz,
    
    /**
     * The `SCIDataSeries` which contains the XyError data.
     */
    SCIDataSeriesType_Hl,
    /**
     * The `SCIDataSeries` which contains the OHLC data.
     */
    SCIDataSeriesType_Ohlc,
    /**
     * The `SCIDataSeries` which contains the data from 2D array.
     */
    SCIDataSeriesType_HeatMap
};
