//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisSideClipping.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumerates possible kinds of Renderable Series clipping by a particular side of the 3D axis.
 */
typedef NS_ENUM(NSUInteger, SCIAxisSideClipping) {
    
    /**
     * Default clipping is VisibleRange for X and Z Axis, and None for Y Axis.
     */
    SCIAxisSideClipping_Default,
    
    /**
     * Clipping is disabled.
     */
    SCIAxisSideClipping_None,
    
    /**
     * Renderable Series is clipped by visible range.
     */
    SCIAxisSideClipping_VisibleRange
};
