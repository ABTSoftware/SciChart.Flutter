//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMetadataProvider3DBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderableSeriesProviderBase.h"
#import "ISCIRenderableSeries3D.h"
#import "ISCIMetadataProvider3D.h"

/**
 * An abstract base class for `ISCIMetadataProvider3D` implementors.
 * @note `T` - is the type of the associated parent renderable series.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIMetadataProvider3DBase<T: id<ISCIRenderableSeries3D>> : SCIRenderableSeriesProviderBase<T><ISCIMetadataProvider3D, ISCIInvalidatableElement>

@end
