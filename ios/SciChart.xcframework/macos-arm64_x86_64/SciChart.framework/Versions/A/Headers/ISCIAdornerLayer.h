//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAdornerLayer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "UIView+ISCIHitTestable.h"
#import "ISCIAdornerProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to the Adorner Layer, which is used to draw adorners for the `ISCIAnnotation` instances.
 */
@protocol ISCIAdornerLayer <ISCIView>

/**
 * Adds `ISCIAdornerProvider` instance into this adorner layer.
 * @param adornerProvider The adorner provider to add.
 */
- (void)safeAddAdorner:(id<ISCIAdornerProvider>)adornerProvider;

/**
 * Removes `ISCIAdornerProvider` instance from this adorner layer.
 * @param adornerProvider The adorner provider to remove.
 */
- (void)safeRemoveAdorner:(id<ISCIAdornerProvider>)adornerProvider;

/**
 * Checks whether one of the adorner provider is hit at passed in point.
 * @return YES if one of the adorner providers hit, otherwise - NO.
 */
- (BOOL)isHitAdornerProviderAt:(CGPoint)point;

@end

NS_ASSUME_NONNULL_END
