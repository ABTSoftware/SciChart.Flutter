//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIStyle.h is part of SCICHART®, High Performance Scientific Charts
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
 * Defines the interface for style object throughout SciChart.
 */
@protocol ISCIStyle <NSObject>

/**
 * Applies this style to specified styleable object.
 * @param styleableObject The target styleable object.
 */
- (void)tryApplyStyleTo:(id)styleableObject;

/**
 * Discards this style on specified styleable object.
 * @param styleableObject The target styleable object.
 */
- (void)tryDiscardStyleFrom:(id)styleableObject;

/**
 * Gets the target styleable object type.
 */
@property (strong, nonatomic, readonly) Class styleableObjectType;

@end

NS_ASSUME_NONNULL_END
