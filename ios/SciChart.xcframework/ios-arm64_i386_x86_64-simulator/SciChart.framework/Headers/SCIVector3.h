//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIVector3.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a vector with three single-precision floating-point values.
 */
@interface SCIVector3 : NSObject

/**
 * Gets the `X component` of the vector.
 */
@property (nonatomic, readonly) float x;

/**
 * Gets the `Y component` of the vector.
 */
@property (nonatomic, readonly) float y;

/**
 * Gets the `Z component` of the vector.
 */
@property (nonatomic, readonly) float z;

/**
 * Gets the `magnitude` of the vector.
 */
@property (nonatomic, readonly) float length;

/**
 * Creates a vector whose elements have the specified values.
 * @param x The `X component` of the vector.
 * @param y The `X component` of the vector.
 * @param z The `X component` of the vector.
 */
- (instancetype)initWithX:(float)x y:(float)y z:(float)z;

/**
 * Creates a new `SCIVector3` object from the another `SCIVector3` object.
 * @param vector The specified `SCIVector3` to create vector from.
 */
- (instancetype)initWithVector:(SCIVector3 *)vector;

/**
 * Assign new values to the the `x`, `y` and `z` components.
 * @param x The `X component` of the vector.
 * @param y The `X component` of the vector.
 * @param z The `X component` of the vector.
 */
- (void)assignX:(float)x y:(float)y z:(float)z;

/**
 * Adds two vectors together and stores in current instance.
 * @param vec1 The first vector.
 * @param vec2 The second vector.
 */
- (void)addVector:(SCIVector3 *)vec1 toVector:(SCIVector3 *)vec2;

/**
 * Add another vector with weighted `x`, `y` and `z` components.
 * @param vector The vector to add.
 * @param weight The weight to be applied onto `vector` components.
 */
- (void)addWeighted:(SCIVector3 *)vector weight:(float)weight;

/**
 * Subtracts the `vec2` from `vec1` and stores the result in current instance.
 * @param vec1 The first vector.
 * @param vec2 The second vector.
 */
- (void)substractFrom:(SCIVector3 *)vec1 vector:(SCIVector3 *)vec2;

/**
 * Multiplies a vector by a specified `scalar`.
 * @param scalar The scalar value.
 */
- (void)multiplyBy:(float)scalar;

/**
 * Makes the current vector a normal vector.
 */
- (void)normalize;

/**
 * Computes the `cross product` of two vectors ans stores it.
 * @param vec1 The first vector.
 * @param vec2 The second vector.
 */
- (void)cross:(SCIVector3 *)vec1 with:(SCIVector3 *)vec2;

/**
 * Computes the `dot product` of self and passed in vector.
 * @param vec The vector.
 * @return The dot product.
 */
- (float)dot:(SCIVector3 *)vec;

@end

NS_ASSUME_NONNULL_END
