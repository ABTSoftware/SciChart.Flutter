//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeriesUpdateCore.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define the type of update when the `SCIDataSeriesCore` has changed.
 */
typedef NS_ENUM(NSUInteger, SCIDataSeriesUpdateCore) {
    /**
     * The property which is not related to underlying data has changed e.g. `ISCIDataSeriesCore.seriesName`.
     */
    SCIDataSeriesUpdateCore_PropertyChanged = 0x80000000,
};
