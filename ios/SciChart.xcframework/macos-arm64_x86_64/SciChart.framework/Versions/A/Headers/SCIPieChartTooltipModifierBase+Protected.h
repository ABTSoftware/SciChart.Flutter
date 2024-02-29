//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartTooltipModifierBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPieChartTooltipModifierBase.h"
#import "SCIPieChartMasterSlaveTouchModifierBase+Protected.h"
#import "SCIObservableSmartPropertyBool.h"
#import "SCIObservableSmartPropertyInt.h"
#import "ISCIPieRenderableSeries.h"
#import "SCIPieChartTooltipBehaviorBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIPieChartTooltipModifierBase`.
 */
@interface SCIPieChartTooltipModifierBase ()

@property (strong, nonatomic) SCISmartPropertyBool *useInterpolationProperty;
@property (strong, nonatomic) SCISmartPropertyInt *sourceModeProperty;
@property (strong, nonatomic) SCISmartPropertyBool *showTooltipProperty;

/**
 * Defines the collection of `ISCIPieRenderableSeries` from the parent `SCIPieChartSurface`.
 */
@property (weak, nonatomic, readonly) SCIObservableCollection<id<ISCIPieRenderableSeries>> *observableSeries;

@property (strong, nonatomic) SCIPieChartTooltipBehaviorBase *tooltipBehavior;

@end

NS_ASSUME_NONNULL_END
