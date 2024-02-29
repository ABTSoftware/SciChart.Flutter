//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIPieSegmentLabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "ISCIPieSegment.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface to define a label formatter for `ISCIPieSegment`.
 */
@protocol ISCIPieSegmentLabelFormatter <ISCIAttachable>

/**
 * Formats a label based on specified `ISCIPieSegment` passed in.
 * @param pieSegment The `ISCIPieSegment` to format.
 * @return The formatted value.
 */
- (NSString *)formatLabelForPieSegment:(id<ISCIPieSegment>)pieSegment;

@end

NS_ASSUME_NONNULL_END
