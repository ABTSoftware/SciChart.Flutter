//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartModifierCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartModifierCore.h"

/**
 * Gets the default animation duration for `SCIChartModifierCore` ancestors.
 */
extern const NSTimeInterval SCI_DEFAULT_ANIMATION_DURATION;

/**
 * Defines the core class to a Chart Modifier, which can be used to extend the interactivity or rendering of the throughout SciChart.
 */
@interface SCIChartModifierCore : NSObject<ISCIChartModifierCore>

/**
 * Gets or sets a value indicating whether motion events should be propagated to the target.
 */
@property (nonatomic) BOOL receiveHandledEvents;

/**
 * Gets or sets a string ID used for propagating motion events from the master chart.
 * @note Returns the class name by default.
 */
@property (strong, nonatomic, nonnull) NSString *eventsGroupTag;

@end
