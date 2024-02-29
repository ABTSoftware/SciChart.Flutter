//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMeshPaletteMode.h is part of SCICHART®, High Performance Scientific Charts
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
 * Enumerable constants which define the Mesh Palette mode.
 */
typedef NS_ENUM(NSUInteger, SCIMeshPaletteMode) {
    
    /**
     * Draw the `SCIMeshColorPalette` as a Height-map with interpolation between cells.
     */
    SCIMeshPaletteMode_HeightMapInterpolated,
    
    /**
     * Draw the `SCIMeshColorPalette` as a Height-map with solid color stepping between cells.
     */
    SCIMeshPaletteMode_HeightMapSolidCells,
    
    /**
     * Draw the `SCIMeshColorPalette` as a Texture (e.g. ignores height mapping) with interpolation between cells.
     */
    SCIMeshPaletteMode_Textured,

    /**
     * Draw the `SCIMeshColorPalette` as a Texture (e.g. ignores height mapping) with solid color stepping between cells.
     */
    SCIMeshPaletteMode_TexturedSolidCells
};
