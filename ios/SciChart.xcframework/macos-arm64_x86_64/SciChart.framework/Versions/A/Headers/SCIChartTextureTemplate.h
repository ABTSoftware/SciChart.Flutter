//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartTextureTemplate.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumeration constants to define pre-packaged Textures.
 */
typedef NS_ENUM(NSUInteger, SCIChartTextureTemplate) {
    
    /**
     * The default texture (blank).
     */
    SCIChartTextureTemplate_Default,
    
    /**
     * The Circle texture.
     */
    SCIChartTextureTemplate_Circle,
    
    /**
     * The Square/Quad texture.
     */
    SCIChartTextureTemplate_Square,
    
    /**
     * The Triangle texture.
     */
    SCIChartTextureTemplate_Triangle,
    
    /**
     * The Max texture.
     */
    SCIChartTextureTemplate_Max,
};
