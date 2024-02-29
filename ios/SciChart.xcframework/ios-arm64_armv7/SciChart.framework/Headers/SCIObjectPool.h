//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIObjectPool.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIFactory.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a simple object pool implementation which allows to reuse object instances.
 */
@interface SCIObjectPool<T> : NSObject<ISCICleanable>

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Initializes a new `SCIObjectPool` instance.
 * @param factory The default factory which allows to create new instances for pooling.
 */
- (instancetype)initWithFactory:(SCIFactory)factory NS_DESIGNATED_INITIALIZER;

/**
 * Gets the size of pool.
 */
@property (nonatomic, readonly) unsigned int count;

/**
 * Get the value indicating whether the pool is empty.
 */
@property (nonatomic, readonly) BOOL isEmpty;

/**
 * Gets the item from the pool, if pool is empty default object factory is used.
 * @return Object from pool.
 */
- (T)get;

/**
 * Gets the item from the pool, if pool is empty default object factory is used.
 * @param factory The factory to use if pool doesn't have enough items.
 * @return Object from pool.
 */
- (T)getWithFactory:(SCIFactory)factory;

/**
 * Put item into pool for further reusing.
 * @param item The item to put into this pool.
 */
- (void)put:(T)item;

@end

NS_ASSUME_NONNULL_END
