//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifierBase3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipModifierBase3D.h"
#import "SCIMasterSlaveTouchModifierBase3D+Protected.h"
#import "SCIObservableSmartPropertyBool.h"
#import "SCIObservableSmartPropertyInt.h"
#import "SCITooltipBehaviorBase3D.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipModifierBase3D`.
 */
@interface SCITooltipModifierBase3D ()

@property (nonatomic, strong, nonnull) SCISmartPropertyInt *sourceModeProperty;
@property (nonatomic, strong, nonnull) SCISmartPropertyBool *showTooltipProperty;
@property (nonatomic, strong, nullable) SCITooltipBehaviorBase3D *tooltipBehavior;

@property (nonatomic, readonly, nonnull) SCIObservableCollection<id<ISCIRenderableSeries3D>> *observableSeries;

/**
 * Creates a new instance of the `SCITooltipModifierBase3D` class.
 * @param behavior The `SCITooltipBehaviorBase3D` which will be associated with this modifier.
 */
- (nonnull instancetype)initWithTooltipBehavior:(nonnull SCITooltipBehaviorBase3D *)behavior;

@end
