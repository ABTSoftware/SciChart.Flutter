//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWorldDimensions.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIWorldDimensionsChangeObserver.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a `SCIVector3` for storing world dimensions where you can observe changes of its X, Y and Z values.
 */
@interface SCIWorldDimensions : SCIVector3

/**
 * Adds `SCIWorldDimensionsChangeObserver` instance to listen changes of this `SCIWorldDimensions` instance.
 * @param observer The observer to add.
 */
- (void)addWorldDimensionsChangeObserver:(SCIWorldDimensionsChangeObserver)observer;

/**
 * Removes `SCIWorldDimensionsChangeObserver` instance from list of change listeners for this `SCIWorldDimensions` instance.
 * @param observer The observer to remove.
 */
- (void)removeWorldDimensionsChangeObserver:(SCIWorldDimensionsChangeObserver)observer;

@end

NS_ASSUME_NONNULL_END
