//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITextAlignment3D.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define alignment of Text in 3D space.
 */
typedef NS_ENUM(NSUInteger, SCITextAlignment3D) {
    
    /**
     * Default alignment.
     */
    SCITextAlignment3D_Default = 2,
    
    /**
     * Align (billboard) to camera.
     */
    SCITextAlignment3D_Camera = 3,
    
    /**
     * 2D text.
     */
    SCITextAlignment3D_ScreenHorizontal = 0,
    
    /**
     * 2D text, rotated with alignment to corresponding object ( i.e. tick ).
     */
    SCITextAlignment3D_ScreenAutoRotated = 1
};
