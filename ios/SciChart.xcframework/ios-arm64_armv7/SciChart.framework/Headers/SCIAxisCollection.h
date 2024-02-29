//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisCollection.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIObservableCollection.h"
#import "ISCIAxis.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Contains a collection of `ISCIAxis` and allows getting of axis by Id.
 */
@interface SCIAxisCollection : SCIObservableCollection<id<ISCIAxis>>

/**
 * Initializes a new instance of `SCIAxisCollection` class.
 * @param collection The collections with items to add.
 */
- (instancetype)initWithCollection:(NSArray<id<ISCIAxis>> *)collection;

/**
 * Gets the primary axis in the collection.
 * This is the first axis that has `ISCIAxis.isPrimaryAxis` set to YES, or `nil` - if none exists.
 */
@property (strong, nonatomic, readonly, nullable) id<ISCIAxis> primaryAxis;

/**
 * Gets the value indicating whether this collection has primary axis.
 * @return YES - if any of the Axes in the collection have `ISCIAxis.isPrimaryAxis` set to YES.
 */
@property (nonatomic, readonly) BOOL hasPrimaryAxis;

/**
 * Gets the default axis, which is equal to the axis with the `DEFAULT_AXIS_ID`, else - `nil`.
 */
@property (strong, nonatomic, readonly) id<ISCIAxis> defaultAxis;

/**
 * Gets the axis specified by id if it exists, otherwise returns nil.
 * @param axisId The axis id.
 * @return The axis with specified id if it exists, otherwise returns nil.
 */
- (id<ISCIAxis>)getAxisById:(NSString *)axisId;

/**
 * Gets the axis specified by id if it exists, otherwise returns nil.
 * @param axisId The axis id.
 * @param assertAxisExists If set to YES assert and throw if the axis does not exist.
 * @return The axis with specified id if it exists, otherwise returns nil.
 */
- (id<ISCIAxis>)getAxisById:(NSString *)axisId assertAxisExists:(BOOL)assertAxisExists;

@end

NS_ASSUME_NONNULL_END
