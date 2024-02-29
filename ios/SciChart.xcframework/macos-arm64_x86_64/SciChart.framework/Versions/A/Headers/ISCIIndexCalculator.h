//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2022. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIIndexCalculator.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines protocol which allows to transform values to indices and vice versa.
 */
@protocol ISCIIndexCalculator <NSObject>

/**
 * Gets index of specified `value` in sequence defined by this `ISCIIndexDataProvider` instance.
 * @param value The value to get index for.
 * @return The index of specified value.
 */
- (double)getIndexFrom:(double)value;

/**
 * Gets value for specified `index` in sequence defined by this `ISCIIndexDataProvider` instance.
 * @param index The index to get value for
 * @return The value at specified index
 */
- (double)getValueFrom:(double)index;

/**
 * Gets indices of specified `values` in sequence defined by this `ISCIIndexDataProvider` instance.
 * @param dataValues The values to get indices for.
 * @param indices The target indices array.
 * @param count Amount of points to transform.
 */
- (void)getIndices:(float *)indices fromDataValues:(double *)dataValues count:(NSInteger)count;

/**
 * Gets values for specified `indices` in sequence defined by this `ISCIIndexDataProvider` instance.
 * @param indices The indices to get values for.
 * @param dataValues The target values array.
 * @param count Amount of points to transform.
 */
- (void)getValues:(double *)dataValues fromIndices:(double *)indices count:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
