//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILayoutManagerBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCILayoutManager.h"
#import "ISCIServiceContainer.h"

@protocol ISCIChartSurface;

NS_ASSUME_NONNULL_BEGIN

/**
 * Base class for implementation of custom LayoutManager.
 */
@interface SCILayoutManagerBase : NSObject<ISCILayoutManager>

/**
 * Gets the `ISCIServiceContainer` instance which provides access to services.
 */
@property (weak, nonatomic, nullable) id<ISCIServiceContainer> services;

/**
 * Gets the parent surface that this instance is associated with.
 */
@property (weak, nonatomic, nullable) id<ISCIChartSurface> parentSurface;

/**
 * Notify all annotations which are attached to `axis` about changing of axis alignment.
 * @param axis axis which has been changed.
 * @param oldValue old axis alignment.
 * @param newValue new axis alignment.
 */
- (void)notifyOnAxisAlignmentChanged:(id<ISCIAxis>)axis oldValue:(SCIAxisAlignment)oldValue newValue:(SCIAxisAlignment)newValue;

/**
 * Layout center parts of charts such as `ISCIRenderableSeriesArea  and `ISCIChartModifierSurface`.
 * @param left left position of area relative to parent `SCIChartSurface`.
 * @param top top position of area relative to parent `SCIChartSurface`.
 * @param right right position of area relative to parent `SCIChartSurface`.
 * @param bottom bottom position of area relative to parent `SCIChartSurface`.
 */
- (void)layoutChartCenterWithLeft:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom;

@end

NS_ASSUME_NONNULL_END
