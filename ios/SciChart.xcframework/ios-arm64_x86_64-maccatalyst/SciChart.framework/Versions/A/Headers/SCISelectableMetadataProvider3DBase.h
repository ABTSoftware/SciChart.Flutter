//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISelectableMetadataProvider3DBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIMetadataProvider3DBase.h"
#import "ISCISelectableMetadataProvider3D.h"
#import "SCIBoolValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defiens base class for metadata provider where each point can be selected separately.
 * @note `T` - is the type of the associated parent renderable series.
 */
@interface SCISelectableMetadataProvider3DBase<T: id<ISCIRenderableSeries3D>>: SCIMetadataProvider3DBase<T><ISCISelectableMetadataProvider3D>

/**
 * Proviides the warning message is you hasn't implemented `ISCISelectableMetadataProvider3D`.
 */
@property (class, nonatomic, readonly, nonnull) NSString *SelectableMetadataProviderWarningMessage;

/**
 * Provides the collection of selected values.
 */
@property (nonatomic, readonly, nonnull) SCIBoolValues *isSelectedValues;

@end

NS_ASSUME_NONNULL_END
