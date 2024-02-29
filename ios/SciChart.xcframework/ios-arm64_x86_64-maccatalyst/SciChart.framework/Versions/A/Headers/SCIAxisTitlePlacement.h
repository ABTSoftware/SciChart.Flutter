//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTitlePlacement.h is part of SCICHART®, High Performance Scientific Charts
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
 * Provide value with possible placement for axis title.
 */
typedef NS_ENUM(int, SCIAxisTitlePlacement) {
    /**
     * Axis title placed within axis.
     * @warning In this case title can overlap axis ticks and axis tick labels.
     */
    SCIAxisTitlePlacement_Inside,
    
    /**
     * Axis title placed to the left of the axis.
     */
    SCIAxisTitlePlacement_Left,
    
    /**
     * Axis title placed to the right of the axis.
     */
    SCIAxisTitlePlacement_Right,
    
    /**
     * Axis title placed on the top edge of the axis.
     */
    SCIAxisTitlePlacement_Top,
    
    /**
     * Axis title placed on the bottom edge of the axis.
     */
    SCIAxisTitlePlacement_Bottom,
    
    /**
     * Axit title placed according to default axis settings.
     */
    SCIAxisTitlePlacement_Auto
};
