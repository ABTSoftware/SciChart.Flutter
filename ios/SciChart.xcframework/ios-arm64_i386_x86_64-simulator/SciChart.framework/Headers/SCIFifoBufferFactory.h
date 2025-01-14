//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFifoBufferFactory.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIList.h"
#import "SCIDataType.h"

#pragma mark - !!! this file is autogenerated !!!

#define NORMALIZED_BASE_INDEX 0

/**
 * Defines the factory which allows to create a high-performance array-backed fifo buffers.
 */
@interface SCIFifoBufferFactory : NSObject

/**
 * Creates a list instance.
 * @param dataType The type of items to be placed in list.
 * @param capacity The init size of list.
 * @return A list instance.
 */
+ (id<ISCIList>)create:(SCIDataType)dataType capacity:(NSInteger)capacity;

/**
 * :nodoc:
 * @warning Intended to be used internally by SciChart.
 */
+ (NSInteger)resolveIndex:(NSInteger)index count:(NSInteger)count baseIndex:(NSInteger)baseIndex;

/**
 * :nodoc:
 * @warning Intended to be used internally by SciChart.
 */
+ (NSInteger)reverseResolveIndex:(NSInteger)index count:(NSInteger)count baseIndex:(NSInteger)baseIndex;

@end
