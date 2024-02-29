//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIThemeManager.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIChartTheme.h"

@protocol ISCIThemeable;
@protocol ISCIThemeProvider;

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides API for automatic theme management.
 */
@interface SCIThemeManager : NSObject

/**
 * Gets `ISCIThemeProvider` instance by `themeKey`
 * @param themeKey The id of theme to get.
 * @return `ISCIThemeProvider` instance.
 */
+ (nullable id<ISCIThemeProvider>)themeProviderWith:(NSString *)themeKey __deprecated_msg("Please use `themeProviderWithTheme:` instead");;

/**
 * Gets `ISCIThemeProvider` instance by `themeKey`
 * @param theme The id of theme to get.
 * @return `ISCIThemeProvider` instance.
 */
+ (nullable id<ISCIThemeProvider>)themeProviderWithTheme:(SCIChartTheme)theme;

/**
 * Removes cached `ISCIThemeProvider` instance by its `themeKey`.
 * @param themeKey The `themeKey` of theme to remove.
 */
+ (void)removeThemeByThemeKey:(NSString *)themeKey __deprecated_msg("Please use `removeTheme:` instead");

/**
 * Removes cached `ISCIThemeProvider` instance by its `themeKey`.
 * @param theme The theme to remove.
 */
+ (void)removeTheme:(SCIChartTheme)theme;

/**
 * Creates and adds theme from specified style.
 * @param themeKey The theme style to create `ISCIThemeProvider` from.
 * @param bundle The bundle where .plist theme file is located.
 */
+ (void)addThemeByThemeKey:(NSString *)themeKey fromBundle:(NSBundle *)bundle __deprecated_msg("Please use `addTheme:fromBundle:` instead");

/**
 * Creates and adds theme from specified style.
 * @param theme The theme style to create `ISCIThemeProvider` from.
 * @param bundle The bundle where .plist theme file is located.
 */
+ (void)addTheme:(SCIChartTheme)theme fromBundle:(NSBundle *)bundle;

/**
 * Apply theme to specified `ISCIThemeable` instance.
 * @param themeable The target to apply theme to.
 * @param themeKey The theme id.
 */
+ (void)applyThemeToThemeable:(id<ISCIThemeable>)themeable withThemeKey:(NSString *)themeKey __deprecated_msg("Please use `applyTheme:toThemeable:` instead");

/**
 * Apply theme to specified `ISCIThemeable` instance.
 * @param theme The theme to be applied.
 * @param themeable The target to apply theme to.
 */
+ (void)applyTheme:(SCIChartTheme)theme toThemeable:(id<ISCIThemeable>)themeable;

/**
 * Apply default theme to specified `ISCIThemeable` instance.
 * @param themeable The target to apply theme to.
 */
+ (void)applyDefaultThemeToThemeable:(id<ISCIThemeable>)themeable;

@end

NS_ASSUME_NONNULL_END
