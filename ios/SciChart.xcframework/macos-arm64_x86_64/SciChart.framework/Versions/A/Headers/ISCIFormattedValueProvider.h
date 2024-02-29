//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIFormattedValueProvider.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisInfo.h"

/**
 * Defines interface with method for getting formatted value based on `SCIAxisInfo`.
 */
@protocol ISCIFormattedValueProvider

/**
 * Formats the value provided by `SCIAxisInfo` and returns formatted string.
 * @param axisInfo The `SCIAxisInfo` to get formatted value from.
 * @return The formatted string.
 */
- (nullable id<ISCIString>)formatValueWithAxisInfo:(nullable SCIAxisInfo *)axisInfo;

@end
