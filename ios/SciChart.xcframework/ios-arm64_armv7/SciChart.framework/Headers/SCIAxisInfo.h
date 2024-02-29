//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisInfoUpdatable.h"
#import "ISCIString.h"
#import "SCIAxisAlignment.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides information on an axis hit test operation.
 * @see `-[ISCIAxisInfoProvider getAxisInfo]`.
 */
@interface SCIAxisInfo : NSObject<ISCIAxisInfoUpdatable>

/**
 * The axis id.
 */
@property (copy, nonatomic, nullable) NSString *axisId;

/**
 * The axis title.
 */
@property (copy, nonatomic, nullable) NSString *axisTitle;

/**
 * The attributed axis title.
 */
@property (copy, nonatomic, nullable) NSAttributedString *attributedAxisTitle;

/**
 * The `SCIAxisAlignment` value.
 */
@property (nonatomic) SCIAxisAlignment axisAlignment;

/**
 * The data value.
 */
@property (strong, nonatomic) id<ISCIComparable> dataValue;

/**
 * The data value formatted with `ISCIAxisCore.textFormatting` string.
 */
@property (copy, nonatomic) id<ISCIString> axisFormattedDataValue;

/**
 * The data value formatted with `ISCIAxisCore.cursorTextFormatting` string.
 */
@property (copy, nonatomic) id<ISCIString> cursorFormattedDataValue;

/**
 * Flag indicating whether the associated axis is horizontal axis.
 */
@property (nonatomic) BOOL isHorizontal;

/**
 * Flag indicating whether the associated axis is XAxis.
 */
@property (nonatomic) BOOL isXAxis;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIAxisInfo` class.
 * @param axis The parent axis
 */
- (instancetype)initWithAxis:(id<ISCIAxis>)axis NS_DESIGNATED_INITIALIZER;

/**
 * Updates this instance with latest value which does not depend on data value.
 */
- (void)update;

/**
 * Helper method which creates and updates `SCIAxisInfo` instance with latest information provided by axis.
 * @param axis The `ISCIAxis` instance for which.
 * @param dataValue The dataValue with which `SCIAxisInfo` should be updated.
 * @return The `SCIAxisInfo` instance with latest information provided by axis.
 */
+ (SCIAxisInfo *)obtainFor:(id<ISCIAxis>)axis andDataValue:(id<ISCIComparable>)dataValue;

@end

NS_ASSUME_NONNULL_END
