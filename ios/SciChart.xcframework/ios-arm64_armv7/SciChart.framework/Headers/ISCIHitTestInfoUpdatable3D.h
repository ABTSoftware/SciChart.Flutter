//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIHitTestInfoUpdatable3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIHitTestInfo3D.h"

@protocol ISCIRenderableSeries3D;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the protocol with methods for updating hit test related data.
 * @see `-[ISCIRenderableSeries3D hitTest:at:]`.
 * @see `-[ISCIRenderableSeries3D hitTest:selection:]`.
 */
@protocol ISCIHitTestInfoUpdatable3D <ISCICleanable>

/**
 * Gets the parent renderable series..
 */
@property (strong, nonatomic, readonly) id<ISCIRenderableSeries3D> renderableSeries;

/**
 * Updates this instance with information provided by `hitTestInfo` instance.
 * @param hitTestInfo The results of hit test.
 */
- (void)update:(SCIHitTestInfo3D *)hitTestInfo;

@end

NS_ASSUME_NONNULL_END
