//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIProjectionCollection.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIObservableCollection.h"
#import "SCIFunc1.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines special read-only collection which projects items of one collection into another collection according to specified transform function.
 * @note `T` - is the type of items to project to.
 * @note `TSource` - is the type of source items which need to be projected.
 */ 
@interface SCIProjectionCollection<__covariant T, __covariant TSource> : SCIObservableCollection<T>

/**
 * Creates a new `SCIProjectionCollection` instance with specified projection function.
 * @param func The function which transforms item from source collection to target item.
 */
- (instancetype)initWithProjectionFunc:(SCIFunc1)func;

/**
 * Creates a new `SCIProjectionCollection` instance with specified projection function.
 * @param collection The source collection to project from.
 * @param func The function which transforms item from source collection to target item.
 */
- (instancetype)initWithSourceCollection:(SCIObservableCollection *)collection projectionFunc:(SCIFunc1)func;

/**
 * Defines the source collection which is used to project from.
 */
@property (weak, nonatomic) SCIObservableCollection<TSource> *sourceCollection;

@end

NS_ASSUME_NONNULL_END
