//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationCoordinateMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define the Coordinate mode used to place an annotation.
 */
typedef NS_ENUM(NSUInteger, SCIAnnotationCoordinateMode) {
    /**
     * Absolute - requires that coordinates `X1, Y1, X2, Y2` are data-values
     */
    SCIAnnotationCoordinateMode_Absolute,
    
    /**
     * Relative - requires that coordinates `X1, Y1, X2, Y2` are double values between 0.0 and 1.0
     */
    SCIAnnotationCoordinateMode_Relative,
    
    /**
     * RelativeX - requires that coordinates `X1, X2` are double values between 0.0 and 1.0, whereas `Y1, Y2` are data-values
     */
    SCIAnnotationCoordinateMode_RelativeX,
    
    /**
     * RelativeY - requires that coordinates `Y1, Y2` are double values between 0.0 and 1.0, whereas `X1, X2` are data-values
     */
    SCIAnnotationCoordinateMode_RelativeY
};
