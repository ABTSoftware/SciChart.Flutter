//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartTheme.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

/// Defines an extensible enum for SciChart themes
typedef NSString * _Nonnull SCIChartTheme NS_TYPED_EXTENSIBLE_ENUM;

/// Defines the `Key` for the `BlackSteel` theme in SciChart.
static SCIChartTheme const SCIChartThemeBlackSteel = @"SCIChartThemeBlackSteel";
/// Defines the `Key` for the `SciChartv4Dark` theme in SciChart.
static SCIChartTheme const SCIChartThemeV4Dark = @"SCIChartThemeV4Dark";
/// Defines the `Key` for the `Bright_Spark` theme in SciChart.
static SCIChartTheme const SCIChartThemeBrightSpark = @"SCIChartThemeBrightSpark";
/// Defines the `Key` for the `Chrome` theme in SciChart.
static SCIChartTheme const SCIChartThemeChrome = @"SCIChartThemeChrome";
/// Defines the `Key` for the `Electric` theme in SciChart.
static SCIChartTheme const SCIChartThemeElectric = @"SCIChartThemeElectric";
/// Defines the `Key` for the `ExpressionLight` theme in SciChart.
static SCIChartTheme const SCIChartThemeExpressionLight = @"SCIChartThemeExpressionLight";
/// Defines the `Key` for the `Oscilloscope` theme in SciChart.
static SCIChartTheme const SCIChartThemeOscilloscope = @"SCIChartThemeOscilloscope";
/// Defines the `Key` for the `ExpressionDark` theme in SciChart.
static SCIChartTheme const SCIChartThemeExpressionDark = @"SCIChartThemeExpressionDark";
/// Defines the `Key` for the `SCIChartThemeNavy` theme in SciChart.
static SCIChartTheme const SCIChartThemeNavy = @"SCIChartThemeNavy";
/// Defines the `Key` for the default theme in SciChart. Which is `SCIChartThemeV4Dark`.
static SCIChartTheme const SCIChartThemeDefault = @"SCIChartThemeV4Dark";


/// Defines the `Key` for the `BlackSteel` theme in SciChart.
static NSString * _Nonnull const SCIChart_BlackSteelStyleKey __deprecated_msg("Please use SCIChartThemeBlackSteel instead") = SCIChartThemeBlackSteel;
/// Defines the `Key` for the `SciChartv4Dark` theme in SciChart.
static NSString * _Nonnull const SCIChart_SciChartv4DarkStyleKey __deprecated_msg("Please use SCIChartThemeV4Dark instead") = SCIChartThemeV4Dark;
/// Defines the `Key` for the `Bright_Spark` theme in SciChart.
static NSString * _Nonnull const SCIChart_Bright_SparkStyleKey __deprecated_msg("Please use SCIChartThemeBrightSpark instead") = SCIChartThemeBrightSpark;
/// Defines the `Key` for the `Chrome` theme in SciChart.
static NSString * _Nonnull const SCIChart_ChromeStyleKey __deprecated_msg("Please use SCIChartThemeChrome instead") = SCIChartThemeChrome;
/// Defines the `Key` for the `Electric` theme in SciChart.
static NSString * _Nonnull const SCIChart_ElectricStyleKey __deprecated_msg("Please use SCIChartThemeElectric instead") = SCIChartThemeElectric;
/// Defines the `Key` for the `ExpressionLight` theme in SciChart.
static NSString * _Nonnull const SCIChart_ExpressionLightStyleKey __deprecated_msg("Please use SCIChartThemeExpressionLight instead") = SCIChartThemeExpressionLight;
/// Defines the `Key` for the `Oscilloscope` theme in SciChart.
static NSString * _Nonnull const SCIChart_OscilloscopeStyleKey __deprecated_msg("Please use SCIChartThemeOscilloscope instead") = SCIChartThemeOscilloscope;
/// Defines the `Key` for the `ExpressionDark` theme in SciChart.
static NSString * _Nonnull const SCIChart_ExpressionDarkStyleKey __deprecated_msg("Please use SCIChartThemeExpressionDark instead") = SCIChartThemeExpressionDark;
/// Defines the `Key` for the `SCIChartThemeNavy` theme in SciChart.
static NSString * _Nonnull const SCIChart_SCIChartThemeNavyStyleKey __deprecated_msg("Please use SCIChartThemeNavy instead") = SCIChartThemeNavy;
/// Defines the `Key` for the default theme in SciChart. Which is `SCIChartThemeNavy`.
static NSString * _Nonnull const SCIChart_DefaultThemeKey __deprecated_msg("Please use SCIChartThemeDefault instead") = SCIChartThemeNavy;


