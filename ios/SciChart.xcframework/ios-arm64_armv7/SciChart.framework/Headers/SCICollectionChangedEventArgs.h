//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICollectionChangedEventArgs.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines an enumeration with collection changed types.
 */
typedef NS_ENUM(NSUInteger, SCICollectionChangedAction) {
    /**
     * Add one or more items from collection
     */
    SCICollectionChangedAction_Add,

    /**
     * Remove one or more items from collection
     */
    SCICollectionChangedAction_Remove,

    /**
     * Replace one or more items in collection
     */
    SCICollectionChangedAction_Replace,

    /**
     * Reset the content of collection
     */
    SCICollectionChangedAction_Reset
};

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which contains changes of `SCIObservableCollection`.
 * @note `E` - is the type of elements in the changed `SCIObservableCollection`.
 */
@interface SCICollectionChangedEventArgs<T> : NSObject<ISCICleanable> {
    /// :nodoc:
    @package NSMutableArray<T> *_newItems;
    
    /// :nodoc:
    @package NSMutableArray<T> *_oldItems;
}

/**
 * Gets the list of new items involved in the change.
 */
@property (strong, nonatomic, readonly) NSArray<T> *newItems;

/**
 * Gets the old items which were removed or replaced in this change.
 */
@property (strong, nonatomic, readonly) NSArray<T> *oldItems;

/**
 * Gets the index at which the change occurred.
 */
@property (nonatomic) NSInteger newIndex;

/**
 * Gets the index at which the change occurred.
 */
@property (nonatomic) NSInteger oldIndex;

/**
 * Gets the action that caused the event.
 */
@property (nonatomic) SCICollectionChangedAction action;

@end

NS_ASSUME_NONNULL_END
