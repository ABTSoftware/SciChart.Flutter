//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTooltipsBehaviorBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisTooltipsBehaviorBase.h"
#import "SCIModifierBehavior+Protected.h"
#import "SCIFunc1.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIAxisTooltipsBehaviorBase`.
 */
@interface SCIAxisTooltipsBehaviorBase ()

@property (nonatomic, readonly) SCIFunc1 projectionFunction;

@end

@interface SCIAxisTooltipsBehaviorBase (Protected)

/**
 * Applies specified theme to the passed in `ISCIAxisTooltip` instance.
 * @param themeProvider The `ISCIThemeProvider` instance which provides new theme for current instance.
 * @param tooltip The `ISCIAxisTooltip` instance to apply theme on.
 */
- (void)applyThemeProvider:(id<ISCIThemeProvider>)themeProvider tooltip:(id<ISCIAxisTooltip>)tooltip;

/**
 * Updates all of the tooltips associated with X Axes.
 * @param tooltip The `ISCIAxisTooltip` instance to update.
 * @param point The point to update the `ISCIAxisTooltip` instance passed in.
 */
- (void)updateXAxisTooltip:(id<ISCIAxisTooltip>)tooltip at:(CGPoint)point;

/**
 * Updates all of the tooltips associated with Y Axes.
 * @param tooltip The `ISCIAxisTooltip` instance to update.
 * @param point The point to update the `ISCIAxisTooltip` instance passed in.
 */
- (void)updateYAxisTooltip:(id<ISCIAxisTooltip>)tooltip at:(CGPoint)point;

/**
 * Tries to add the `ISCIAxisTooltip` instance to the associated axis `ISCIAxisModifierSurface` instance.
 * @param tooltip The `ISCIAxisTooltip` instance to add.
 */
+ (void)tryAddTooltip:(id<ISCIAxisTooltip>)tooltip;

/**
 * Tries to remove the `ISCIAxisTooltip` instance from the associated axis `ISCIAxisModifierSurface` instance.
 * @param tooltip The `ISCIAxisTooltip` instance to remove.
 */
+ (void)tryRemoveTooltip:(id<ISCIAxisTooltip>)tooltip;

@end

NS_ASSUME_NONNULL_END
