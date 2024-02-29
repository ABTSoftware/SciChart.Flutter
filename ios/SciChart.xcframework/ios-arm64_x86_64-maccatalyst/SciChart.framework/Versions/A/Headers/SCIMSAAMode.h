//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMSAAMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines the modes of MSAA that might be used to remove aliasing in drawing throuthout SciChart.
 */
typedef NS_ENUM(NSUInteger, SCIMSAAMode) {
    /**
     * Anti-aliasing isn't used, sample count = 1.
     */
    SCIMSAAMode_msaaNone,
    
    /**
     * MSAA will use sampleCount = 2.
     */
    SCIMSAAMode_msaa2x,
    
    /**
     * MSAA will use sampleCount = 4.
     */
    SCIMSAAMode_msaa4x,
};
