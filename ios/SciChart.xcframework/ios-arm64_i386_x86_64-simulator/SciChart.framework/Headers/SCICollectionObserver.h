//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICollectionObserver.h is part of SCICHART®, High Performance Scientific Charts
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

@class SCIObservableCollection;
@class SCICollectionChangedEventArgs;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the listener for `SCIObservableCollection`.
 * Called when `SCIObservableCollection` changes.
 * @param collection The collection which changed.
 * @param args The `SCICollectionChangedEventArgs` instance with changes in collection.
 */
typedef void (^SCICollectionObserver) (SCIObservableCollection *collection , SCICollectionChangedEventArgs *args);

NS_ASSUME_NONNULL_END
