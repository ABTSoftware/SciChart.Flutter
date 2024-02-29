//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISeriesInfo3DProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "ISCISeriesTooltip3D.h"

@class SCISeriesInfo3D;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface which creates `SCISeriesInfo3D` and tooltips based on `SCISeriesInfo3D` values.
 */
@protocol ISCISeriesInfo3DProvider <ISCIAttachable>

/**
 * Creates `SCISeriesInfo3D` instance which is attached to current `ISCIRenderableSeries3D`.
 */
@property (nonatomic, readonly) SCISeriesInfo3D *seriesInfo;

/**
 * Creates `ISCISeriesTooltip3D` instance which is attached to current `ISCIRenderableSeries3D`.
 */
@property (nonatomic, readonly) id<ISCISeriesTooltip3D> seriesTooltip;

/**
 * Creates `ISCISeriesTooltip3D` instance for specified `tooltipId` which is attached to current `ISCIRenderableSeries3D`.
 * @param modifierType The type of modifier for which tooltip will be created.
 * @return Tooltip instance.
 */
- (id<ISCISeriesTooltip3D>)getSeriesTooltip:(Class)modifierType;

@end

NS_ASSUME_NONNULL_END
