//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISeriesTooltipCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCISeriesTooltipCore.h"
#import "SCITooltipBase.h"
#import "ISCICleanable.h"
#import "ISCIAttachable.h"
#import "ISCIThemeable.h"

@class SCISeriesInfoCore;

NS_ASSUME_NONNULL_BEGIN

/**
 * A base class for `ISCISeriesTooltipCore` implementors.
 */
@interface SCISeriesTooltipCore<T: SCISeriesInfoCore *> : SCITooltipBase<ISCISeriesTooltipCore, ISCICleanable, ISCIAttachable, ISCIThemeable>

/// :nodoc:
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;

/// :nodoc:
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCISeriesTooltipCore` class.
 * @param seriesInfo The series info instance.
 */
- (instancetype)initWithSeriesInfo:(T)seriesInfo;

@end

NS_ASSUME_NONNULL_END
