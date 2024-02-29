//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTitleOrientation.h is part of SCICHART®, High Performance Scientific Charts
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
 * Provides values with possible orientation of axis title.
 */
typedef NS_ENUM(NSUInteger, SCIAxisTitleOrientation) {
    /**
     * Axis title placed horizontally.
     */
    SCIAxisTitleOrientation_Horizontal,
    
    /**
     * Axis title placed vertically and title is drawn from top to bottom.
     */
    SCIAxisTitleOrientation_Vertical,
    
    /**
     * Axis title placed vertically and title is drawn from bottom to top.
     */
    SCIAxisTitleOrientation_VerticalFlipped,
    
    /**
     * Axis title placed according to default axis settings.
     */
    SCIAxisTitleOrientation_Auto
};
