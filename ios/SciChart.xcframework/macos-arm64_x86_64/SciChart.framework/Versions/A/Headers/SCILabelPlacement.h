//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILabelPlacement.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define label placement.
 */
typedef NS_ENUM(NSUInteger, SCILabelPlacement) {
    /**
     * Places on the right.
     */
    SCILabelPlacement_Right,
    
    /**
     * Places at the top right.
     */
    SCILabelPlacement_TopRight,
    
    /**
     * Places at the bottom right.
     */
    SCILabelPlacement_BottomRight,
    
    /**
     * Places at the bottom.
     */
    SCILabelPlacement_Bottom,
    
    /**
     * Places on the left.
     */
    SCILabelPlacement_Left,
    
    /**
     * Places at the top left.
     */
    SCILabelPlacement_TopLeft,
    
    /**
     * Places at the bottom left.
     */
    SCILabelPlacement_BottomLeft,
    
    /**
     * Places at the top.
     */
    SCILabelPlacement_Top,
    
    /**
     * Places on the axis.
     */
    SCILabelPlacement_Axis,
    
    /**
     * Automatic placement (default).
     */
    SCILabelPlacement_Auto
};
