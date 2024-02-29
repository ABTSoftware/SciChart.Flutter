//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFreeSurfaceDataSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFreeSurfaceDataSeries3D.h"
#import "SCIDataSeries3D+Protected.h"
#import "SCIDataSeriesCore+Protected.h"
#import "SCIMeshIndexCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIFreeSurfaceDataSeries3D`.
 */
@interface SCIFreeSurfaceDataSeries3D ()

@property (nonatomic, readonly) SCIMeshIndexCalculator *indexCalculator;

@property (strong, nonatomic) id<ISCIComparable> offsetX;
@property (strong, nonatomic) id<ISCIComparable> offsetY;
@property (strong, nonatomic) id<ISCIComparable> offsetZ;

@end

NS_ASSUME_NONNULL_END
