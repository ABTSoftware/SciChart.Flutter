//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisInfoProvider.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIAxisInfo.h"
#import "ISCIAxisTooltip.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface which creates `SCIAxisInfo` and tooltips based on `SCIAxisInfo` values.
 */
@protocol ISCIAxisInfoProvider <ISCIAttachable>

/**
 * Creates new instance of `SCIAxisInfo` for assicoated axis.
 */
@property (nonatomic, readonly) SCIAxisInfo *axisInfo;

/**
 * Creates new instance of `ISCIAxisTooltip` for further placement on assicoated axis.
 */
@property (nonatomic, readonly) id<ISCIAxisTooltip> axisTooltip;

/**
 * Creates `ISCIAxisTooltip` instance for specified `tooltipId` which is attached to current assicoated `ISCIAxis`.
 * @param modifierType The type of modifier for which tooltip will be created.
 * @return The `ISCIAxisTooltip` instance which is attached to assicoated Axis.
 */
- (id<ISCIAxisTooltip>)getAxisTooltipForModifierType:(Class)modifierType;

@end

NS_ASSUME_NONNULL_END
