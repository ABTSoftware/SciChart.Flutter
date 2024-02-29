//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeries3DUpdate.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDataSeriesUpdateCore.h"

/**
 * Enumeration constants to define the type of update when the `SCIDataSeries3D` has changed.
 */
typedef NS_ENUM(NSUInteger, SCIDataSeries3DUpdate) {
    
    /**
     * The underlying data in `X direction` has changed.
     */
    SCIDataSeries3DUpdate_XChanged = 0x1,
    
    /**
     * The underlying data in `Y direction` has changed.
     */
    SCIDataSeries3DUpdate_YChanged = 0x2,
    
    /**
     * The underlying data in `Z direction` has changed.
     */
    SCIDataSeries3DUpdate_ZChanged = 0x4,
    
    /**
     * The underlying displacement data has changed. This flag is used by `SCIDisplaceableFreeSurfaceDataSeries3D`.
     */
    SCIDataSeries3DUpdate_DisplacementChanged = 0x8,
    
    /**
     * The underlying data in `X and Z direction` has changed.
     */
    SCIDataSeries3DUpdate_XzChanged = SCIDataSeries3DUpdate_XChanged | SCIDataSeries3DUpdate_YChanged,
    
    /**
     * The underlying data in `X, Y and Z direction` has changed.
     */
    SCIDataSeries3DUpdate_XyzChanged = SCIDataSeries3DUpdate_XChanged | SCIDataSeries3DUpdate_YChanged | SCIDataSeries3DUpdate_ZChanged,
    
    /**
     * The entire data series has changed.
     */
    SCIDataSeries3DUpdate_Changed = 0xFFFFFFFF
};
