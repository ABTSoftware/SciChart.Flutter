//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIObservableCollection.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>
#import "SCICollectionChangedEventArgs.h"
#import "SCIPredicate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a collection implementation which allows to get notification about adding, removing objects from it.
 * @note `T` is the type of underlying objects.
 */
@interface SCIObservableCollection<__covariant T> : NSObject<NSFastEnumeration>

/**
 * Checks if this colection is empty or no.
 * @return YES if count is 0, otherwise - NO.
 */
@property (nonatomic, readonly) BOOL isEmpty;

/**
 * Gets the quantity of objects in collection.
 */
@property (nonatomic, readonly) NSInteger count;

/**
 * Gets the first object from this instance of `SCIObservableCollection`.
 */
@property (strong, nonatomic, readonly) T firstObject;

/**
 * Creates a new `SCIObservableCollection` instance.
 * @param capacity The initial capacity.
 */
- (instancetype)initWithCapacity:(NSInteger)capacity;

/**
 * Creates a new `SCIObservableCollection` instance which contains the elements of the specified collection.
 * @param collection The collection with items to add.
 */
- (instancetype)initWithCollection:(NSArray<T> *)collection;

/**
 * Checks is the `object` is in the collection.
 * @param object The object to check.
 * @return YES if the object is in collection, otherwise - NO;
 */
- (BOOL)contains:(T)object;

/**
 * Add an object into this `SCIObservableCollection` instance.
 * @param object The object to add.
 */
- (void)add:(T)object;

/**
 * Add an object into this `SCIObservableCollection` instance if it wasn't added before, otherwise nothing happens
 * @param object The object to add.
 */
- (void)safeAdd:(T)object;

/**
 * Add objects into `SCIObservableCollection`.
 * @param objects The objects to add.
 */
- (void)addAll:(T)objects, ... NS_REQUIRES_NIL_TERMINATION;

/**
 * Insert object into `SCIObservableCollection` at Index.
 * @param object The object to insert.
 * @param index The index to insert `object` at.
 */
- (void)insert:(T)object at:(NSInteger)index;

/**
 * Returns the index of the first occurrence of the specified element in this collection.
 * @return Returns the index of the first occurrence, otherwise - 1.
 */
- (NSInteger)indexOf:(T)object;

/**
 * Returns the object located at the specified index.
 * @param index An index within the bounds of the array.
 * @return The object located at index.
 */
- (T)itemAt:(NSInteger)index;

/**
 * Replaces the element at the specified position in this collection with the specified element.
 * @param object object to be stored at the specified position
 * @param index index of the element to replace
 */
- (void)setObject:(T)object at:(NSInteger)index;

/**
 * Removes object instance from this collection.
 * @param object Object instance to be deleted from the collection, if present in it.
 * @return YES If object is removed, otherwise - NO.
 */
- (BOOL)remove:(T)object;

/**
 * Removes objects instance from collection.
 * @param index Index of object, which will be deleted from collection.
 */
- (void)removeAt:(NSInteger)index;

/**
 * Removes all objects from collection.
 */
- (void)clear;

/**
 * Add observer for the collection.
 */
- (void)addObserver:(void(^)(SCIObservableCollection<T> *collection, SCICollectionChangedEventArgs<T> *args))observer;

/**
 * Remove observer from the collection.
 */
- (void)removeObserver:(void(^)(SCIObservableCollection<T> *collection, SCICollectionChangedEventArgs<T> *args))observer;

/**
 * Remove all observers from the collection.
 */
- (void)removeAllObservers;

@end

/**
 * Category which provides ability to get object from collection by index. And set object by index.
 */
@interface SCIObservableCollection<__covariant T> (Indexing)

/**
 * Returns the object at the specified index.
 * @param idx An index within the bounds of the array.
 * @return The object located at index.
 */
- (T)objectAtIndexedSubscript:(NSInteger)idx;

/**
 * Replaces the object at the index with the new object, possibly adding the object.
 * @param obj The object with which to replace the object at index index in the array. This value must not be nil.
 * @warning Raises an `NSInvalidArgumentException` if the `obj` is nil.
 * @param idx The index of the object to be replaced. This value must not exceed the bounds of the array.
 * @warning Raises an `NSRangeException` if index is beyond the end of the array.
 */
- (void)setObject:(T)obj atIndexedSubscript:(NSInteger)idx;

@end

/**
 * Defines a helper category for work with `SCIObservableCollection`.
 */
@interface SCIObservableCollection<__covariant T> (LINQ)

/**
 * Checks whether the collection is nil or empty.
 * @return YES if the collection is nil or empty.
 */
+ (BOOL)isNilOrEmpty:(SCIObservableCollection *)collection;

/**
 * Checks whether the collection contains at least one object which satisfies specified predicate.
 * @param predicate  The predicate to check.
 * @return YES if list contains at least one object which satisfies specified predicate.
 */
- (BOOL)any:(SCIPredicate)predicate;

/**
 * Checks whether all list objects satisfy specified predicate.
 * @param predicate  The predicate to check.
 * @return YES if all list objects satisfy specified predicate.
 */
- (BOOL)all:(SCIPredicate)predicate;

/**
 * Selects all items which satisfy specified predicate.
 * @param predicate  The predicate to check.
 * @return The collection with selected items.
 */
- (instancetype)where:(SCIPredicate)predicate;

/**
 * Selects all items which satisfy specified predicate.
 * @param predicate  The predicate to check.
 * @param destination The list where selected items should be saved
 */
- (void)where:(SCIPredicate)predicate withDestination:(SCIObservableCollection *)destination;

/**
 * Gets count of items from the list which satisfy specified predicate.
 * @param predicate  The predicate to check.
 * @return Count of items from the list which satisfy specified predicate.
 */
- (NSInteger)count:(SCIPredicate)predicate;

/**
 * Selects the first item from the list, if list is empty returns nil.
 * @return The first item from the list, or nil if list is empty.
 */
- (nullable T)firstOrDefault;

/**
 * Selects the first item from the list which satisfies specified predicate, if list is empty or match not found returns nil.
 * @param predicate  The predicate to check.
 * @return The first item from the list which satisfies specified predicate,, or null if list is empty.
 */
- (nullable T)firstOrDefault:(SCIPredicate)predicate;

/**
 * Selects the first item from the list, if list is empty throws exception.
 * @return The first item from the list.
 */
- (T)first;

/**
 * Selects the first item from the list which satisfies specified predicate, if list is empty or match not found throws exception.
 * @param predicate  The predicate to check.
 * @return The first item from the list which satisfies specified predicate.
 */
- (T)first:(SCIPredicate)predicate;

/**
 * Selects single item which satisfies specified predicate, If list is empty returns null and if there are more than one item which satisfies predicate then throws exception.
 * @param predicate  The predicate to check.
 * @return The single item.
 */
- (nullable T)singleOrDefault:(SCIPredicate)predicate;

/**
 * Selects single item which satisfies specified predicate, if there are more than one item which satisfies predicate then throws exception.
 * @param predicate  The predicate to check.
 * @return The single item.
 */
- (T)single:(SCIPredicate)predicate;

/**
 * Returns an `NSArray` containing all of the elements in this list in proper sequence (from first to last element).
 */
- (NSArray<T> *)toArray;

@end

NS_ASSUME_NONNULL_END
