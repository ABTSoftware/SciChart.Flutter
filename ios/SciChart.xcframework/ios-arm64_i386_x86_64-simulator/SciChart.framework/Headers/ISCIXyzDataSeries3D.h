//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIXyzDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIDoubleValuesProvider.h"
#import "ISCIDataSeries3D.h"
#import "ISCIComparable.h"
#import "ISCIValues.h"
#import "ISCIXyzDataSeries3DValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to and XyzDataSeries3D, a series containing X, Y and Z data-points.
 */
@protocol ISCIXyzDataSeries3D <ISCIXyzDataSeries3DValues>

#pragma mark - Append

/**
 * Appends X, Y and Z value to this series.
 * @param x The X value.
 * @param y The Y value.
 * @param z The Z value.
 */
- (void)appendX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y z:(id<ISCIComparable>)z NS_REFINED_FOR_SWIFT;

/**
 * Appends X, Y and Z arrays to this series.
 * @param x The X Array.
 * @param y The Y Array.
 * @param z The Z Array.
 */
- (void)appendXArray:(NSArray<id<ISCIComparable>> *)x yArray:(NSArray<id<ISCIComparable>> *)y zArray:(NSArray<id<ISCIComparable>> *)z NS_REFINED_FOR_SWIFT;

/**
 * Appends X, Y and Z values to this series.
 * @param x The X Values.
 * @param y The Y Values.
 * @param z The Z Values.
 */
- (void)appendXValues:(id<ISCIValues>)x yValues:(id<ISCIValues>)y zValues:(id<ISCIValues>)z NS_SWIFT_NAME(append(x:y:z:));

#pragma mark - Insert

/**
 * Inserts X, Y and Z value at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param z The Z value.
 * @param index The index to insert point at.
 */
- (void)insertX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y z:(id<ISCIComparable>)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Y and Z arrays at specified index.
 * @param x The X values.
 * @param y The Y values.
 * @param z The Z values.
 * @param index The index to insert points at.
 */
- (void)insertXArray:(NSArray<id<ISCIComparable>> *)x yArray:(NSArray<id<ISCIComparable>> *)y zArray:(NSArray<id<ISCIComparable>> *)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Inserts X, Y and Z values at specified index.
 * @param x The X values.
 * @param y The Y values.
 * @param z The Z values.
 * @param index The index to insert points at.
 */
- (void)insertXValues:(id<ISCIValues>)x yValues:(id<ISCIValues>)y zValues:(id<ISCIValues>)z at:(NSInteger)index NS_SWIFT_NAME(insert(x:y:z:at:));

#pragma mark - Update

/**
 * Updates X value at specified index.
 * @param x The X value.
 * @param index The index of point to update.
 */
- (void)updateX:(id<ISCIComparable>)x at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Y value at specified index.
 * @param y The Y value.
 * @param index The index of point to update.
 */
- (void)updateY:(id<ISCIComparable>)y at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Z value at specified index.
 * @param z The Z value.
 * @param index The index of point to update.
 */
- (void)updateZ:(id<ISCIComparable>)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X, Y and Z value at specified index.
 * @param x The X value.
 * @param y The Y value.
 * @param z The Z value.
 * @param index The index of point to update.
 */
- (void)updateX:(id<ISCIComparable>)x y:(id<ISCIComparable>)y z:(id<ISCIComparable>)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X values at specified index.
 * @param x The X array.
 * @param index The index of point to start update from.
 */
- (void)updateXArray:(NSArray<id<ISCIComparable>> *)x at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Y values at specified index.
 * @param y The Y array.
 * @param index The index of point to start update from.
 */
- (void)updateYArray:(NSArray<id<ISCIComparable>> *)y at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates Z values at specified index.
 * @param z The Z array.
 * @param index The index of point to start update from.
 */
- (void)updateZArray:(NSArray<id<ISCIComparable>> *)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X, Y and Z values at specified index.
 * @param x The X array.
 * @param y The Y array.
 * @param z The Z array.
 * @param index The index of point to start update from.
 */
- (void)updateXArray:(NSArray<id<ISCIComparable>> *)x yArray:(NSArray<id<ISCIComparable>> *)y zArray:(NSArray<id<ISCIComparable>> *)z at:(NSInteger)index NS_REFINED_FOR_SWIFT;

/**
 * Updates X values at specified index.
 * @param x The X values.
 * @param index The index of point to start update from.
 */
- (void)updateXValues:(id<ISCIValues>)x at:(NSInteger)index NS_SWIFT_NAME(update(x:at:));

/**
 * Updates Y values at specified index.
 * @param y The Y values.
 * @param index The index of point to start update from.
 */
- (void)updateYValues:(id<ISCIValues>)y at:(NSInteger)index NS_SWIFT_NAME(update(y:at:));

/**
 * Updates Z values at specified index.
 * @param z The Z values.
 * @param index The index of point to start update from.
 */
- (void)updateZValues:(id<ISCIValues>)z at:(NSInteger)index NS_SWIFT_NAME(update(z:at:));

/**
 * Updates X, Y and Z values at specified index.
 * @param x The X values.
 * @param y The Y values.
 * @param z The Z values.
 * @param index The index of point to start update from.
 */
- (void)updateXValues:(id<ISCIValues>)x yValues:(id<ISCIValues>)y zValues:(id<ISCIValues>)z at:(NSInteger)index NS_SWIFT_NAME(update(x:y:z:at:));

#pragma mark - Remove

/**
 * Removes data points at specified location.
 * @param index The index of data point to remove.
 */
- (void)removeAt:(NSInteger)index;

/**
 * Removes the range of data points.
 * @param index The index of the first data point to remove.
 * @param count The amount of points to remove.
 */
- (void)removeRangeAt:(NSInteger)index count:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
