//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAttachableObservableCollection.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIAttachable.h"
#import "ISCIServiceProvider.h"
#import "ISCICommonInitializer.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a collection implementation which allows to get notification about adding, removing objects from it.
 * @note `T` is the type of underlying objects.
 * @note `T` should be at least of type `ISCIAttachable`.
 */
@interface SCIAttachableObservableCollection<T : id<ISCIAttachable>> : SCIObservableCollection<T><ISCIAttachable, ISCIServiceProvider, ISCICommonInitializer>

/**
 * Initializes a new instance of `SCIAttachableObservableCollection` class.
 * @param collection The collections with `ISCIAttachable` items to add.
 */
- (instancetype)initWithCollection:(NSArray<T> *)collection;

@end

NS_ASSUME_NONNULL_END
