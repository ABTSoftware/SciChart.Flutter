//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIObservableSmartPropertyBool.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISmartPropertyBool.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the block for the `SCISmartPropertyBool` listener.
 * Called when new property value is set.
 * @param oldValue The old value.
 * @param newValue The new value.
 */
typedef void (^SCIBoolPropertyChangeListener) (BOOL oldValue, BOOL newValue);

/**
 * Defines a smart property class which can hold `boolean` value and provides listener with old and new value.
 */
@interface SCIObservableSmartPropertyBool : SCISmartPropertyBool

/**
 * Creates a new instance of `SCIObservableSmartPropertyBool` class.
 * @param listener The listener change listener for this property.
 */
- (instancetype)initWithListener:(SCIBoolPropertyChangeListener)listener;

/**
 * Creates a new instance of `SCIObservableSmartPropertyBool` class.
 * @param listener The listener change listener for this property.
 * @param defaultValue The default value for property.
 */
- (instancetype)initWithListener:(SCIBoolPropertyChangeListener)listener andDefaultValue:(BOOL)defaultValue;

@end

NS_ASSUME_NONNULL_END
