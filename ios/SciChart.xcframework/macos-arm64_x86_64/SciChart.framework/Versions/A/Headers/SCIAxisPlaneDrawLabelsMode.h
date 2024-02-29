//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisPlaneDrawLabelsMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumerates modes for plane labels visibility.
 */
typedef NS_ENUM(NSUInteger, SCIAxisPlaneDrawLabelsMode) {
    
    /**
     * Draw on both sides of the plane.
     */
    SCIAxisPlaneDrawLabelsMode_Both,
    
    /**
     * Hide on both sides of the plane.
     */
    SCIAxisPlaneDrawLabelsMode_Hidden,
    
    /**
     * Draw on a single side of the plane for I axis (local X).
     */
    SCIAxisPlaneDrawLabelsMode_LocalX,
    
    /**
     * Draw on a single side of the plane for J axis (local Y).
     */
    SCIAxisPlaneDrawLabelsMode_LocalY
};
