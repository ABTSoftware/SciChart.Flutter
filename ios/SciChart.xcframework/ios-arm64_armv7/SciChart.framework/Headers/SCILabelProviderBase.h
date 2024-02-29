//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILabelProviderBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCILabelProvider.h"
#import "SCIAxisProviderBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * An abstract base class to define a `LabelProvider`. The LabelProvider may be set onto `ISCIAxisCore.labelProvider` property, allowing programmatic overriding of axis labels.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCILabelProviderBase<T: id<ISCIAxisCore>> : SCIAxisProviderBase<T><ISCILabelProvider>

@end

NS_ASSUME_NONNULL_END
