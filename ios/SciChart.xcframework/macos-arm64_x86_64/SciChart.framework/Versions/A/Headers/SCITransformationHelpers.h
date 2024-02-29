//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITransformationHelpers.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFloatValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a helper methods to manipulate with `SCIFloatValues`.
 */
@interface SCITransformationHelpers : NSObject

/**
 * Copies `SCIFloatValues` from a Source to a Destination.
 * @param source The values that will be copied.
 * @param dest The destination that will contain copied values.
 */
+ (void)copyDataFromSource:(SCIFloatValues *)source toDest:(SCIFloatValues *)dest;

/**
 * Offsets `SCIFloatValues` based on Zero Line.
 * @param data The values to transform.
 * @param zeroLine The Zero Line value.
 */
+ (void)offsetData:(SCIFloatValues *)data relativeToZeroLine:(float)zeroLine;

/**
 * Offsets `SCIFloatValues` based on Offset value.
 * @param data The values to transform.
 * @param offset The Offset value.
 */
+ (void)offsetData:(SCIFloatValues *)data byOffset:(float)offset;

/**
 * Fills `SCIFloatValues` with the Repeated value.
 * @param data The values to fill.
 * @param value The Repeated value.
 */
+ (void)fillData:(SCIFloatValues *)data withValue:(float)value;

/**
 * Offsets `SCIFloatValues` based on Scale value.
 * @param data The values to transform.
 * @param scale The Scale value.
 */
+ (void)offsetData:(SCIFloatValues *)data fromSource:(SCIFloatValues *)source byScale:(float)scale;

@end

NS_ASSUME_NONNULL_END
