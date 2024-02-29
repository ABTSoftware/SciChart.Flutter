//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRangeFactory.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIRange.h"
#import "ISCIComparable.h"
#import "SCIDataType.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a factory for `ISCIRange` implementations.
 */
@interface SCIRangeFactory : NSObject

/**
 * Gets the shared `SCIRangeFactory` instance.
 */
+ (instancetype)sharedInstance;

/**
 * Makes a copy of range.
 * @param originalRange The range to clone.
 * @return The clone of this range.
 */
- (id<ISCIRange>)clone:(id<ISCIRange>)originalRange;

/**
 * Creates a new range for specified data type.
 * @param dataType Range values data type.
 * @return The new range instance.
 */
- (id<ISCIRange>)newRange:(SCIDataType)dataType;

/**
 * Creates a new range for specified type with specified min/max values.
 * @param dataType Range values data type.
 * @param min Min value.
 * @param max Max value.
 * @return The new range instance.
 */
- (id<ISCIRange>)newRange:(SCIDataType)dataType withMin:(id<ISCIComparable>)min andMax:(id<ISCIComparable>)max;

@end

NS_ASSUME_NONNULL_END
