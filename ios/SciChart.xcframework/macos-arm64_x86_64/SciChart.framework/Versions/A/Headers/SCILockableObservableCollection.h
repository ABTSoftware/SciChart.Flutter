//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILockableObservableCollection.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIReadWriteLock.h"

/**
 * Defines `SCIObservableCollection` with `SCIReadWriteLock` to ensure thread safety.
 * @note `T` Type of items.
 */
@interface SCILockableObservableCollection<__covariant T> : SCIObservableCollection<T>

/**
 * Gets or sets a synchronization object used to lock objects in this collection. Also locked on append, update, remove or clear.
 */
@property (strong, nonatomic, nonnull) SCIReadWriteLock *lock;

@end
