//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISmartProperty.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines a smart property class which can hold any `NSObject` instances.
 */
@interface SCISmartProperty : NSObject

/**
 * Creates a new instance of `SCISmartProperty` class.
 * @param defaultValue The default value for property.
 */
- (instancetype)initWithDefaultValue:(nullable id)defaultValue;

/**
 * Gets the current property value.
 */
@property (strong, nonatomic, readonly, nullable) id value;

/**
 * Sets weak value for this property if it was not overridden by `-setStrongValue:` call.
 * @param newValue The new value for property.
 */
- (void)setWeakValue:(nullable id)newValue;

/**
 * Sets weak value for this property which overrides any previously set value.
 * @param newValue The new value for property.
 */
- (void)setStrongValue:(nullable id)newValue;

@end

NS_ASSUME_NONNULL_END
