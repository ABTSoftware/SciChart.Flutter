//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieHitTestInfoUpdatable.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import "SCIPieHitTestInfo.h"
#import "ISCIPieRenderableSeries.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface with methods for updating hit test related data
 * @see `-[ISCIPieRenderableSeries hitTest:at:]`.
 */
@protocol ISCIPieHitTestInfoUpdatable <ISCICleanable>

/**
 * Gets the parent renderable series
 */
@property (nonatomic, readonly) id<ISCIPieRenderableSeries> renderableSeries;

/**
 * Updates this instance with information provided by `SCIPieHitTestInfo` instance.
 * @param pieHitTestInfo The results of hit test.
 */
- (void)update:(SCIPieHitTestInfo *)pieHitTestInfo;

@end

NS_ASSUME_NONNULL_END
