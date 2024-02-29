//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SciChart.Drawing.h is part of SCICHART®, High Performance Scientific Charts
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

#import <SciChart/SciChart.Core.h>

// MARK: - <--- SciChart.Drawing ---> -

// MARK: Platform Specific
#import <SciChart/SCIImage.h>
#import <SciChart/SCIColor.h>
#import <SciChart/SCIFont.h>
#import <SciChart/SCIFontDescriptor.h>
#import <SciChart/SCILabel.h>
#import <SciChart/SCIScreenScale.h>
#import <SciChart/SCITextView.h>

// MARK: Common
#import <SciChart/ISCIDrawable.h>
#import <SciChart/ISCIStyle.h>
#import <SciChart/ISCIPathDrawingContext.h>
#import <SciChart/SCIDrawingContextFactory.h>

#import <SciChart/SCIMSAAMode.h>
#import <SciChart/SCIBitmap.h>
#import <SciChart/SCIBitmap+UIImage.h>

#import <SciChart/SCIDrawableText.h>
#import <SciChart/SCIFontStyle.h>
#import <SciChart/SCIStyleBase.h>

// MARK: Pen Styles
#import <SciChart/ISCIStrokePaint.h>
#import <SciChart/ISCIPen2D.h>
#import <SciChart/SCIPenStyle.h>
#import <SciChart/SCISolidPenStyle.h>
#import <SciChart/SCILinearGradientPenStyle.h>
#import <SciChart/SCIRadialGradientPenStyle.h>
#import <SciChart/SCITexturePenStyle.h>

// MARK: Brushe Styles
#import <SciChart/ISCIBrush2D.h>
#import <SciChart/ISCIFillPaint.h>
#import <SciChart/SCIBrushStyle.h>
#import <SciChart/SCISolidBrushStyle.h>
#import <SciChart/SCILinearGradientBrushStyle.h>
#import <SciChart/SCIRadialGradientBrushStyle.h>
#import <SciChart/SCITextureBrushStyle.h>

// MARK: ISCIString
#import <SciChart/ISCIString.h>
#import <SciChart/NSString+ISCIString.h>
#import <SciChart/NSAttributedString+ISCIString.h>

// MARK: Render Surface
#import <SciChart/ISCIRenderSurface.h>
#import <SciChart/SCIMetalRenderSurface.h>
#if TARGET_OS_IOS
#import <SciChart/SCIOpenGLRenderSurface.h>
#endif

// MARK: RenderContext
#import <SciChart/ISCIRenderContext2D.h>
#import <SciChart/ISCIRenderSurfaceRenderer.h>
#import <SciChart/SCIChartSurfaceRenderedListener.h>

// MARK: Dynamic color providers
#import <SciChart/ISCIPathColor.h>
#import <SciChart/SCICompositePathColor.h>

// MARK: AssetManager
#import <SciChart/ISCIAssetManager2D.h>
#import <SciChart/SCIAssetManagerUtil.h>
