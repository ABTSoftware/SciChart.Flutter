//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationSurfaceEnum.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Enumeration constants to define the Annotation Surface that an `ISCIAnnotation` is placed on.
 */
typedef NS_ENUM(NSUInteger, SCIAnnotationSurfaceEnum) {
    /**
     * The annotation is placed `above the chart`.
     */
    SCIAnnotationSurface_AboveChart,

    /**
     * The annotation is placed `below the chart`.
     */
    SCIAnnotationSurface_BelowChart,

    /**
     * The annotation is placed on the `X-Axis`.
     */
    SCIAnnotationSurface_XAxis,

    /**
     * The annotation is placed on the `Y-Axis`.
     */
    SCIAnnotationSurface_YAxis
};
