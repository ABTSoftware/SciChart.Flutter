//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTooltipsBehaviorBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIModifierBehavior.h"
#import "ISCIChartModifier.h"
#import "ISCIAxis.h"

/**
 * Defines a base class with axis tooltips behavior for `ISCIChartModifier` implementors.
 * @note `T` is the type of modifier to which this behavior will be attached.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIAxisTooltipsBehaviorBase<T : id<ISCIChartModifier>> : SCIModifierBehavior<T>

/**
 * Defines the `SCIObservableCollection` of the XAxes which will take part in interaction.
 */
@property (weak, nonatomic, nullable) SCIObservableCollection<id<ISCIAxis>> *observableXAxes;

/**
 * Defines the `SCIObservableCollection` of the YAxes which will take part in interaction.
 */
@property (weak, nonatomic, nullable) SCIObservableCollection<id<ISCIAxis>> *observableYAxes;

@end
