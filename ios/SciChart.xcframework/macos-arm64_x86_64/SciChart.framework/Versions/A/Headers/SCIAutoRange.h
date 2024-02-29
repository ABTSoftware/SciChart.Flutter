//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAutoRange.h is part of SCICHART®, High Performance Scientific Charts
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
 * Provides enumeration constants to define auto range behavior for `ISCIAxis` implementors.
 */
typedef NS_ENUM(NSUInteger, SCIAutoRange) {
    /**
     * Allows Axis instance decide whether auto range or not when show Axis first time, e.g. if the current VisibleRange is nil or undefined.
     */
    SCIAutoRange_Once,
    
    /**
     * Auto range the Axis instance always.
     */
    SCIAutoRange_Always,
    
    /**
     * Never auto range the Axis instance.
     */
    SCIAutoRange_Never,
};
