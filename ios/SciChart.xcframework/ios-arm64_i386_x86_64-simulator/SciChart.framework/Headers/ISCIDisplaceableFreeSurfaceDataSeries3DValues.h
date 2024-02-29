//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIDisplaceableFreeSurfaceDataSeries3DValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIFreeSurfaceDataSeries3DValues.h"
#import "ISCIDoubleValuesProvider.h"
#import "SCIDisplacementAxis3D.h"

/**
 * Defines the interface to FreeSurfaceDataSeries3D values with the Displacement Map, applied to its points displacing them along X and/or Y and/or Z axes.
 */
@protocol ISCIDisplaceableFreeSurfaceDataSeries3DValues <ISCIFreeSurfaceDataSeries3DValues>

/**
 * Gets Displacement Map values.
 */
@property (nonatomic, readonly, nullable) id<ISCIDoubleValuesProvider> displacementValues;

/**
 * Gets value determining whether the displacement is absolute.
 * @note This means that surface is displaced by a value from the displacement map by specified displacement axes absolutely, ignoring its relative direction from the origin.
 */
@property (nonatomic, readonly) BOOL isAxesPropagationAbsolute;

/**
 * Gets axes by which surface can be displaced.
 */
@property (nonatomic, readonly) SCIDisplacementAxis3D displacementAxis;

@end
