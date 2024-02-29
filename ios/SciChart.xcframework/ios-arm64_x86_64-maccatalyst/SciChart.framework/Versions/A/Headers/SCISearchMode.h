//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISearchMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define binary searching of lists.
 */
typedef NS_ENUM(NSUInteger, SCISearchMode) {
    /**
     * Specifies exact search. If the index is not found, -1 is returned.
     */
    SCISearchMode_Exact,
    
    /**
     * Specifies the nearest index. This will round up or down if the search is in-between x-values.
     */
    SCISearchMode_Nearest,
    
    /**
     * Rounds down to the nearest index.
     */
    SCISearchMode_RoundDown,
    /**
     * Rounds up to the nearest index.
     */
    SCISearchMode_RoundUp
};
