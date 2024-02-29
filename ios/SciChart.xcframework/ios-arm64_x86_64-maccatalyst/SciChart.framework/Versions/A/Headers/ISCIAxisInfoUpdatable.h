//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxisInfoUpdatable.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIComparable.h"

@protocol ISCIAxis;

/**
 * Defines interface which allows to update `SCIAxisInfo` values.
 */
@protocol ISCIAxisInfoUpdatable <ISCICleanable>

/**
 * Gets parent `ISCIAxis` which is used to update current `ISCIAxisInfoUpdatable` instance.
 */
@property (strong, nonatomic, readonly, nonnull) id<ISCIAxis> axis;

/**
 * Updates underlying `SCIAxisInfo` based on `dataValue`.
 * @param dataValue The new data value.
 */
- (void)updateValue:(nonnull id<ISCIComparable>)dataValue;

@end
