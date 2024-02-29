//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIGenericMathFactory.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIMath.h"
#import "SCIDataType.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines generic `ISCIMath` factory.
 */
@interface SCIGenericMathFactory : NSObject

/**
 * Provides the `ISCIMath` implementation for `byte` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> byteMath;

/**
 * Provides the `ISCIMath` implementation for `byte` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> shortMath;

/**
 * Provides the `ISCIMath` implementation for `int` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> intMath;

/**
 * Provides the `ISCIMath` implementation for `long` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> longMath;

/**
 * Provides the `ISCIMath` implementation for `float` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> floatMath;

/**
 * Provides the `ISCIMath` implementation for `double` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> doubleMath;

/**
 * Provides the `ISCIMath` implementation for `NSDate` values.
 */
@property (class, nonatomic, readonly) id<ISCIMath> dateMath;

/**
 * Tries to acquire `ISCIMath` for specified data type.
 * @param dataType The target data type.
 * @return The new math instance for spesified `SCIDataType`.
 */
+ (id<ISCIMath>)create:(SCIDataType)dataType;

@end

NS_ASSUME_NONNULL_END
