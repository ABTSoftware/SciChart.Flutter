//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIShortRange.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCINumberRange.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a range of type `short`.
 */
@interface SCIShortRange : SCINumberRange

/**
 * Initializes a new instance of `SCIShortRange`.
 * @param min The min value to initialize range with.
 * @param max The max value to initialize range with.
 */
- (instancetype)initWithMin:(short)min max:(short)max;

/**
 * Initializes a new instance of `SCIShortRange`.
 * @param range The `SCIShortRange` instance to initialize new range with.
 */
- (instancetype)initWithRange:(SCIShortRange *)range;

@end

NS_ASSUME_NONNULL_END
