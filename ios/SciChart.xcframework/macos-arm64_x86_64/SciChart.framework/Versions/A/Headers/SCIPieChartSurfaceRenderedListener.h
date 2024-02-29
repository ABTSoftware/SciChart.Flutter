//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieChartSurfaceRenderedListener.h is part of SCICHART®, High Performance Scientific Charts
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

@protocol ISCIPieChartSurface;
@class SCIPieChartRenderedMessage;

/**
 * Defines the listener interface which is called at the end of single render pass.
 * Called at the end of the render pass.
 * @param surface The surface which is rendered.
 * @param renderedMessage The rendered message.
 */
typedef void (^SCIPieChartSurfaceRenderedListener) (id<ISCIPieChartSurface> surface, SCIPieChartRenderedMessage *renderedMessage);
